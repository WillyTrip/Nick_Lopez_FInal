#ifdef FINAL_A
#define FINAL_A

#include <string>

using namespace std;

class RocketShip
{
    private:
    
        string name_;
        int fuel_;
        
    public:
    
        RocketShip(int fuel_, string name_);
        
        void setName(string name);
        void setFuel(int fuel);
        
        int getFuel();
        string getName();
};

#endif