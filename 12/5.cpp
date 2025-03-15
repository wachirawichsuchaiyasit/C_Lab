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
    Taxi() : distance(0) {};
    void setDistance(double km)
    {
        this->distance = (km >= 0 ? km : 0);
    }

    virtual double fare()
    {
        return 35 + (this->distance * 2);
    }
};

class BmtaBus : public Transportation
{
private:
    double distance;

public:
    BmtaBus() : distance(0) {};
    virtual double fare()
    {
        return 6.50;
    }
};

class BTS : public Transportation
{
private:
    int stations;

public:
    void setStation(int stationCount)
    {
        this->stations = (stationCount >= 0 ? stationCount : 0);
    }
    virtual double fare()
    {
        return 15 + (this->stations * 5);
    }
};

class Passenger
{
private:
    double totalFare;

public:
    Passenger() : totalFare(0) {};
    void addTransportation(Transportation &transport)
    {
        totalFare += transport.fare();
    }

    double getTotalFare()
    {
        return this->totalFare;
    }
};

int main()
{
    Passenger passenger;
    while (1)
    {
        char transportType;
        cin >> transportType;
        if (transportType == 'A')
        {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
        }
        else if (transportType == 'B')
        {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
        }
        else if (transportType == 'C')
        {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
        }
        else
        {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}