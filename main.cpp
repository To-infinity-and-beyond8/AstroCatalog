#include <iostream>
using namespace std;
class Astroobjects
{
protected:
string name;
string age;
string distant;
public:
void ShowName()
{
cout<<name;
};
void ShowAge()
{
cout<<age;
}
void ShowDistant()
{
cout<<distant;
}
virtual void ShowFacts() = 0;
virtual void ShowDescription() = 0;
};
class Starlike : public Astroobjects{
};
class Hole : public Starlike{
public:
    Hole(){
        this->name="Hole From M87";
        this->age="unknown";
        this->distant="53 mln light years";
    }
    void ShowFacts() override{
        cout<<"Interesting Facts about Hole";
    }
    void ShowDescription() override{
        cout<<"Yea description of Hole";
    }
};
class Nebula : public Starlike{
public:
    Nebula(){
        this->name="Blue Snowball";
        this->age="5 billion years";
        this->distant="~2000-6000 light years";
    }
    void ShowFacts() override{
        cout<<"Interesting Facts about snowball";
    }
    void ShowDescription() override{
        cout<<"Yea description of snowball";
    }
};

int main(){
    
    return 0;
};
