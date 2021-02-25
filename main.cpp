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
        cout<<"Interesting Facts";
    }
    void ShowDescription() override{
        cout<<"Yea description";
    }
};

int main(){
    Hole h;
    h.ShowDescription();
    h.ShowFacts();
    h.ShowAge();
    h.ShowDistant();
    h.ShowName();
    return 0;
};
