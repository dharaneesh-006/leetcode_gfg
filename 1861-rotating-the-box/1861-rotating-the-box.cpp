class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& mat) 
    {
        int row = mat.size();
        int col = mat[0].size();

        for(int  i = 0 ;i < row ; i += 1 ){
            
            int right = col ;

            for(int j = col - 1 ; j >=0 ; j-=1 ){

                if( mat[i][j] == '#' ){
                    mat[i][--right] ='#';
                    if( j != right )
                        mat[i][j] = '.';
                }
                else if(mat[i][j]  == '*' ){
                    right = j ;
                }   
            }
        }
        vector<vector<char>> AT(col , vector<char>(row ));
        for( int i = 0 ;i < col ; i +=1  ){
            for(int j =0 ;j < row ; j +=1 ){
                AT[i][j] = mat[j][i];
            }
            reverse(AT[i].begin() , AT[i].end());
        }

        return AT;        

    }
};