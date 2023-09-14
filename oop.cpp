#include <iostream> // for cout
using namespace std;

class Cat // begin declaration of the class
{
public:                                     // begin public section
    Cat(int initialAge, int initialWeight); // constructor
    ~Cat();                                 // destructor
    int GetAge() const;                     // accessor function
    void SetAge(int age);                   // accessor function
    int GetWeight() const;                  // accessor function
    void SetWeight(int weight);             // accessor function
    void Meow();                            // general function

private:
    int itsAge; // member variable
    int itsWeight;
};

Cat::Cat(int initialAge, int initialWeight)
{
    itsAge = initialAge;
    itsWeight = initialAge;
    cout << "Cat Create\n";
}

Cat::~Cat()
{
    cout << "Cat Destroy\n";
}

int Cat::GetAge() const
{
    return itsAge;
}

void Cat::SetAge(int age)
{
    this->itsAge = age;
}

int Cat::GetWeight() const
{
    return itsWeight;
}

void Cat::SetWeight(int weight)
{
    this->itsWeight = weight;
}

void Cat::Meow()
{
    cout << "Meow.\n";
}

int main()
{
    Cat Felix(5, 10); // Call the constructor with an initial age of 5
    int catAge;
    cout << "Felix's age: " << Felix.GetAge() << endl;

    cout << "Enter the cat's age: ";
    cin >> catAge; // Get the age from the user

    Felix.Meow();
    // Felix.Bark(); // There is no Bark function in the Cat class
    Felix.SetAge(catAge); // Use the SetAge function to set the age
    cout << "Felix's age: " << Felix.GetAge() << endl;
    return 0;
}
