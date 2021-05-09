class Solution {
public:
    string intToRoman(int num) 
    {
        string result;
        vector<int> value={1,5,10,50,100,500,1000};
        vector<char> roman={'I','V','X','L','C','D','M'};
        while(num)
        {
            int temp=pow(10,to_string(num).size()-1);
            int cur=floor(num/temp)*temp;
            num%=temp;
            if(cur==4)
              result+="IV";
            else if(cur==9)
              result+="IX";
            else if(cur==40)
              result+="XL";
            else if(cur==90)
              result+="XC";
            else if(cur==400)
              result+="CD";
            else if(cur==900)
              result+="CM";
            else
            {
              while(cur)
                for(short i=value.size()-1;i>=0;i--)
                  if(value[i]<=cur)
                  {
                    cur=cur-value[i];
                    result+=roman[i];
                    break;
                  }
            }
        }
        return result;   
    }
};
