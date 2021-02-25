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
        cout << name;
    }

    void ShowAge()
    {
        cout << age;
    }

    void ShowDistant()
    {
        cout << distant;
    }

    virtual void ShowFacts() = 0;

    virtual void ShowDescription() = 0;
};

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

int main()
{
    OmegaCentaur OmegaCentaur_;
    OmegaCentaur_.Init();
    OmegaCentaur_.ShowName();
    OmegaCentaur_.ShowType();
    OmegaCentaur_.ShowDistant();
    OmegaCentaur_.ShowFacts();
    cout << endl;
    WildGuses WildGuses_;
    WildGuses_.Init();
    WildGuses_.ShowName();
    WildGuses_.ShowType();
    WildGuses_.ShowDistant();
    WildGuses_.ShowFacts();
    return 0;
}
