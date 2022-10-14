class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        //row check 
        for(int i=0;i<9;i++) {
            unordered_map<char,int> rmp;
            for(int j=0;j<9;j++) {
                if(board[i][j]!='.' && rmp.count(board[i][j])) {
                    return false;
                }
                else {
                    if(board[i][j]!='.') {
                        //cout<<board[i][j];
                        cout<<board[i][j] - '0' << " " <<board[i][j]<<endl;
                        
                        rmp[board[i][j]] = i;    
                    }                    
                }
            }
            //cout<<endl;
        }
        
        //column check
        for(int i=0;i<9;i++) {
            unordered_map<char,int> rmp;
            for(int j=0;j<9;j++) {
                if(board[j][i]!='.' && rmp.count(board[j][i])) {
                    return false;
                }
                else {
                    if(board[j][i]!='.') {
                        //cout<<board[i][j];
                        rmp[board[j][i]] = j;    
                    }                    
                }
            }
            //cout<<endl;
        }
        
        
        //box check                
        int iStart = 0, iEnd = 3, jStart = 0, jEnd = 3;
        while(iEnd <= 9) {
            while(jEnd <= 9) {
                unordered_map<char,int> rmp;
                //3*3 box iteration
                for(int i = iStart; i < iEnd; i++) {                   
                    for(int j = jStart; j < jEnd; j++) {
                        if(board[i][j]!='.' && rmp.count(board[i][j])) {
                            return false;
                        }
                        else {
                            if(board[i][j]!='.') {                                
                                rmp[board[i][j]] = i;   
                            }                        
                        }                
                    }                
                }      
                //cout<<endl;
                //adjust columns to shift to next 3*3 box..the row(3 set) constant                
                jStart += 3;
                jEnd += 3;
            } 
            //cout<<endl;
            //new set of next 3 rows that contain 3 boxes
            iStart += 3;
            iEnd += 3;            
            jStart = 0;
            jEnd = 3;
        }
                    
        return true;
        
        
        
        
        
        
        
//         vector<set<int>> rows(9), cols(9), blocks(9);
        
//         for (int i = 0; i < 9; i++) {
//             for (int j = 0; j < 9; j++) {
                
//                 if (board[i][j] == '.') continue;
                
//                 int curr = board[i][j];
                
//                 if (rows[i].count(curr) || cols[j].count(curr) || blocks[(i/3)*3+j/3].count(curr)) 
//                     return false;
                
//                 rows[i].insert(curr);
//                 cols[j].insert(curr);
//                 blocks[(i/3)*3+j/3].insert(curr);
//             }            
//         }
        
//         return true;
        
    }
};