#include<iostream>
#include<set>

void set_1()
{
    std::set<int> s1={1,2,3,4};
    s1.insert(5);

    s1.erase(2);
    s1.erase(3);
    std::cout<<s1.count(3)<<std::endl;

    std::cout<<s1.size()<<std::endl;
    if(!s1.empty())
    {
        s1.clear();
        std::cout<<s1.size()<<std::endl;
    }
}


int main()
{
    set_1();

    return 0;
}