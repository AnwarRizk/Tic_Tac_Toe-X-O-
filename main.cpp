#include <iostream>
#include <windows.h>
#define h GetStdHandle(STD_OUTPUT_HANDLE)
using namespace std;

char one, two, three, four , five, six, seven, eight, nine;
int x, o;

void DrawGrid();
void X_choice();
void O_choice();
bool Is_X_win();
bool Is_O_win();
void x_won();
void o_won();
void draw();
int main()
{   start:
        int drw = 0;
        one = '1', two = '2', three = '3',
        four = '4', five = '5', six = '6',
        seven = '7', eight = '8', nine = '9';

        SetConsoleTextAttribute(h, 8);
        cout << "\t\t      \"You Can Do It\"\n";
        DrawGrid();

    char exit = '1';
    while(exit != '0'){

        X_choice();      drw++;
        system("cls");
        DrawGrid();
        if(Is_X_win()){
            SetConsoleTextAttribute(h, 13);
            x_won();
            SetConsoleTextAttribute(h, 7);
            cout << "\n\t\tEnter 'any key' to continue \n\t\t(OR) Enter '0' To Exit: ";
            cin >> exit;
            if(exit == '0')         return 0;
            system("cls");
            goto start;
        }

        if(drw == 9){
            draw();
            cin >> exit;
            if(exit == '0')         return 0;
            system("cls");
            goto start;
        }

        O_choice();      drw++;
        system("cls");
        DrawGrid();
        if(Is_O_win()){
            SetConsoleTextAttribute(h, 13);
            o_won();
            SetConsoleTextAttribute(h, 7);
            cout << "\n\t\tEnter 'any key' to continue \n\t\t(OR) Enter '0' To Exit: ";
            cin >> exit;
            if(exit == '0')         return 0;
            system("cls");
            goto start;
        }

    }

    return 0;
}

void DrawGrid(){
    SetConsoleTextAttribute(h, 6);
    cout << "\t\t*-----------------------*\n"
         << "\t\t|       |       |       |\n"
         << "\t\t|   " << one   << "   |   " << two   << "   |   "  << three << "   |\n"
         << "\t\t|       |       |       |\n"
         << "\t\t|-------|-------|-------|\n"
         << "\t\t|       |       |       |\n"
         << "\t\t|   " << four  << "   |   " << five  << "   |   "  << six   << "   |\n"
         << "\t\t|       |       |       |\n"
         << "\t\t|-------|-------|-------|\n"
         << "\t\t|       |       |       |\n"
         << "\t\t|   " << seven << "   |   " << eight << "   |   "  << nine  << "   |\n"
         << "\t\t|       |       |       |\n"
         << "\t\t*-----------------------*\n\n";

}

void X_choice(){
    s:
    SetConsoleTextAttribute(h, 9);
    cout << "\t\t\t X_Player\n\t\twhere would you like to play: ";
    cin >> x;
    switch(x){
        case 1:
                if(one != '1'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                one = 'X';
                break;
        case 2:
                if(two != '2'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                two = 'X';
                break;
        case 3:
                if(three != '3'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                three = 'X';
                break;
        case 4:
                if(four != '4'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                four = 'X';
                break;
        case 5:
                if(five != '5'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                five = 'X';
                break;
        case 6:
                if(six != '6'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                six = 'X';
                break;
        case 7:
                if(seven != '7'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                seven = 'X';
                break;
        case 8:
                if(eight != '8'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                eight = 'X';
                break;
        case 9:
                if(nine != '9'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                nine = 'X';
                break;
        default:
                SetConsoleTextAttribute(h, 12);
                cout << "\t\tError!\n";
                goto s;
    }
}
void O_choice(){
    s:
    SetConsoleTextAttribute(h, 11);
    cout << "\t\t\t O_Player\n\t\twhere would you like to play: ";
    cin >> o;
    switch(o){
        case 1:
                if(one != '1'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                one = 'O';
                break;
        case 2:
                if(two != '2'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                two = 'O';
                break;
        case 3:
                if(three != '3'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                three = 'O';
                break;
        case 4:
                if(four != '4'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                four = 'O';
                break;
        case 5:
                if(five != '5'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                five = 'O';
                break;
        case 6:
                if(six != '6'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                six = 'O';
                break;
        case 7:
                if(seven != '7'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                seven = 'O';
                break;
        case 8:
                if(eight != '8'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                eight = 'O';
                break;
        case 9:
                if(nine != '9'){
                    SetConsoleTextAttribute(h, 12);
                    cout << "\t\tfilled:(\n"; goto s;
                }
                nine = 'O';
                break;
        default:
                SetConsoleTextAttribute(h, 12);
                cout << "\t\tError!\n";
                goto s;
    }
}

bool Is_X_win(){
    if((one == 'X' && two == 'X' && three == 'X') or
       (four == 'X' && five == 'X' && six == 'X') or
       (seven == 'X' && eight == 'X' && nine == 'X') or
       (one == 'X' && four == 'X' && seven == 'X') or
       (two == 'X' && five == 'X' && eight == 'X') or
       (three == 'X' && six == 'X' && nine == 'X') or
       (one == 'X' && five == 'X' && nine == 'X') or
       (three == 'X' && five == 'X' && seven == 'X'))
        return true;

    return false;
}
bool Is_O_win(){
    if((one == 'O' && two == 'O' && three == 'O') or
       (four == 'O' && five == 'O' && six == 'O') or
       (seven == 'O' && eight == 'O' && nine == 'O') or
       (one == 'O' && four == 'O' && seven == 'O') or
       (two == 'O' && five == 'O' && eight == 'O') or
       (three == 'O' && six == 'O' && nine == 'O') or
       (one == 'O' && five == 'O' && nine == 'O') or
       (three == 'O' && five == 'O' && seven == 'O'))
        return true;

    return false;
}

void x_won(){
    cout << "\t\t+--------------------------------+\n";
    cout << "\a\t\t| Congratulations... \t         |\n\t\t|         (X)Player Won The Game |\n";
    cout << "\t\t+--------------------------------+\n";
}
void o_won(){
    cout << "\t\t+--------------------------------+\n";
    cout << "\a\t\t| Congratulations... \t         |\n\t\t|         (O)Player Won The Game |\n";
    cout << "\t\t+--------------------------------+\n";
}
void draw(){
    SetConsoleTextAttribute(h, 64);
    cout << "\a\t\t\tGood Luck...\n\t\t\tEnded With Draw!\n";
    SetConsoleTextAttribute(h, 7);
    cout << "\n\t\tEnter 'any key' to continue \n\t\t(OR) Enter '0' To Exit: ";
}
