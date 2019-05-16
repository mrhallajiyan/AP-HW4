#include<iostream>
#include<vector>
#include<memory>

template<typename T>
void SizeCap(std::vector<T> &);

int main()
{
    std::vector<std::unique_ptr<std::string>> vec1;

    /*for(int i{}; i < 1000; i++){
        vec1.push_back(std::unique_ptr<std::string>{new std::string{"Str" + std::to_string(i)}});
        std::cout << *vec1[i] << std::endl;
        SizeCap(vec1);
    }*/

    std::vector<std::unique_ptr<std::string>> vec2;
    vec2.reserve(1000);
    
    for(int i{}; i < 1000; i++){
        vec2.push_back(std::unique_ptr<std::string>{new std::string{"Str" + std::to_string(i)}});
        std::cout << *vec2[i] << std::endl;
        SizeCap(vec2);
    }
}

template<typename T>
void SizeCap(std::vector<T> &vec){
        std::cout << "Capacity:" << vec.capacity() << " Size:" << vec.size() << std::endl;
}

