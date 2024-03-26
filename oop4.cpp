#include<bits/stdc++.h>
using namespace std;
class Room
{  private:
    char* name;
    public:
    Room()
    {  cout<<"simple constructor called"<<endl;
        name=new char[100];
    }
    Room(const Room& temp){
        char* ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        cout<<"copy constructor iss called   "<<ch<<endl;
    }
    ~Room()
    {    delete[] name;
        cout<<"destructor is called"<<endl;
    }
    void Set_name(const char* newName)
    {
     strcpy(name,newName);
    }
    const char* getName() const
    {
        return name;
    }

};
class Class
{
    private:
    char* section;

    public:
    Class()
    {
        section=new char[10];
    }
    Class(const Class& temp)
    {
        char* sec=new char[strlen(temp.section)+1];
        strcpy(sec,temp.section);
    }
   void Take_section(const char* name)
   {
    strcpy(section,name);
   }
};
int main()
{
    Room obj1;
    Room obj2(obj1);
    obj1.Set_name("tenzin");
    cout<<obj1.getName()<<"  "<<obj2.getName()<<endl;
    return 0;   
}