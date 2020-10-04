class ParkingSystem {
public:
    int a,b,c;
    ParkingSystem(int big, int medium, int small)
    {
        a=small;
        b=medium;
        c=big;
    }
    
    bool addCar(int carType) 
    {
        if(carType==1)
        {
            if(c>0)
            {
                c--;
                return true;
            }
        }
        else if(carType==2)
        {
            if(b>0)
            {
                b--;
                return true;
            }
        }
        else
        {
            if(a>0)
            {
                a--;
                return true;
            }
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
 