#include<iostream>
#include<queue>
#include<stack>

void stack_1()
{
    std::stack<int> s1;
    s1.push(1);
    s1.push(2);
    std::cout<<s1.top()<<std::endl;
    s1.pop();

    if(!s1.empty())
    {
        std::cout<<"not null"<<std::endl;
        std::cout<<s1.size()<<std::endl;
    }
}

void queue_1()
{
    std::queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    std::cout<<q1.front()<<" "<<q1.back()<<std::endl;
    
    q1.pop();

    if(!q1.empty())
    {
        std::cout<<"not null"<<std::endl;
        std::cout<<q1.size()<<std::endl;
    }
}

int main()
{
    stack_1();
    queue_1();

    return 0;
}