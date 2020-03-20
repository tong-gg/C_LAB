#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Animal
{
private:
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

    string toString();
};

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
    
// DO NOT SUBMIT THIS METHOD
string Animal::toString(){
    stringstream ss;
    ss << "happiness: " + to_string(happiness) << endl
       << "energy: " + to_string(energy) << endl
       << "fullness: " + to_string(fullness);
    return ss.str();
}

// Driver code
int main(){
    Animal dog(0, 0, 0);
    dog.eat(100);
    //dog.eat(50);
    dog.play(5);
    dog.eat(100);
    dog.play(-5);
    cout << dog.toString() << endl;
}
