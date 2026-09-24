#include<iostream>
#include<map>

class stu
{
    public:
        int id;
        std::string name;

        stu(int id)
        {
            std::cout<<"create"<<std::endl;
            this->id=id;
            this->name="hello";
        }

        stu(const stu& s1)
        {
            std::cout<<"copy"<<std::endl;
            this->id=s1.id;
            this->name=s1.name;
        }

        stu(stu&& s1)
        {
            std::cout<<"move"<<std::endl;
            this->id=s1.id;
            this->name=s1.name;
        }

        bool operator<(const stu& s2) const
        {
            if(this->id<s2.id)
                return true;
            return false;
        }
};

void map_1()
{
    std::map<std::string,int> m1={{"zhangsan",14},{"lisi",22}};
    m1["wang5"]=10;
    m1.insert({"xiao6",12});

    std::cout<<m1["zhangsan"]<<std::endl;
    std::cout<<m1["lisi"]<<std::endl;
    std::cout<<m1["wang5"]<<std::endl;
    std::cout<<m1["xiao6"]<<std::endl;

    //迭代器遍历...

    std::cout<<"key-zhangnsan times="<<m1.count("zhangsan")<<std::endl;
    std::cout<<m1.size()<<std::endl;
    m1.clear();
    std::cout<<m1.size()<<std::endl;

    if(m1.empty())
    {
        std::cout<<"nothing"<<std::endl;
    }
}

void map_2()
{
    std::map<stu,int> m1;
    std::map<int,stu> m2;
    stu s1(3),s2(4);

    m1[s1]=123;
    m1[s2]=321;
    
    std::cout<<"---------"<<std::endl;
}

int main()
{
    //map_1();
    map_2();
    
    return 0;
}