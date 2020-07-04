double angleClock(int hour, int minutes)
{
    float x=(hour*30)+minutes/2.0,y=minutes*6.0,z=y-x;
    if(z<0)
        z=360+z;
    if(z>180)
        z=360-z;
    return z;
}
