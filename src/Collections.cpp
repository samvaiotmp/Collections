#include <vector>
#include <iostream>
#include "Person.h"
#include <map>
int main(int argc, char** argv) 
{    
    std::vector<int> v;
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(2);
    
    for (auto i = v.begin(); i != v.end(); i++)
        std::cout << *i << " ";
    
    std::cout << std::endl;
    
    for(auto i = v.rbegin(); i != v.rend(); i++)
        std::cout << *i << " ";
    
    std::cout << std::endl;
    
    int j = v[2];
    
    std::cout << j << std::endl;
    
    std::vector<Person> vp;
    Person Kate("Kate", "Gregory", 123);
    Person Someone("Someone", "Else", 456);
    
    vp.push_back(Kate);
    vp.push_back(Someone);
    
    for (auto ip = vp.begin(); ip != vp.end(); ip++)
        std::cout << ip->GetName() << " ";
    std::cout << std::endl << "-----------------------" << std::endl;

    std::map<int, Person> people;
    people[Kate.GetNum()] = Kate;
    people[Someone.GetNum()] = Someone;

    Person third("Third", "Fiction", 124);
    std::pair<int,Person> p(third.GetNum(), third); //creating a key, value pair to add a map object to the map
    people.insert(p);

    for (auto ip = people.begin(); ip != people.end(); ip++)
        std::cout << ip->first << " " << ip->second.GetName() << ". ";

    std::cout << std::endl;

    auto found = people.find(123);
    std::cout << found->first << " " << found->second.GetName() << ". ";

    std::string who = people[124].GetName();
    std::cout << "person at 124 is " << who << "." << ". ";

    std::cout << std::endl << "-----------------------" << std::endl;


    return 0;
}

