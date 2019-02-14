#include <iostream>
using namespace std;

class Coffee
{
private:

    void TakeACup() { cout << "Take a cup for coffee" << endl; }
    void AddSugar() { cout << "Add sugar for coffee" << endl; }
    void AddCofee() { cout << "Add instant coffee powder" << endl; }
    void Stir() { cout << "Stir the coffee" << endl; }

public:
    void prepare()
    {
        void TakeACup();
        void AddSugar();
        void AddCofee();
        void Stir();
    }
};


class Boost
{
private:

    void TakeACup() { cout << "Take a cup for boost" << endl; }
    void AddSugar() { cout << "Add sugar for boost" << endl; }
    void AddBoostPowder() { cout << "Add instant boost powder" << endl; }
    void Stir() { cout << "Stir the boost" << endl; }
    
public:

    void prepare()
    {
        void TakeACup();
        void AddSugar();
        void AddBoostPowder();
        void Stir();
    }
};

class Beverage
{
protected:

    void TakeACup() { cout << "Take a cup for beverage" << endl; }
    void AddSugar() { cout << "Add sugar for beverage" << endl; }
    virtual void AddBeverageSpecificItem() = 0;
    void Stir() { cout << "Stir the beverage" << endl; }

public:

    void prepare()
    {
        void TakeACup();
        void AddSugar();
        void AddBeverageSpecificItem();
        void Stir();
    }
};

class Coffee_t :Beverage
{
private:
    void AddBeverageSpecificItem()
    {
        cout << "Add instant coffee powder" << endl;
    }
};

class Boost_t :Beverage
{
private:
    void AddBeverageSpecificItem()
    {
        cout << "Add boost powder" << endl;
    }
};