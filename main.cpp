#include <iostream>
#include <string>
using namespace std;
class AstroObjects 
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
class Star : public Starlike{
};
class Giant : public Star{
public:
    Giant(){
        this->name="Betelgeuse";
        this->age="8 million years";
        this->distant="~500-600 light years";
    }
    void ShowFacts() override{
        cout<<"Interesting Facts about giant";
    }
    void ShowDescription() override{
        cout<<"Yea description of giant";
    }
};
class Neutron: public Star{
public:
    Neutron(){
        this->name="Calvera";
        this->age="285 thouthands years";
        this->distant="~6523 light years";
    }
    void ShowFacts() override{
        cout<<"Interesting Facts about Neutron";
    }
    void ShowDescription() override{
        cout<<"Yea description of Neutron";
    }
};
class Dwarf: public Star{
};
class YellowDwarf: public Dwarf{
public:
    YellowDwarf(){
        this->name="Alpha Centauri";
        this->age="5 billion years";
        this->distant="4.37 light years";
    }
    void ShowFacts() override{
        cout<<"Interesting Facts about YellowDwarf";
    }
    void ShowDescription() override{
        cout<<"Yea description of YellowDwarf";
    }
};
class WhiteDwarf : public Dwarf {
public:
    WhiteDwarf() {
        this->name = "Sirius B";
        this->age = "230 thouthands years";
        this->distant = "~8.60 light years";
    }
    void ShowFacts() override {
        cout << "Sirius B is the most massive dwarf";
    }
    void ShowDescription() override {
        cout << "Yea description of dwarf";
    }
};
//Конец Алёниных классов

//Начало классов Вани

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

    OmegaCentaur()
    {
        this->name="Omega Centaur\n";
        this->age="none\n";
        this->distant="15 - 17 ly\n";
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

class Tucan47: public SphericalClusters
{


 public:

    Tucan47()
    {
        this->name="47 Tucan\n";
        this->age="none\n";
        this->distant="14514 ly\n";
    }

    void ShowFacts()
    {
        cout << "It was discovered in 14th September in 1751 by Nicola Lui de Lakail\n";
    }

    void ShowDescription()
    {
        cout << "Standart spherical cluster\n";
    }
};


class WildGuses: public ScatteredClusters
{

 public:

    WildGuses()
    {
        this->name="Wild Guses\n";
        this->age="none\n";
        this->distant="6000 ly\n";
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

class Pleiades: public ScatteredClusters
{

 public:

    Pleiades()
    {
        this->name="Pleiades\n";
        this->age="115 million years\n";
        this->distant="440 ly\n";
    }

    void ShowFacts()
    {
        cout << "It was discovered in ancient times...\n";
    }

    void ShowDescription()
    {
        cout << "It was named after the characters of Greek mythology\n";
    }
};

//Конец классов Вани

int main(){
    
    return 0;
};
