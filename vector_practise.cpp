#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main(){
    std::vector<int> vec1;
    std::cout<<"Vector size::"<<vec1.size()<<std::endl;
    std::vector<int> vec2(5);
    for (int x:vec2){
        std::cout<<x<<" ";

    }
    std::cout<<std::endl;
    std::vector<int> vec3(3,10);
    std::cout<<"vec3::";
    for (int x: vec3){
        std::cout << x<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> vec4 = {1,2,3,4,5};
    std::cout<<"Vector 4::";
    for (int x:vec4){
        std::cout<< x << " ";

    }
    std::cout<<std::endl;
    std::cout<<"Vec4::"<<vec4[0]<<std::endl;
    try {
        std::cout<<" Vec4::"<<vec4.at(2);
    } catch (const std::out_of_range& e){
        std::cerr<<"Error"<<e.what()<<std::endl;
    }

    std::cout<<vec4.front()<<std::endl;
    std::cout<<vec4.back()<<std::endl;

    std::cout<<" Size::"<<vec4.size()<<",Capacity="<<vec4.capacity();
    for (int x:vec4){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    std::vector<int> vec_alg = {50,20,30,40};
    int sum_vec = std::accumulate(vec_alg.begin(),vec_alg.end(),0);
    std::cout<<"vector SUM::" <<sum_vec<<std::endl;
}