#include<iostream>
using namespace std;
class student
{
public:
    string name;
    int id;

    void login()
    {
        cout<<name<<id;
    }

};

int main()
{
    student my;
    my.name="sumaiya";
    my.id=170;
    my.login();
}
