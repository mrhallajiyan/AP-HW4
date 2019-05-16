#include<iostream>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm>

void disp(std::vector<int>);
void SetDisp(std::set<int>);

int main(){

    
    std::vector<int> vec{1, 2, 3, 4, 5, 4, 3, 2, 1};
    disp(vec);

    //A1
    //std::remove(vec.begin(), vec.end(), 2); 
    //disp(vec);

    //A2
    /*std::vector<int>::iterator it = vec.begin();
    while(it != vec.end()){
        if(*it == 2){it = vec.erase(it);}
        else{it++;}
    }
    disp(vec);*/

    //B
    //std::transform(vec.begin(), vec.end(), vec.begin(), std::bind1st(std::multiplies<int>(),2));
    //disp(vec);
    
    //C
    double avg{};
    std::for_each(vec.begin(), vec.end(), [&avg](const int &i){avg += i;});
    avg /= vec.size();
    std::sort(vec.begin(), vec.end(), [&avg](const auto &a, const auto &b){return std::abs(a - avg) < std::abs(b - avg);});
    disp(vec);

    //D
    /*std::sort(std::begin(vec), std::end(vec));
    vec.erase(std::unique( std::begin(vec), std::end(vec)), std::end(vec));
    disp(vec);*/

    //E1
    std::set<int> mySet(vec.begin(), vec.end());
    SetDisp(mySet);

    //E2
    std::set<int>::iterator it{};
    it = mySet.find(3);
    mySet.erase(it, mySet.end());
    SetDisp(mySet);
}

void disp(std::vector<int> vec){
    for(size_t i{}; i < vec.size(); i++){
        std::cout << vec[i] << ", ";
    }
    std::cout << std::endl;
}

void SetDisp(std::set<int> set){
    for(auto it = set.begin(); it != set.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << std::endl;
}