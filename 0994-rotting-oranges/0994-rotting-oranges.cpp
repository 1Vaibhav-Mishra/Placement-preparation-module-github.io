class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        //pair of pair for marking indices and time simulateneously
        queue<pair<pair<int, int>, int>> q;
        int rows = grid.size();
        int cols = grid[0].size();
//It is important to calculate the number of times fresh  oranges occur in the grid. 
//If there is no fresh oranges simply return 0. 
//IF there are no rotten eggs, then return -1. 
        int count_of_one = 0;
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(grid[i][j] == 2)
                    q.push({{i, j}, 0});
                if(grid[i][j] == 1)
                    count_of_one++;
            }
        }
        if(count_of_one == 0) return 0;
        if(q.empty()) return -1;
//make a visited matrix. Initialize it with elements of grid.
        vector<vector<int>> visited(rows, vector<int>(cols, 0));
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                visited[i][j] = grid[i][j];
            }
        }
//to travel in 4 directions we will use two arrays
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, 1, 0, -1};

//NOW perform BFS on the grid, because we need a level order traversal
        int time = 0;
        while(!q.empty())
        {
            pair<pair<int, int>, int> p = q.front();
            q.pop();
            pair<int, int> index = p.first;
            time = p.second;

            for(int i = 0; i < 4; i++)
            {
                int newRow = delRow[i] + index.first;
                int newCol = delCol[i] + index.second;

                if(newRow >= 0 && newRow < rows && newCol >= 0 && newCol < cols && visited[newRow][newCol] != 2 && visited[newRow][newCol] != 0)
                {
                    q.push({{newRow, newCol}, time+1});
                    visited[newRow][newCol] = 2;
                }
            }
        }
//if there is still any 1 in the visited matrix, then it is because some fresh oranges are still left. So return -1 in this case.
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0;  j < cols; j++)
            {
                if(visited[i][j] == 1)
                    return -1;
            }
        }
//otherwise return time.
        return time;
    }
};