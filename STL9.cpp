#include<iostream>
#include<vector>
#include<map>
#include<set>

void test1()
{
    std::vector<int> v1={3,4,1,2,5};

    auto it=v1.begin();
    it+=2;
    it=v1.insert(it,999);                         //插入元素后，it迭代器会失效，会返回新的迭代器

    it+=3;
    v1.erase(it);                                 //删除元素后，迭代器会失效，会返回新的迭代器

    for(auto it=v1.begin();it<v1.end();it++)      //迭代器遍历容器
        std::cout<<*it<<" ";
    std::cout<<std::endl;
}

void test2()
{
    std::map<std::string,int> m1={{"bhangsan",12},{"aaa",16},{"lisi",14}};
    auto it=m1.lower_bound("bhangsan");
    auto it2=m1.upper_bound("bhangsan");
    auto it3=m1.find("lisi");

    std::cout<<(*it).first<<" "<<(*it).second<<std::endl;
    std::cout<<it2->first<<" "<<it2->second<<std::endl;
    std::cout<<it3->first<<" "<<it3->second<<std::endl;
}

int main()
{
    test1();
    //test2();

    return 0;
}