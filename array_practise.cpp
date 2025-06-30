#include<iostream>
#include<array>
#include<numeric>
#include<algorithm>


int main(){
    std::array<int,5> arr1;
    for(int x:arr1){
        std::cout<<x<<" ";

    }
    std::array<int,5> arr2 = {10,20,30,40,50};
    std::array<int,5> arr3 = {1,2,3};

    for (int x:arr2){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;
    try {
        std::cout<<"element at 2"<<arr2.at(2)<<std::endl;
    } catch (const std:: out_of_range& e){
        std::cerr<<"Error"<<e.what()<< std::endl;

    }
    std::cout <<"Size of array::"<<arr2.size()<<std::endl;
    std::cout<<"Max size"<<arr2.max_size()<<std::endl;
    std::cout<<"Array empty"<<(arr2.empty()? "Yes":"No") << std::endl;

    std::cout<<"Visualizing array";
    for (int x:arr2){
        std::cout <<x<<std::endl;

    }
    std::cout<<std::endl;

    std::cout << "arrays using iterators"<<std::endl;
    for (auto it = arr2.begin();it!=arr2.end();++it){
        std::cout<<*it <<",";
    }
    int* raw_ptr = arr2.data();
    std::cout<<raw_ptr[1]<<std::endl;

    int sum = std::accumulate(arr2.begin(),arr2.end(),0);
    std::cout <<"Sum of array elements:::"<<sum;


    std::array<int,5> arr_iota;
    std::iota(arr_iota.begin(),arr_iota.end(),100);
    
    for (int x: arr_iota){
        std::cout<<x<<" ";
    }
    std::cout<<std::endl;

    std::array<int,3> arr_a = {1,2,3};
    std::array<int,3> arr_b = {4,5,6};

    std::cout<<"Before swap::";
    for (int x:arr_a) std::cout<<x<<" ";
    for (int x:arr_b) std::cout<<x<<" ";
    arr_a.swap(arr_b);
    for (int x:arr_a) std::cout<<x<<" ";
    for (int x:arr_b) std::cout <<x<<" ";
    return 0;

}
