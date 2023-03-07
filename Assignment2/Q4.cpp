#include <iostream>
using namespace std;

bool isThreatening(int board[8][8], int row, int col){
    for (int i = 0; i < 8; i++) {
        if (board[row][i] == 1 || board[i][col] == 1)
            return true;
    }
    
    // Check if there is another queen in the same diagonal
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j == row + col || i - j == row - col) && board[i][j] == 1)
                return true;
        }
    }
    return false;
}
int main(){
    int board[8][8]={0};
    board[0][0]=1;
    if(isThreatening(board, 2, 3))//row, col is input
        cout << "A queen is threatening that square." << endl;
    else
        cout << "A queen is not threatening that square." << endl;
}