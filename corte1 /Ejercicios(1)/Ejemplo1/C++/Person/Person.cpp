#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name; //Atributo
    int age; // atributo

    void sayHello() {
        cout << "Hola! Soy " << name << " Y tengo" << age << "años.\n";
            
    }
};

int main() {
    Person p1;
    p1.name = "Alex";
    p1.age = 18 ;
    p1.sayHello();
    return 0;
}