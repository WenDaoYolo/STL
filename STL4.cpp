#include<iostream>
#include<string>

void string_1()
{
    std::string s1="hello world";

    std::cout<<s1.size()<<std::endl;
    std::cout<<s1.front()<<" "<<s1.back()<<std::endl;
    std::cout<<s1<<" "<<s1.c_str()<<std::endl;

    std::cout<<s1[0]<<" "<<s1.at(1)<<std::endl;
    s1.pop_back();
    s1.push_back('l');
    
    s1.insert(0,"Jack ");
    s1.erase(5,5);

    std::cout<<s1<<std::endl;
}

void string_2()
{
    std::string s1="hello",s2="jack";
    std::cout<<s1+s2<<std::endl;
    s1=s2;
    s1+=s2;
    std::cout<<s1<<std::endl;

    s1.append(",end");
    std::cout<<s1<<std::endl;
    s1.replace(4,5,"begin");
    std::cout<<s1<<std::endl;
}

void string_3()
{
    std::string s1="abcdefg",s2="abcde",s3="1234";

    std::cout<<s1.find("cde")<<std::endl;
    std::cout<<s1.rfind("abc")<<std::endl;
    std::cout<<s1.find('g')<<std::endl;

    std::cout<<s1.substr(0,3)<<std::endl;
    std::cout<<s1.substr(0,10)<<std::endl;

    if(s1.compare(s2)>>0)
        std::cout<<"s1>s2"<<std::endl;
    if(s2.compare(s1.substr(0,5))==0)
        std::cout<<"s1's substr==s2"<<std::endl;
    if(s3=="1234")
        std::cout<<"s3==1234"<<std::endl;
}

int main()
{
    //string_1();
    //string_2();
    string_3();

    return 0;
}