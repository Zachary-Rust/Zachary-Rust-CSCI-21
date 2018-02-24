/*
Less basic practice of virtual functions, and inheritance in general because I am
using private variables and my subclasses are only going to be able to access them
through set/get functions.
*/

#include <iostream>
#include <string>
using namespace std;

class life
{
    protected:
    string name_;
    bool extinct_;
    
    public:
    life();
    life(string name, bool extinct);
    
    void SetName(string n);
    string GetName();
    
    void SetExtinct(bool x);
    bool GetExtinct();
    
    virtual void print();
};

class bear: public life{
    private:
    double hibernation_time_months_;
    
    public:
    bear();
    bear(double hibernate);
    
    void SetHibernate(double length);
    double GetHibernate();
    
    void print();
    
};

class human: public life{
    private:
    string language_;
    
    public:
    human();
    human(string language);
    
    void SetLanguage(string language);
    string GetLanguage();
    
    void print();
};

//LIFE CLASS FUNCTIONS
life::life()
{
    name_ = "none";
    extinct_ = true;
}

life::life(string name, bool extinct)
{
    name_ = name;
    extinct_ = extinct;
}

void life::SetName(string n)
{
    name_ = n;
}

string life::GetName()
{
    return name_;
}

void life::SetExtinct(bool x)
{
    extinct_ = x;
}

bool life::GetExtinct()
{
    return extinct_;
}

void life::print()
{
    cout << "Name: " << name_ << " Extinct Status: " << extinct_ << endl;
}

//BEAR CLASS FUNCTIONS
bear::bear()
{
    hibernation_time_months_ = 0;
}

bear::bear(double hibernate)
{
    hibernation_time_months_ = hibernate;
}

void bear::SetHibernate(double length)
{
    hibernation_time_months_ = length;
}

double bear::GetHibernate()
{
    return hibernation_time_months_;
}

void bear::print()
{
    cout << "Name: " << name_ << " Extinct Status: " << extinct_ << " Hibernation time: " << hibernation_time_months_ << endl;
}

//HUMAN CLASS FUNCTIONS
human::human()
{
    language_ = "english";
}

human::human(string language)
{
    language_ = language;
}

void human::SetLanguage(string language)
{
    language_ = language;
}

string human::GetLanguage()
{
    return language_;
}

void human::print()
{
    cout << "Name: " << name_ << " Extinct Status: " << extinct_ << " Language: " << language_ << endl;
}

int main()
{
    bool temp = false;
    life obj1("zach", temp);
    bear obj2(7.5);
    human obj3("Spanish");
    
    obj1.print();
    obj2.print();
    obj3.print();
}