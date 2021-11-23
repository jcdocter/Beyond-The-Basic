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
        }

        void Get(){
            for (int i = 0; i < elements.size(); ++i) {
                std::cout << elements[i] << std::endl;
            }
        }

        void Size(){
            std::cout << elements.size() << std::endl;
        }
};