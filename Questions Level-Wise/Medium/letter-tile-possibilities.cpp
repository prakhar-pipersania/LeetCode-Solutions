class Solution {
public:
    void findseq(string x,string s,int &val,int size)
    {
        string temp;
        for(int i=0;i<x.size();i++)
        {
            s+=x[i],val++;
            for(int j=0;j<x.size();j++)
                if(i!=j)
                    temp+=x[j];
            if(s.size()<size)
                findseq(temp,s,val,size);
            while(i+1<x.size()&&x[i]==x[i+1])
                i++;
            s.resize(s.size()-1),temp.resize(0);
        }
    }
    int numTilePossibilities(string tiles) 
    {
        int val=0;
        string s;
        sort(tiles.begin(),tiles.end());
        findseq(tiles,s,val,tiles.size());
        return val;
    }
};
