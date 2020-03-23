#include <iostream>
#include <string>
using namespace std;

class Hero{
    private:
        string name;
        int level;
    public:
        Hero(string n, int l){
            this->name = n;
            this->level = l;
        }
        string getName(){
            return name;
        }
        int getLevel(){
            return level;
        }
};

int main(){
    string name;
    int level;
    cin >> name >> level;
    Hero tester(name, level);
    cout << tester.getName() << " " << tester.getLevel();
}
