#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class Taxi : public Transportation
{
    private:
        double distance;
    public:
        void setDistance(double distance){
            if (distance > 0){
                this->distance = distance;
            }
        }
        double fare(){
            double total = 35;
            total += distance * 2;
            return total;
        }
};

class BmtaBus : public Transportation
{
    public:
        double fare(){
            double total;
            total += 6.50;
            return total;
        }

};

class BTS : public Transportation
{
    private:
        int station;
    public:
        void setStation(int station){
            if(station > 0){
                this->station = station;
            }
        }
        virtual double fare(){
            int total = 15;
            total += station * 5;
            return total;
        }
};

class Passenger{
    public:
        void addTransportation(Transportation &){

        }
};

int main(){

}

