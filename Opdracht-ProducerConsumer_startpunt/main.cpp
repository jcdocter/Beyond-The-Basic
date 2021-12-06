#include <queue>
#include <thread>
#include <iostream>
#include <condition_variable>

using namespace std::chrono_literals;

std::condition_variable flag;
std::mutex mutex;

int counter = 0;
bool done = false;

std::queue<int> goods;

void producer() {
    std::cout << "Starting producer..." << std::endl;

    for (int i = 0; i < 500; ++i) {
        goods.push(i);
        counter++;
    }

    std::this_thread::sleep_for(1s);
    flag.notify_all();
    done = true;

    std::cout << "Finished producer..." << std::endl;
}

void consumer() {
    std::cout << "Starting consumer..." << std::endl;

    std::unique_lock<std::mutex> lock(mutex);
    while (!done) {
        while (!goods.empty()) {
            goods.pop();
            counter--;
        }
        flag.wait(lock);
    }

    std::cout << "Finished consumer..." << std::endl;
}

int main() {
    counter = 0;
    std::thread producerThread(producer);
    std::thread consumerThread(consumer);

    producerThread.join();
    consumerThread.join();

    std::cout << "Net: " << counter << " " << goods.size() << std::endl;
}
