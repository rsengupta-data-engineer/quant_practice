#include <iostream>
int main(){
    int original = 50;
    int& alias = original;
    std::cout<< "Original:" << original << std::endl;
    std::cout << "Alias:" <<alias << std::endl;
    alias = 75;
    std::cout<<"Original after alias change:" <<original <<std::endl;
    std::cout <<"Address of original:"<<&original <<std::endl;
    std::cout <<"Address of alias: "<<&alias << std::endl;
    return 0;

}

