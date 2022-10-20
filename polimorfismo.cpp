#include <iostream>
#include <string>
using namespace std;

// Classe Base ("Animal")
class Animal {
  public:
    void Sound() {
      cout << "1 \n";
    }
};

// Derived class
class Pig : public Animal {
  public:
    void Sound() {
      cout << "2 \n";
    }
};

// Derived class
class Dog : public Animal {
  public:
    void Sound() {
      cout << "3 \n";
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.Sound();
  myPig.Sound();
  myDog.Sound();
  return 0;
}
