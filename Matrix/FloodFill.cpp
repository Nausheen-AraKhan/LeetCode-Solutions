class Solution {
public:
    void dfs(vector<vector<int>>& image,int r,int c,int oldcolor,int newcolor)
    {
        int m=image.size();
        int n=image[0].size();
        if(r<0||r>=m||c<0||c>=n)
           return;
        if(image[r][c]!=oldcolor)
           return;
        image[r][c]=newcolor;
        dfs(image,r+1,c,oldcolor,newcolor);
        dfs(image,r-1,c,oldcolor,newcolor);
        dfs(image,r,c+1,oldcolor,newcolor);
        dfs(image,r,c-1,oldcolor,newcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldcolor=image[sr][sc];
        if(oldcolor==color)
           return image;
        dfs(image,sr,sc,oldcolor,color);
        return image;
    }
};
