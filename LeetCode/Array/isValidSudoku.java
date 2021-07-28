// Valid Sudoku

// Q) Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:
// 1) Each row must contain the digits 1-9 without repetition.
// 2) Each column must contain the digits 1-9 without repetition.
// 3) Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

class Solution 
{
    public boolean isValidSudoku(char[][] board) 
    {
       for (int i = 0; i < 9; i++) 
       {
        if (!isValid(board, i, i, 0, 8)) 
            return false;
        if (!isValid(board, 0, 8, i, i)) 
            return false;
        if (!isValid(board, (i / 3) * 3, (i / 3) * 3 + 2, (i % 3) * 3, (i % 3) * 3 + 2))           
          return false;
       }
    return true;
    } 
    
public boolean isValid(char[][] board, int rStart, int rEnd, int cStart, int cEnd){
    boolean[] contain = new boolean[9];
    for (int row = rStart; row <= rEnd; row++) {
      for (int col = cStart; col <= cEnd; col++) {
        char c = board[row][col];
          if(c != '.'){
            if(contain[c - '1']) 
                return false;
            else contain[c - '1'] = true;
        }
      }
    }
  return true;
  }
}
