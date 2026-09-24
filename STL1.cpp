#include<iostream>
#include<vector>

class stu
{
    public:
        int id;
        std::string name;

    stu()
    {
        std::cout<<"create"<<std::endl;
        this->id=101;
        this->name="hello";
    }

    stu(int id,std::string name)
    {
        this->id=id;
        this->name=name;
    }

    stu(const stu& s)
    {
        std::cout<<"copy"<<std::endl;
        this->id=s.id;
        this->name=s.name;
    }

    stu(stu&& s)
    {
        std::cout<<"move"<<std::endl;
        this->id=s.id;
        this->name=s.name;
    }

    ~stu()
    {
        std::cout<<"deinit"<<std::endl;
    }
};

void vector_1()
{
    std::vector<int> v1;
    std::vector<float> v2;

    v1.reserve(20);
    v1.push_back(123);

    std::cout<<v1.capacity()<<std::endl;
    std::cout<<v1.size()<<std::endl;
    
    std::cout<<v2.capacity()<<std::endl;
    std::cout<<v2.size()<<std::endl;
}

void vector_2()
{
    std::vector<char> v2;
    v2.reserve(10);

    if(v2.empty())
    {
        v2.push_back('A');
        v2.push_back('B');
    }

    std::cout<<v2.at(0)<<std::endl;
    std::cout<<v2[1]<<std::endl;
    v2.emplace_back('C');
    std::cout<<v2.front()<<std::endl;
    std::cout<<v2.back()<<std::endl;
    
    std::cout<<v2.size()<<std::endl;
    v2.resize(5);
    std::cout<<v2.size()<<std::endl;
    std::cout<<v2.at(3)<<" "<<v2.at(4)<<std::endl;

    if(!v2.empty())
    {
        std::cout<<"clear"<<std::endl;
        v2.clear();
        std::cout<<v2.size()<<std::endl;
    }
}

void vector_3()
{
    std::vector<stu> v3;
    stu s1,s2,s3;
    //v3.reserve(5);//加上后可以发现少了一次拷贝构造，因为没有扩容

    v3.push_back(s1);
    v3.push_back(std::move(s2));
    v3.emplace_back(14,"hello");

    std::cout<<v3.size()<<std::endl;
    v3.pop_back();
    std::cout<<v3.size()<<std::endl;
}

void vector_4()
{
    std::vector<int> v4={1,3,2,4,2};
    
    for(int i=0;i<v4.size();i++)
    {
        std::cout<<v4.at(i)<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    // vector_1();
    // vector_2();
    // vector_3();
    vector_4();

    return 0;
}