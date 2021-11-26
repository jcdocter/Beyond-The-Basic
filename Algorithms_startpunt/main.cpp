#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

int main() {
    cout << "1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na" << endl;
    std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    // 1) de vector in 2 nieuwe vectoren te splitsen: 1 met alles wat alfabetisch voor 'purple' komt, 1 met alles er na
    vector<string> secondColours;

    sort(colours.begin(), colours.end(), [](string a, string b){
        return a < b;
    });

    cout << "first vector: " << endl;
    for(string colour : colours){
        if(colour < "purple"){
            cout << colour << endl;;
        }else{
            secondColours.push_back(colour);
        }
    }

    cout << "second vector: " << endl;
    for(string secondColour : secondColours){
        cout << secondColour << endl;
    }

    {
        cout << endl;
        cout << "2) alle elementen UPPERCASE te maken" << endl;
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // 2) alle elementen UPPERCASE te maken.
        for(string colour : colours){
            transform(colour.begin(), colour.end(), colour.begin(), [](unsigned char c) -> unsigned char{return toupper(c);});
            cout << colour << endl;
        }
        cout << endl;

    }
    {
        cout << "3) alle dubbele te verwijderen" << endl;
        std::vector<std::string> colours{"red", "green", "white", "blue", "orange", "green", "orange", "black", "purple"};
        // 3) alle dubbele te verwijderen
        sort(colours.begin(), colours.end());
        auto doubleValue = unique(colours.begin(), colours.end());
        colours.erase(doubleValue, colours.end());

        for(string colour : colours){
            cout << colour << endl;
        }
        cout << endl;
    }

    // gebruik functies uit <algorithm> en <functional> om (steeds vanuit een ORIGINELE copie van deze vector)
    {
        cout << "1) alle negatieve elementen te verwijderen" << endl;
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 1) alle negatieve elementen te verwijderen
        auto removeValue = remove_if(numbers.begin(), numbers.end(), [](double i){
            return i < 0;
        });

        numbers.erase(removeValue, numbers.end());

        for(double number : numbers){
            cout << number << endl;
        }
        cout << endl;
    }

    {
        cout << "2) voor alle elementen te bepalen of ze even of oneven zijn:" << endl;
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        // 2) voor alle elementen te bepalen of ze even of oneven zijn


        cout << "Even: ";
        for(double number : numbers){
            if(0 == (int)number % 2){
                cout << number << " ";
            }
        }
        cout << endl;

        cout << "Odd: ";
        for(double number : numbers){
            if(0 != (int)number % 2){
                cout << number << " ";
            }
        }
        cout << endl;
    }

    {
        cout << endl;
        cout << "3) de som, het gemiddelde, en het product van alle getallen te berekenen" << endl;
        std::vector<double> numbers{10, 324422, 6, -23, 234.5, 654.1, 3.1242, -9.23, 635};
        int multiplier = 1;
        // 3) de som, het gemiddelde, en het product van alle getallen te berekenen
        double sum = accumulate(numbers.begin(), numbers.end(), 0);
        double product = accumulate(numbers.begin(), numbers.end(), 1, multiplies<double>());

        cout << "the sum is: " << sum << endl;
        cout << "the average is: " << sum / numbers.size() << endl;
        cout << "the product is: " << product << endl;
    }

    return 0;
}