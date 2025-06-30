#include <iostream>
#include <string>
#include <unordered_map>
#include <functional>

struct Person {
        std::string first_name;
        std::string last_name;
        int id;

        bool operator==(const Person& other) const {
            return first_name == other.first_name &&
            last_name == other.last_name &&
            id == other.id;
        }
    };

namespace std {
        template <>
        struct hash<Person>{
            size_t operator()(const Person& p) const {
                return (hash<std::string>()(p.first_name) ^
                (hash<std::string>()(p.last_name) << 1)) >>1 ^
                (hash<int>()(p.id)<<1);
            

        }

    };

}


int main(){
    std::unordered_map<std::string,int> ages;
    ages["Alice"]= 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    auto result1 = ages.insert({"David",40});
    if (result1.second){
        std::cout<<"David inserted";
    } else {
        std::cout<< "David exists";

    }
    //type inference
    auto result2 = ages.insert(std::make_pair("Alice",31));
    if (!result2.second){
        std::cout<<"Alice exists";
    }
    ages.emplace("Eve",28);
    std::cout<<"eve inserted";



    std::cout<<"\n Iterating through hashmap::\n";

    std::unordered_map<std::string,int> scores ={
        {"Alice",95},
        {"Bob",88},
        {"Charlie",72},
        {"David",90}
    };
    for (const auto& pair:scores){
        std::cout<<"Name:"<<pair.first << ", Score:"<<pair.second <<"\n";
    }

    std::cout<<"\n --- Iterating---";
    for (auto it = scores.begin(); it != scores.end(); ++it){
        std::cout<<"Name:"<<it->first << ", Scores:"<<it->second<<"\n";
    }

    
    std::unordered_map<std::string,int> grades = {
        {"Math",90},
        {"Physics",85},
        {"Chemistry",78},
        {"Biology",92}
    };
    size_t erased_count = grades.erase("Chem");
    if (erased_count > 0){
        std::cout<<"Chemistry";

    } else {
        std::cout<< "Chemistry\n";
    }
    erased_count = grades.erase("Art");
    if (erased_count==0){
        std::cout<<"art not found\n";
    }

    auto it_physics = grades.find("Physics");
    if (it_physics != grades.end()){
        std::cout<< "Removing Physics";
        auto next_it = grades.erase(it_physics);

        std::cout<<"Physics::"<<grades.size();

    }

    std::unordered_map<Person,std::string> person_data;
    Person p1 = {"John","Doe",123};
    Person p2 = {"Jane","Smith",456};

    person_data[p1] = "A";
    person_data[p2] = "B";

    std::cout<< "Data for John"<<person_data[p1]<<"\n";

    for (const auto& entry:person_data){
        std::cout<< "Name::" <<entry.first.first_name;

    }
    

    return 0;
}