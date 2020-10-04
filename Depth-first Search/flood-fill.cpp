class Solution {
public:
    void fill(vector<vector<int>>& image, int r, int c, int &color,int &curcolor)
    {
        image[r][c]=color;
        if(r-1>=0&&image[r-1][c]==curcolor)
            fill(image,r-1,c,color,curcolor);
        if(c-1>=0&&image[r][c-1]==curcolor)
            fill(image,r,c-1,color,curcolor);
        if(r+1<image.size()&&image[r+1][c]==curcolor)
            fill(image,r+1,c,color,curcolor);
        if(c+1<image[0].size()&&image[r][c+1]==curcolor)
            fill(image,r,c+1,color,curcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        if(image[sr][sc]==newColor)
            return image;
        int x=image[sr][sc];
        fill(image,sr,sc,newColor,x);
        return image;    
    }
};
