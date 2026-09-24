#include<unordered_map>
#include<unordered_set>
#include<iostream>

void test1()
{
    std::unordered_map<std::string,int> um1={{"zhangsan",1},{"lisi",2}};
    std::cout<<um1["zhangsan"]<<" "<<um1["lisi"]<<std::endl;
}

void test2()
{
    std::unordered_set<int> um2={1,3,4,5,1,4};
    std::cout<<um2.count(1)<<std::endl;
    std::cout<<um2.size()<<std::endl;
    um2.clear();
    std::cout<<um2.size()<<std::endl;
}

int main()
{
    test1();
    test2();

    return 0;
}