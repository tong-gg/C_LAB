#include <iostream>
#include <sstream>
using namespace std;

// interface of class Animal

class Animal
{
protected:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

class Pet : public Animal
{
private:
    string name;
public:
    Pet(string, int, int, int);
    string getName();
    void setName(string);

    string toString();
};

// ------------------------------

// member function implementation

Animal::Animal(int happiness, int energy, int fullness){
        this->happiness = happiness;
        this->energy = energy;
        this->fullness = fullness;
        limitStat();
}

int Animal::getHappiness(){
    return happiness;
}

int Animal::getEnergy(){
    return energy;
}

int Animal::getFullness(){
    return fullness;
}

void Animal::limitStat(){
    if (happiness < 0) { happiness = 0; }
    else if (happiness > 100) { happiness = MAX_HAPPINESS; }
    if (energy < 0) { energy = 0; }
    else if (energy > 100) { energy = MAX_ENERGY; }
    if (fullness < 0) { fullness = 0; }
    else if (fullness > 100) { fullness = MAX_FULLNESS; }
}

void Animal::eat(int food){
    if (food >= 0){
        fullness += food;
    }
    if (fullness > MAX_FULLNESS){
        happiness -= 10;
        limitStat();
    }
}

void Animal::play(int hour){
    if ((energy > 0 || fullness > 0) && hour >= 0){
        energy -= 10 * hour;
        fullness -= 20 * hour;
        happiness += 5 * hour;
        limitStat();
    }
}

void Animal::sleep(int hour){
    if (hour >= 0){
       energy += 10 * hour;
    fullness -= 10 * hour;
    limitStat();
    } 
}

Pet::Pet(string name, int happiness, int energy, int fullness) : Animal(happiness, energy, fullness){
    this->name = name;
    this->happiness = happiness;
    this->energy = energy;
    this->fullness = fullness;
    limitStat();
}

string Pet::getName(){
    return name;
}

void Pet::setName(string name){
    this->name = name;
}

string Pet::toString(){
    stringstream ss;
    ss << "Pet's Name: " + name << endl
       << "happiness: " + to_string(happiness) << endl
       << "energy: " + to_string(energy) << endl
       << "fullness: " + to_string(fullness);
    return ss.str();
}

// Driver code

int main(){
    Pet scottish("Olivander", 0, 0, 0);
    cout << scottish.toString() << endl;

}