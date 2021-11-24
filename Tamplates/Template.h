#pragma once

#include <iostream>
#include <vector>

template<typename T>
class Template {
    private:
        std::vector<T> elements;

    public:
        Template(){

        }

        void Put(T _element){
            elements.push_back(_element);

            std::cout << "--------" << std::endl;
            std::cout << "Put element: " << _element << std::endl;

        }

        void Get(){
            for (int i = 0; i < elements.size(); ++i) {
                std::cout << "--------" << std::endl;
                std::cout <<  "Get element: "<< elements[i] << std::endl;
            }
        }

        void Size(){
            std::cout << "--------" << std::endl;
            std::cout << "Size is: " << elements.size() << std::endl;
        }
};