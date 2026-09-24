#include<iostream>
#include<deque>

void deque_1()
{
    std::deque<int> d1={1,2,3,4};
    std::cout<<d1[0]<<d1.at(3)<<std::endl;    
    std::cout<<d1.front()<<d1.back()<<std::endl;

    d1.pop_front();
    d1.pop_back();
    d1.push_back(5);
    d1.push_front(0);
    
    for(int i=0;i<d1.size();i++)
        std::cout<<d1[i];
    std::cout<<std::endl;

    if(!d1.empty())
    {
        std::cout<<"clear"<<std::endl;
        d1.clear();
        std::cout<<d1.size()<<std::endl;
    }
}

int main()
{
    deque_1();

    return 0;
}