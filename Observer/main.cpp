#include <iostream>
#include <memory>
#include "Observable.h"

using namespace std;

class WeatherData: public Observable
{
public:
    void setMeasurements(double temperature, double humidity, double pressure)
    {
        this->temperature = temperature;
        this->humidity = humidity;
        this->pressure = pressure;

        ntfyObservers();
    }
    double getTemperature()
    {
        return temperature;
    }
    double getHumidity()
    {
        return humidity;
    }
    double getPressure()
    {
        return pressure;
    }

private:
    double temperature;
    double humidity;
    double pressure;
};

class CurrentDisplay: public Observer
{
public:
    CurrentDisplay(WeatherData& o)
    {
        subject = &o;
        subject->addObserver(*this);
    }
    ~CurrentDisplay()
    {
        if (nullptr != subject)
        {
            subject->delObserver(*this);
            subject = nullptr;
        }
    }
    void update();
    void display();
private:
    CurrentDisplay(){};

    double temperature;
    double humidity;
    double pressure;
    WeatherData *subject;
};

void CurrentDisplay::update() {
    if (nullptr == subject)
    {
        return;
    }

    this->temperature = subject->getTemperature();
    this->humidity = subject->getHumidity();
    this->pressure = subject->getPressure();

    display();
}

void CurrentDisplay::display() {
    cout<<"temperature:"<<temperature<<endl;
    cout<<"humidity:"<<humidity<<endl;
    cout<<"pressure:"<<pressure<<endl<<endl;
}

class Point
{
public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
        cout<<__func__<<" called"<<endl;
    }
    ~Point()
    {
        cout<<__func__<<" called"<<endl;
    }
    void display()
    {
        printf("Point(%d,%d)\n", x,y);
    }

private:
    int x;
    int y;
};

class PointEx: public Point
{
public:
    PointEx(int x, int y)
    {
        Point(x, y);
    }
    ~PointEx()
    {

    }
    void display()
    {
        printf("PointEx\n");
    }
};

int main() {
    WeatherData subject;
    CurrentDisplay cDisplay(subject);

    if (1)
    {
        shared_ptr<Point> ptr1(new Point(5,6));

        ptr1->display();
        cout << "ptr1 ref: "<<ptr1.use_count() << endl;
        {
            //shared_ptr<int> ptr2(ptr1);
            shared_ptr<Point> ptr2 = ptr1;

            ptr2->display();
            cout << "ptr2 ref: "<<ptr2.use_count() << endl;

            cout<<"leaving inner scope"<<endl;
        }
        cout << "ptr1 ref: "<<ptr1.use_count() << endl;
        cout<<"leaving outer scope"<<endl;

        PointEx pex(6,3);
        pex.display();
    }

    //subject.setMeasurements(80,65,30.4);
    //subject.setMeasurements(82,70,29.2);
    //subject.setMeasurements(78,90,29.2);

    return 0;
}