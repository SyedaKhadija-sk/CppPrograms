#include<iostream>

using namespace std;

int main() {
    int check=0;
    int choice;
    char turn='X';
    int row,column;
    cout<<"\t\t"<<"Start Game"<<endl;
    cout<<endl<<"Player One[X]\nPlayer Two[0]"<<endl<<endl;
    cout<<"\t\t\t"<<"T I C K--C R O S S"<<endl;
    cout<<"\t\t"<<"_________________________________"<<endl;
          cout<<endl<<endl;
    char Grid[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
            cout<<"\t\t"<<Grid[i][j];
            cout<<endl<<endl;    
    }
    bool gameover = false;
    
    while (!gameover) {
        if (turn =='X') {
            cout<<"\n player One[X]turn:";
        }
        else if(turn =='0') {
            cout<<"\nplayer Two[0]turn:";
        }
        
        cin >> choice;
        
        switch (choice) {
            case 1:
                row=0;
                column=0;
                break;
            case 2:
                row=0;
                column=1;
                break;
            case 3:
                row=0;
                column=2;
                break;
            case 4:    
                row = 1;
                column = 0;
                break;
            case 5:
                row = 1;
                column = 1;
                break;
            case 6:
                row = 1;
                column = 2;
                break;
            case 7:
                row = 2;
                column = 0;
                break;
            case 8:
                row = 2;
                column = 1;
                break;
            case 9:
                row = 2;
                column = 2;
                break;
            default:
                cout<<"inValid value";
                break;
        }
        
        if ((turn == 'X') and (Grid[row][column] != 'X') and (Grid[row][column] != '0')) {
            Grid[row][column] = 'X';
            turn = '0';
        }
        else if ((turn == '0' )and (Grid[row][column] != 'X') and (Grid[row][column] != '0')) {
            Grid[row][column] = '0';
            turn = 'X';
        }
        else {
            cout << "box fill! try again" << endl;
        }
        
        system("cls");
        cout<<"\t\t\t"<<"START  GAME"<<endl;
        cout<<endl<<"player ONE[X]\nplayer TWO[0]"<<endl<<endl;
        cout<<"\t\t\t"<<"T I C K--C R O S S"<<endl;
        cout<<"\t\t"<<"_________________________________"<<endl;
        cout<<endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << "\t\t" << Grid[i][j];
            cout << endl<< endl;
        }
        
        for (int i = 0; i < 3; i++) {
            if (Grid[i][0] != '*') {
                if((Grid[i][0] == Grid[i][1]) and (Grid[i][0] == Grid[i][2])) {
                    gameover=true;
                    cout<<endl<<"you win";
                    break;
                }
            }
            
            if (Grid[0][i] != '*') {
                if((Grid[0][i] == Grid[1][i]) and (Grid[0][i] == Grid[2][i])) {
                    gameover=true;
                    cout<<endl<<"you win";
                    break;
                }    
            }
            
            if (Grid[1][1] != '*') {
                if((Grid[0][0] == Grid[1][1]) and (Grid[0][0] == Grid[2][2])) {
                    gameover=true;
                    cout<<endl<<"you win";
                    break;
                }
                else if((Grid[0][2] == Grid[1][1]) and (Grid[0][2] == Grid[2][0])) {
                    gameover=true;
                    cout<<endl<<"you win";
                    break;
                }
            } 
            
            bool isDraw = true;
                
            for (int row = 0; row < 3; row++){
                for (int column = 0; column < 3; column++){
                    if (Grid[row][column] == '*') {
                        isDraw = false;
                        break;
                    }
                }
            }
            
            if(isDraw) {
                cout << endl << "Draw game";
                gameover= true;
            }
        }
    }    
    
}