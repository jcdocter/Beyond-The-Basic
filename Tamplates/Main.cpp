#include <iostream>
#include <vector>

#include "Template.h"

using namespace std;

template<typename T>
T TemplateFunction(T _parameter){

    cout << _parameter << endl;
    return _parameter;
}

template<typename T>
void TemplateClass(Template<T> _collector){
    _collector.Get();
    _collector.Size();
}

int main(){
    string stringArrays[] = {"name1", "name2", "name3"};
    float  floatArrays[] = {1.2f, 2.4f, 4.8f};

    // template function
    for(string stringArray : stringArrays){
        TemplateFunction<string>(stringArray);
    }

    for(float floatArray : floatArrays){
        TemplateFunction<float>(floatArray);
    }
    //end template function

    // template class
    Template<string> collectorString;
    for(string stringArray : stringArrays){
        collectorString.Put(stringArray);
    }
    TemplateClass(collectorString);

    Template<float> collectorFloat;
    for(float floatArray : floatArrays){
        collectorFloat.Put(floatArray);
    }
    TemplateClass((collectorFloat));

}
