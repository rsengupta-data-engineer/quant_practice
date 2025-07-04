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
    print_jobs.push("Spreadsheet.xlsx");
    print_jobs.push("photo.png");

    std::cout<<"Current queue state:"<<std::endl;
    printQueue(print_jobs);
    std::cout<<"Size:"<<print_jobs.size()<<std::endl;

    std::cout<<"Accessing the front and back elements";
    std::cout<<"Front eleemts"<<print_jobs.front()<<std::endl;
    std::cout<<"Back elements"<<print_jobs.back()<<std::endl;
    while (!print_jobs.empty()){
        std::cout<<"Printing::"<<print_jobs.front()<<std::endl;
        print_jobs.pop();
        printQueue(print_jobs);
    }

    return 0;
}
