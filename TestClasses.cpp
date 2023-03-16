#include <iostream>
#include <string>

using namespace std;;

enum gender { male, female };

class Human {
public:
    int weight, height, age;
    string name, nationality;
    gender sex;

    Human(int Weight, int Height, string Name, string Nationality, gender Sex, int Age) {
        weight = Weight;
        height = Height;
        sex = Sex;
        nationality = Nationality;
        name = Name;
        age = Age;
    }

    void say(const char *Who,const char *Message){
        cout << Who << ", " << Message;
    }

    void changeSex(gender Sex) {
        sex = Sex;
    }

    void changeAge(int nowAge) {
        age = nowAge;
    }
};

int main()
{
    Human *Misha = new Human(60, 180, "Misha", "Russian", male, 24);
    Misha->say("Pasha", "Privet!");

    Misha->changeSex(female);

    Misha->changeAge(25);

    return 0;
}
