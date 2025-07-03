#include <iostream>
#include <list>
#include <string>
#include <algorithm>


void printList(const std::list<std::string>& list){
    std::cout<< "List Content";
    for (const auto& item : list){
        std::cout<<item<<std::endl;
    }
    std::cout<<std::endl;
}



int main(){
    std::list<std::string> grocery_list;
    std::cout<<"1. Initialize an empty list."<<std::endl;
    printList(grocery_list);


    std::cout<<"2.Adding element.."<<std::endl;
    grocery_list.push_back("Milk");
    grocery_list.push_back("Bread");
    grocery_list.push_back("Butter");

    printList(grocery_list);

    std::cout<<"Inserting Eggs before bread..."<<std::endl;
    auto it = std::find(grocery_list.begin(),grocery_list.end(),"Bread");

    if (it != grocery_list.end()){

        grocery_list.insert(it,"Egg");
    }
    printList(grocery_list);

    std::cout<< "Removing elements...."<<std::endl;

    grocery_list.pop_front();

    printList(grocery_list);

    std::cout<< "Acessing elements..."<<std::endl;
    std::cout<< "Front element:"<<grocery_list.front()<<std::endl;
    std::cout<<"Back element:"<<grocery_list.back();
    printList(grocery_list);

    grocery_list.sort();
    std::cout<<"Sort list::"<<std::endl;
    printList(grocery_list);

    return 0;
}