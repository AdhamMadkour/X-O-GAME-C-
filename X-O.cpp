#include <iostream>

using namespace std;

string AUTHOR = "MADE BY ABOGBL ^_^  ( 1 / 4 / 2020 ) ";

bool winner(char tic[]) {
    if (tic[0] == tic[1] && tic[1] == tic[2])
        return 1;
    else if (tic[0] == tic[4] && tic[4] == tic[8])
        return 1;
    else if (tic[0] == tic[3] && tic[3] == tic[6])
        return 1;
    else if (tic[1] == tic[4] && tic[4] == tic[7])
        return 1;
    else if (tic[2] == tic[5] && tic[5] == tic[8])
        return 1;
    else if (tic[2] == tic[4] && tic[4] == tic[6])
        return 1;
    else if (tic[3] == tic[4] && tic[4] == tic[5])
        return 1;
    else if (tic[6] == tic[7] && tic[7] == tic[8])
        return 1;
    else
        return 0;
}

int main() {
    int x, s = 0;
    char tic[9];
    for (int i = 0; i < 9; i++) {
        tic[i] = char(49 + i);
    }

    cout << "          Welcome to tic-tac-toe game       " << endl;
    cout << "===========================================" << endl;
    cout << "This game was written by Adham Ahmed Madkour" << endl;
    cout << "===========================================" << endl;
    cout << "PRESS ENTER TO START THE GAME ............." << endl;
    cin.get();
    system("cls");
    for (int i = 0; i < 9; i++) {
        if (i % 2 == 0)
            cout << "             PLAYER 1 turn" << endl;
        else
            cout << "             PLAYER 2 turn" << endl;
        cout << "====================================================" << endl;
        cout << "             " << tic[0] << "  |  " << tic[1] << "  |  " << tic[2] << " " << endl;
        cout << "****************************************************" << endl;
        cout << "             " << tic[3] << "  |  " << tic[4] << "  |  " << tic[5] << " " << endl;
        cout << "****************************************************" << endl;
        cout << "             " << tic[6] << "  |  " << tic[7] << "  |  " << tic[8] << " " << endl;
        cout << "====================================================" << endl;
        if (winner(tic) == 1) {
            int h = 0;
            if (i % 2 == 0)
                h = 2;
            else
                h = 1;

            cout << "The winner is player number " << h << endl;
            break;
        }
        for (int f = 0; f = 1;) {
            cin >> x;

            if (tic[x - 1] == 'X' || tic[x - 1] == 'O')
                x = 500;

            if (x > 9 || x < 1) {
                cout << "Error input enter the number again" << endl;
            } else {
                break;
            }
        }

        if (i % 2 == 0)
            tic[x - 1] = 'X';
        else
            tic[x - 1] = 'O';

        system("cls");
        s++;
    }
    if (s >= 8)
        cout << "\t\tPLAYER 1 AND PLAYER 2 ARE EQUAL ;) \n\n\n\t\tNOBODY WIN!!!!!!\n\n\n" << endl << endl;

    return 0;
}

