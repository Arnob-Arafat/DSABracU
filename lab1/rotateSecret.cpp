#include <bits/stdc++.h>
using namespace std;

void rotateSecret(char arr[][6], int n)
{
    int highest_extreme = n/2;
    int lowest_extreme = highest_extreme-1; 
    int row, col;
    char temp;
    int round = 1;
    do{

        for(int i = 1; i <= round; i++){

            row = highest_extreme, col = highest_extreme;
            temp =  arr[row][col];

            while(row != lowest_extreme){
                arr[row][col] = arr[row-1][col];
                row--;
            }

            while(col != lowest_extreme){
                arr[row][col] = arr[row][col-1];
                col--;
            }

            while(row != highest_extreme){
                arr[row][col] = arr[row+1][col];
                row++;
            }

            while(col != highest_extreme){
                arr[row][col] = arr[row][col+1];
                col++;
            }

            arr[row][col-1] = temp;
        }

        highest_extreme++;
        lowest_extreme--;
        row = highest_extreme, col = lowest_extreme;
        round++;

    }while (highest_extreme != n);
}

int main(void)
{
    char board[][6] = {
     {'O','R','I','R','N','P'},
    {'G','S','A','A','L','R'},
    {'L','M','N','O','N','Y'},
    {'A','H','U','O','O','P'},
    {'T','F','C','T','H','S'},
    {'E','D','Y','O','C','K'}
    };

    int n = sizeof(board)/sizeof(board[0]);

    rotateSecret(board, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j];
        }
    }

    cout << endl;

}