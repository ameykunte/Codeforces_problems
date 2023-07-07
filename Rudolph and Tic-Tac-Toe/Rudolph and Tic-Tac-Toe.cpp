//https://codeforces.com/contest/1846/problem/B

#include <cmath>
#include <iostream>
#include "string.h"
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    char board[3][3];
    int count = 0;
    char winner = '.';
    cin >> board[0][0] >> board[0][1] >> board[0][2];
    cin >> board[1][0] >> board[1][1] >> board[1][2];
    cin >> board[2][0] >> board[2][1] >> board[2][2];

    for (int i = 0; i < 3; i++){
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
            if (board[i][0] != '.') {
                winner = board[i][0];
                count++;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
            if (board[0][i] != '.') {
                winner = board[0][i];
                count++;
            }
        }
    }

    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
        if (board[0][0] != '.') {
            winner = board[0][0];
            count++;
        }
    }

    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
        if (board[0][2] != '.') {
            winner = board[0][2];
            count++;
        }
    }

    if (count != 1) {
        cout << "DRAW" << endl;
        return;
    }else{
        cout << winner << endl;
    }

}

int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        solve();
    }
    return 0;
}