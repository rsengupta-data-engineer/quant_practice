#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>
#include <numeric>
std::string say_hello(){
    return "hellow world";
}

int sum_array(const std::vector<int>& arr){
    int sum =0;
    for(int x:arr){
        sum+=x;

    }
    return sum;
}


PYBIND11_MODULE(hello_world,m){
    m.doc() = "A simple heelow world";
    m.def("say_hello",&say_hello,"A function that returns hellow world");
    m.def("sum_array",&sum_array,"A function that sums elemnts of an integer array");
}
