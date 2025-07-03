#include <iostream>
#include <stack>
#include <string>
#include <vector>


void printStack(std::stack<std::string> s){
    if (s.empty()){
        std::cout<<"Stack Empty"<<std::endl;

    }
    std::cout<<"Stack:{ TOP ->";
    while(!s.empty()){
        std::cout<<s.top()<<std::endl;
        s.pop();

    }
    std::cout<<"}"<<std::endl;
}

int main(){

std::stack<std::string> book_stack;
std::cout<<"Initialize empty stack created"<<std::endl;
printStack(book_stack);
std::cout<<"--------------"<<std::endl;
std::cout<<"Pushing elements"<<std::endl;
book_stack.push("The lord of the rings");
book_stack.push("Dune");
std::cout << "Current stack state:"<<std::endl;
printStack(book_stack);
return 0;
}