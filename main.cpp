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

    void ShoDistant()
    {
        cout << distant;
    }

    virtual ShowFacts() = 0;

    virtual ShowDescription() = 0;
};

int main()
{

    return 0;
}
