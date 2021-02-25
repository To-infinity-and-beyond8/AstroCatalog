#include <iostream>
#include <string>
using namespace std;
class AstroObjects // поменял о на О
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

// Начало Алёниных классов

class Starlike : public AstroObjects{
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

//Конец Алёниных классов

//Начало классов Ивана

class StarClusters: public AstroObjects
{
protected:
    string AmountStars;

public:
    void ShowAmount()
    {
        cout << AmountStars;
    }

};

class SphericalClusters: public StarClusters
{
public:
    void ShowType()
    {
        cout << "spherical\n";
    }

};

class ScatteredClusters: public StarClusters
{
public:
    void ShowType()
    {
        cout << "scattered\n";
    }

};

class OmegaCentaur: public SphericalClusters
{


 public:

    void Init()
    {
        name = "Omega Centaur\n";
        age =  "none\n";
        distant = "15 - 17 ly\n";
    }

    void ShowFacts()
    {
        cout << "It was discovered in ancient times...\n";
    }

    void ShowDescription()
    {
        cout << "Standart spherical cluster\n";
    }
};

class WildGuses: public ScatteredClusters
{

 public:

    void Init()
    {
        name = "Wild Guses\n";
        age =  "none\n";
        distant = "6000 ly\n";
    }

    void ShowFacts()
    {
        cout << "It was discovered in 1681 in Berlin observatory\n";
    }

    void ShowDescription()
    {
        cout << "Standart scattered cluster\n";
    }
};

//Конец классов Ивана

int main(){
    
    return 0;
};
