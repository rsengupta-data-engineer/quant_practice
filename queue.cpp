#include <iostream>
#include <queue>
#include <string>


void printQueue(std::queue<std::string> q){
    if (q.empty()){
        std::cout<< "Queue:{empty}"<<std::endl;
        return;
    }
    std::cout<<"Queue:{FRONT ->";
    while(!q.empty()){
        std::cout<<'"'<<q.front()<<'"'<<" ";
        q.pop();
    }

}
int main(){
    std::queue<std::string> print_jobs;
    std::cout<<"Initial queue created."<<std::endl;
    printQueue(print_jobs);
    std::cout<<"--------------"<<std::endl;

    std::cout<<"Pushing elements into the queue"<<std::endl;

    std::cout<<"Pushing elements to the queue"<<std::endl;
    print_jobs.push("Documents");
    print_josb.push("Spreadsheet.xlsx");


    return 0;
}
