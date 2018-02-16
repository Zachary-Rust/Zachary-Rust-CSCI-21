#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE
Temperature::Temperature()
{
    kelvin_ = 0;
}

Temperature::Temperature(double kelvin)
{
    kelvin_ = kelvin;
}

Temperature::Temperature(double temp, char unit)
{
    if (unit == 'F' || 'f')
    {
        kelvin_ = (5.0 * (temp - 32) / 9) + 273.15;
    }
    else if (unit == 'C' || 'c')
    {
        kelvin_ = temp + 273.15;
    }
    else
    {
        kelvin_ = temp;
    }
}

void Temperature::SetTempFromKelvin(double kelvin)
{
    kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celsius)
{
    kelvin_ = celsius + 273.15;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit)
{
    kelvin_ = (5.0 * (fahrenheit - 32) / 9) + 273.15;
}

double Temperature::GetTempAsKelvin() const
{
    return kelvin_;
}

double Temperature::GetTempAsCelsius() const
{
     return kelvin_ - 273.15;
}

double Temperature::GetTempAsFahrenheit() const
{
    return ((kelvin_ * 9.0) / 5) + 32;
}
/*
The commented code is the start to my attemp to limit the decimal places to two
digits.  However I can't test this section of the code because I am getting an
error because an argument is already given for the parameter.  I know you can
overload so I'm not sure why I'm getting this error.
*/
string Temperature::ToString(char unit = 'K') const
{
    stringstream ss;
    //string temp;
    string output;
    //int dec_place = 0;
    
    if (unit == 'K' || 'k')
    {
        ss << GetTempAsKelvin();
        // for (int i = 0; i < temp.length(); i++)
        // {
        //     if (temp.at(i) == '.')
        //     {
        //         dec_place = temp.at(i);
        //     }
            
        // }
        ss << ' ';
        ss << "Kelvin";
    }
    else if (unit == 'C' || 'c')
    {
        ss << GetTempAsCelsius();
        ss << ' ';
        ss << "Celsius";
    }
    else if (unit == 'F' || 'f')
    {
        ss << GetTempAsFahrenheit();
        ss << ' ';
        ss << "Fahrenheit";
    }
    else
    {
        ss << "Invalid Unit";
    }
    
    
    ss >> output;
    return output;
}