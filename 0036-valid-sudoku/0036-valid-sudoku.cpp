 
 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_map<char,int>>row(9);
        vector<unordered_map<char,int>>column(9);
        vector<unordered_map<char,int>>box(9);

        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
               if(board[i][j]!='.'){
                   //row
                   row[i][board[i][j]]++;
                   //column
                    column[j][board[i][j]]++;
                   //gird
                    box[((i/3)*3+j/3)][board[i][j]]++;
                   if(row[i][board[i][j]]>1 || column[j][board[i][j]]>1 || box[((i/3)*3+j/3)][board[i][j]]>1 ){
                       return false;
                   }
               } 
            }
        }
        return true;
    }
};