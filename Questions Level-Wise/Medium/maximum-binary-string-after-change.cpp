class Solution {
public:
    string maximumBinaryString(string binary) 
    {
        int c=0,start=-1,end=binary.size();
        while(++start<binary.size()&&binary[start]=='1');
        while(--end>=0&&binary[end]=='1');
        for(int i=start;i<=end;i++)
            binary[i]=='1'?c++:binary[i]='1';
        if(start<=end)
            binary[end-c]='0';
        return binary;
    }
};
