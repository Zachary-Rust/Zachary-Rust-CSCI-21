//Zachary Rust
//3/8/18
//This class holds all informaton for a student
#include <string>
using namespace std;

class student {
    private:
    string f_name_;
    string l_name_;
    string id_;
    int units_completed_;
    
    public:
    student();
    student(string f_name, string l_name, string id, int units);
    
    void SetFName(string f_name);
    string GetFName();
    
    void SetLName(string l_name);
    string GetLName();
    
    void SetID(string id);
    string GetID();
    
    void SetUnits(int units);
    int GetUnits();
    
    ~student() {};
};