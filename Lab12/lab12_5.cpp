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
        double price = 35;
        double distance;
    public:
        void setDistance(double distance){
            if (distance > 0){
                this->distance = distance;
            }
        }
        double fare(){
            price += distance * 2;
            return price;
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
        double price = 15;
        int station;
    public:
        void setStation(int station){
            this->station = station;
        }
        double fare(){
            price += station * 5;
            return price;
        }

};

class Passenger{
    private:
        double total = 0; // P 1 ตัวขาดตรงนี้
    public:
        void addTransportation(Transportation &trans_sys){
            total += trans_sys.fare();
        }
        double getTotalFare(){
            return total;
        }
};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);

        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);

        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}
