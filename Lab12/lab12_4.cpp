#include <iostream>
using namespace std;

class Transportation
{
    public:
        virtual double fare() = 0;
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

};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        cout << "BTS fare: "
             << bts.fare() << endl;
    } else if(tc == 2) {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        Transportation *transport = &bts;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}