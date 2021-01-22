#include <iostream>
#include <set>
#include <list>
#include <map>

int main()
{
    std::list<int> lists;
    lists.push_back(5);
    std::list<int>::iterator it;
    it = lists.begin();
    lists.push_back(4);
    lists.push_front(3);
    it = lists.begin();
    std::cout << *(it) << std::endl;


    std::multiset<int> sets= {1,2,7,2,9,2,9,3,5,6,8,9,1,16};
    sets.insert(5);
    for (const auto& i : sets)
    std::cout << i << " ";
    std::cout << std::endl;
    std::multiset<int>::iterator it2;
    it2 = sets.find(5);
    std::cout<<*it2<<std::endl;
    
    std::pair<int,double> p;
    p.first = 12;
    p.second = 2.2;
    std::cout << p.first << " " << p.second << std::endl;
    
    std::map<int, std::string> maps;
    maps[1] = "Hello";
    maps[2] = "five";
    std::cout << maps[2] << std::endl;



}