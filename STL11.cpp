#include<functional>
#include<algorithm>
#include<iostream>
#include<vector>
#include<map>

struct Compare
{
    bool operator()(int a,int b) const
    {
        return abs(a)>abs(b);//按绝对值降序排序
    }
};

template<class T>
void PrintVector(std::vector<T>& v)
{
    for(auto it=v.begin();it<v.end();it++)
        std::cout<<*it<<" ";
    std::cout<<std::endl;
}

void test1()
{
    std::vector<int> v1={-5,7,-123,44,16,-8};
    std::sort(v1.begin(),v1.end(),Compare());

    PrintVector(v1);
}

template<class T1>
void PrintMap(std::map<T1,T1,std::greater<T1>>& m)
{
    for(auto it=m.begin();it!=m.end();it++)//map采用双向迭代器，不支持<
        std::cout<<it->second<<" ";
    std::cout<<std::endl;
}

void test2()
{
    std::map<int,int,std::greater<int>> m1={{1,1},{2,2},{3,3},{4,4}};
    PrintMap(m1);
}

int main()
{
    test1();
    test2();

    return 0;
}