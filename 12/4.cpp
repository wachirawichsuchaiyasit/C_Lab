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
    double pay;

public:
    void setStation(int station)
    {
        this->pay = (15 + (5 * station));
    }
    double fare()
    {
        return this->pay;
    }
};

int main()
{
    int tc;
    cin >> tc;
    if (tc == 1)
    {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        cout << "BTS fare: "
             << bts.fare() << endl;
    }
    else if (tc == 2)
    {
        int station;
        cin >> station;
        BTS bts;
        bts.setStation(station);
        Transportation *transport = &bts;
        cout << "Transporataion fare: "
             << transport->fare() << endl;
    }
}