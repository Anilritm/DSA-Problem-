#include<iostream>
using namespace std;
//class 
class Hero {
    // proparties 
    public:       // access modifier public ,private , protected 


    int health ;
    char level ;

    // getter setter 
    int getHealth()
    {
        return health;

    }
      char getLevel()
    {
        return level;

    }
    void setHealth(int h1)
    {
        health=h1;

    }
     void setLevel(char ch)
    {
        level=ch;

    }




};

int main()
{
    Hero anil ;
    
    // anil.health=19999;
    // anil.level='A';

    //setter
    // anil.setHealth(499);
    // anil.setLevel('e');

    cout<<"helth of anil :"<<anil.getHealth()<<endl;
    cout<<"level of anil :"<<anil.getLevel()<<endl;
   // cout<<"size of h1 "<<sizeof(h1)<<endl;




}