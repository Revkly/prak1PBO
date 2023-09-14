#include <iostream> // for cout
using namespace std;

class Cat // declare the class Cat
{
public:
    void SetAge(int age);
    int GetAge();
    void SetWeight(int weight);
    int GetWeight();
    Cat(int age)
    {
        this->itsAge = age;
    }

private:
    int itsAge;
    int itsWeight;
};

class Felix
{
public:
    // Constructor
    Felix() : age(5), weight(10)
    {
        cout << "Felix is born!" << endl;
    }

    // Destructor
    ~Felix()
    {
        cout << "Felix has passed away." << endl;
    }

    int age;
    int weight;
};
int Cat::GetAge()
{
    return itsAge;
}
void Cat::SetAge(int age)
{
    itsAge = age;
}

int main()
{
    Cat Frisky(5);
    int catAge;

    cout << "Frisky is a cat who is ";
    cout << Frisky.GetAge() << " years old.\n";

    Felix felixObject; // Felix is born here

    // Accessing age and weight attributes
    cout << "Felix's age: " << felixObject.age << std::endl;
    cout << "Felix's weight: " << felixObject.weight << std::endl;

    cout << "Give cat age : ";
    cin >> catAge;
    Frisky.SetAge(catAge); // assign to the member variable

    cout << "Frisky is a cat who is ";
    cout << Frisky.GetAge() << " years old.\n";
    return 0;
}