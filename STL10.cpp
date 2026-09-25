#include<algorithm>
#include<iostream>
#include<vector>

template<class T>
void PrintVector(std::vector<T>& v)
{
    for(auto it=v.begin();it<v.end();it++)
        std::cout<<*it<<" ";
    std::cout<<std::endl;
}

void test1()
{
    std::vector<int> v1={6,1,4,4,7,5,3,2,1};
    std::sort(v1.begin(),v1.end());
    PrintVector(v1);
}

void test2()
{
    std::vector<char> v2={'Y','G','W','A','C','C','D'};

    std::reverse(v2.begin(),v2.end());
    PrintVector(v2);

    auto it=std::find(v2.begin(),v2.end(),'G');
    std::cout<<*it<<std::endl;
    std::cout<<std::count(v2.begin(),v2.end(),'C')<<std::endl;

    auto it2=std::max_element(v2.begin(),v2.end());
    auto it3=std::min_element(v2.begin(),v2.end());

    std::sort(v2.begin(),v2.end());
    bool IsIn=std::binary_search(v2.begin(),v2.end(),'D');
    
    if(IsIn)
        std::cout<<"D is exist"<<std::endl;
    else
        std::cout<<"D is not exist"<<std::endl;

    
    auto new_end=std::unique(v2.begin(),v2.end());
    for(auto it=v2.begin();it<new_end;it++)
        std::cout<<*it<<" ";
    std::cout<<std::endl;
}

int main()
{
    //test1();
    test2();

    return 0;
}