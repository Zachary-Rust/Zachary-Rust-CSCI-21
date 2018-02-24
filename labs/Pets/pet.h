#include <string>
#include <iostream>
using std::ostream
using std::string

class Pet
{

    public:
    //default constructor for pet that defaults all values to 0, false or blank.
    Pet();
    
    //write appropriate overloaded constructors
    Pet(string name, int species, bool neutered_spayed, bool talks);
    
    //write get and set functions for each variable
    void SetName(string name);
    string GetName();
    
    void SetSpecies(int species);
    int GetSpecies();
    
    void SetNeuteredSpayed(bool neutered_spayed);
    bool GetNeuteredSpayed();
    
    void SetTalks(bool talks);
    bool GetTalks();
    
    void print();
    
    //Deconstructor
    virtual ~Pet() {}

    protected:

    string name_;

    int species_;

    bool nueteredSpayed_;

    bool talks_;

};