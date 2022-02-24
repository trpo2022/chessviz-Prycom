#include <iostream>

using namespace std;

const int N1 = 8;
const int N2 = 9;

void print_board(char board[N1][N2], char bot[N2], char left[N2])
{
    int n = 8, i, j;
    for (i = 0; i < n; i++) {
        cout << left[i] << " ";
        for (j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << " ";
    for (i = 0; i < n; i++) {
        cout << " " << bot[i];
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "rus");
    char left[N2] = "87654321";
    char bot[N2] = "abcdefgh";
    char board[N1][N2]
            = {"rnbqkbnr",
               "pppppppp",
               "        ",
               "        ",
               "        ",
               "        ",
               "PPPPPPPP",
               "RNBKQBNR"};
    print_board(board, bot, left);
    return 0;
}