#include<functional>
#include<iostream>
#include<queue>

class stu1
{
    public:
        int id;
        stu1(int id){this->id=id;};
        bool operator<(const stu1& s1) const
        {
            if(this->id<s1.id)
                return true;
            return false;
        }
};

class stu2
{
    public:
        int id;
        stu2(int id){this->id=id;};
        bool operator>(const stu2& s2) const
        {
            if(this->id>s2.id)
                return true;
            return false;
        }
};

void priority_queue_1()
{
    std::priority_queue<int> pq1;
    std::priority_queue<int,std::vector<int>,std::greater<int>> pq2;

    pq1.push(1);
    pq1.push(2);
    pq1.push(-3);
    std::cout<<pq1.size()<<std::endl;

    while(!pq1.empty())
    {
        std::cout<<pq1.top()<<" ";
        pq1.pop();
    }
    std::cout<<std::endl;

    pq2.push(1);
    pq2.push(2);
    pq2.push(-3);
    std::cout<<pq2.size()<<std::endl;

    while(!pq2.empty())
    {
        std::cout<<pq2.top()<<" ";
        pq2.pop();
    }
    std::cout<<std::endl;
}

void priority_queue_2()
{
    std::priority_queue<stu1> pq1;
    std::priority_queue<stu2,std::vector<stu2>,std::greater<stu2>> pq2;

    pq1.push(stu1(6));
    pq1.push(stu1(4));
    pq1.push(stu1(8));

    while(!pq1.empty())
    {
        std::cout<<pq1.top().id<<" ";
        pq1.pop();   
    }
    std::cout<<std::endl;
    
    pq2.push(stu2(6));
    pq2.push(stu2(4));
    pq2.push(stu2(8));

    while(!pq2.empty())
    {
        std::cout<<pq2.top().id<<" ";
        pq2.pop();   
    }
    std::cout<<std::endl;
}

int main()
{
    //priority_queue_1();
    priority_queue_2();
    
    return 0;
}