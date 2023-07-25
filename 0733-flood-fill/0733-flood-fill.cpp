class Solution {
    private:
   
public:
     void dfs(vector<vector<int>>&image,int sr,int sc, int color,int r,int c,int source)
    {
        if(sr<0||sc<0||sr>=r||sc>=c)
            return;
        else
            if(image[sr][sc]!=source)
                return;
        image[sr][sc]=color;
        dfs(image,sr-1,sc,color,r,c,source);
        dfs(image,sr+1,sc,color,r,c,source);
        dfs(image,sr,sc-1,color,r,c,source);
        dfs(image,sr,sc+1,color,r,c,source);





        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color)
    {
        if(image[sr][sc]==color)
            return image;
       
        int r=image.size();
         int c=image[0].size();
         int source=image[sr][sc];
         dfs(image,sr,sc,color,r,c,source);
            
        
        return image;
        
    }
};