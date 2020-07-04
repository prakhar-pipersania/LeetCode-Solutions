class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) 
    {
        int c[10]={6,4,2,0,0,0,6,4,2,0},m[12]={0,3,3,6,1,4,6,2,5,0,3,5},y=year%100;
        char d[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        if(year%400==0){m[1]--;}
        else if(y==0){m[1]=3;}
        else if(year%4==0){m[1]--;}
        return d[(day+m[month-1]+c[(year/100)%10]+y+(y/4))%7];    
    }
};
