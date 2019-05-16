#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<numeric>
#include<cmath>

template<typename T>
void Disp(std::vector<T>);

void DispArray(int[]);

int RandomNumber(){return rand() % 50 + 1;};

int main(){

    int a[50]{};
    std::vector<int> vecA(a, a + 50);    
    //Disp(vecA);

    int b[50]{};
    std::generate_n(b, 50, RandomNumber);
    //DispArray(b);

    std::sort(b, b + 50);
    std::vector<int> vecB(b, b + 50);
    auto index = std::unique(vecB.begin(), vecB.end());
    vecB.erase(index, vecB.end());
    //Disp(vecB);

    int c[50]{};
    std::iota(std::begin(c), std::end(c), 1);
    std::random_shuffle(std::begin(c), std::end(c));
    //DispArray(c);

    std::vector<int> vecD{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    std::vector<int> vecC(c, c + 50);
    //Disp(vecC);
    vecB.resize(50);
    //Disp(vecB);
    std::vector<int>::iterator itb{vecB.begin()};
    std::vector<int>::iterator itc{vecC.begin()};
    std::for_each(vecD.begin(), vecD.end(), [&itb, &itc](int &i){i = std::pow(*(itc++), 2) - std::pow(*(itb++), 2);});
    //Disp(vecD);
    
}

template<typename T>
void Disp(std::vector<T> vec){
    for(auto it = vec.begin(); it != vec.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << std::endl;
}

void DispArray(int arr[]){
    for(int i{}; i < 50; i++){
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl;
}
