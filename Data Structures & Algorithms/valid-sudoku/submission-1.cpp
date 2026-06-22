

class Solution 
{

public:

 bool isValidSudoku(vector<vector<char>>& board) 
 {
		vector<unordered_map<int,int>> mapshorizontal(9);
		int flag=0;
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
					if(board[i][j]=='.')
						continue;
					if(mapshorizontal[i][board[i][j]-'0']==0)
					{
						mapshorizontal[i][board[i][j]-'0']+=1;
					}
					else
					{
						return false;
						
					}
					
			}
				
		}
		
		vector<unordered_map<int,int>> mapsvertical(9);
		for(int j=0;j<9;j++)
		{
			for(int i=0;i<9;i++)
			{
					if(board[i][j]=='.')
						continue;
					if(mapsvertical[j][board[i][j]-'0']==0)
					{
						mapsvertical[j][board[i][j]-'0']+=1;
					}
					else
					{
						return false;
					}
			}
			
		}
		vector<unordered_map<int,int>> boxes(9);
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				if(board[i][j]=='.')
						continue;
				int box=(i/3)*3 + j/3;
				if(boxes[box][board[i][j]-'0']==0)
				{
					boxes[box][board[i][j]-'0']+=1;
				}
				else
				{
					return false;
				}
			}
		}
		return true;
		
		
		
}

};