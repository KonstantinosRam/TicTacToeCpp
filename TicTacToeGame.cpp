
#include <iostream>
#include <limits>


using namespace std;


char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
  int player = 1;
  int counter = 1;
//function declarations


void gameResult();
void gameDraw();
void ticTacToeGame();
void printBoard();
void playerInput();
int checkWinCondition();

//this function is used to print the result of the game.
void gameResult()
{
  system("cls");
  if (player == 1)
    {
      cout << " .----------------.  .----------------.      .----------------.  .----------------.  .-----------------. .----------------. \n";
          cout << "| .--------------. || .--------------. |    | .--------------. || .--------------. || .--------------. || .--------------. |\n";
          cout << "| |   ______     | || |     __       | |    | | _____  _____ | || |     _____    | || | ____  _____  | || |    _______   | |\n";
          cout << "| |  |_   __ \\   | || |    /  |      | |    | ||_   _||_   _|| || |    |_   _|   | || ||_   \\|_   _| | || |   /  ___  |  | |\n";
          cout << "| |    | |__) |  | || |    `| |      | |    | |  | | /\\ | |  | || |      | |     | || |  |   \\ | |   | || |  |  (__ \\_|  | |\n";
          cout << "| |    |  ___/   | || |     | |      | |    | |  | |/  \\| |  | || |      | |     | || |  | |\\ \\| |   | || |   '.___`-.   | |\n";
          cout << "| |   _| |_      | || |    _| |_     | |    | |  |   /\\   |  | || |     _| |_    | || | _| |_\\   |_  | || |  |`\\____) |  | |\n";
          cout << "| |  |_____|     | || |   |_____|    | |    | |  |__/  \\__|  | || |    |_____|   | || ||_____|\\____| | || |  |_______.'  | |\n";
          cout << "| |              | || |              | |    | |              | || |              | || |              | || |              | |\n";
          cout << "| '--------------' || '--------------' |    | '--------------' || '--------------' || '--------------' || '--------------' |\n";
          cout << " '----------------'  '----------------'      '----------------'  '----------------'  '----------------'  '----------------'\n";
    }
    else 
    {
      cout << " .----------------.  .----------------.      .----------------.  .----------------.  .-----------------. .----------------. \n";
          cout << "| .--------------. || .--------------. |    | .--------------. || .--------------. || .--------------. || .--------------. |\n";
          cout << "| |   ______     | || |    _____     | |    | | _____  _____ | || |     _____    | || | ____  _____  | || |    _______   | |\n";
          cout << "| |  |_   __ \\   | || |   / ___ `.   | |    | ||_   _||_   _|| || |    |_   _|   | || ||_   \\|_   _| | || |   /  ___  |  | |\n";
          cout << "| |    | |__) |  | || |  |_/___) |   | |    | |  | | /\\ | |  | || |      | |     | || |  |   \\ | |   | || |  |  (__ \\_|  | |\n";
          cout << "| |    |  ___/   | || |   .'____.'   | |    | |  | |/  \\| |  | || |      | |     | || |  | |\\ \\| |   | || |   '.___`-.   | |\n";
          cout << "| |   _| |_      | || |  / /____     | |    | |  |   /\\   |  | || |     _| |_    | || | _| |_\\   |_  | || |  |`\\____) |  | |\n";
          cout << "| |  |_____|     | || |  |_______|   | |    | |  |__/  \\__|  | || |    |_____|   | || ||_____|\\____| | || |  |_______.'  | |\n";
          cout << "| |              | || |              | |    | |              | || |              | || |              | || |              | |\n";
          cout << "| '--------------' || '--------------' |    | '--------------' || '--------------' || '--------------' || '--------------' |\n";
          cout << " '----------------'  '----------------'      '----------------'  '----------------'  '----------------'  '----------------'\n";
    }
}

//this is also a function in case of the game is draw whick also is not nessecary 
void gameDraw()
{
  system("cls");
  cout << " .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n";
    cout << "| .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n";
    cout << "| |  ________    | || |  _______     | || |      __      | || | _____  _____ | || |              | || |              | |\n";
    cout << "| | |_   ___ `.  | || | |_   __ \\    | || |     /  \\     | || ||_   _||_   _|| || |      _       | || |      _       | |\n";
    cout << "| |   | |   `. \\ | || |   | |__) |   | || |    / /\\ \\    | || |  | | /\\ | |  | || |     | |      | || |     | |      | |\n";
    cout << "| |   | |    | | | || |   |  __ /    | || |   / ____ \\   | || |  | |/  \\| |  | || |     | |      | || |     | |      | |\n";
    cout << "| |  _| |___.' / | || |  _| |  \\ \\_  | || | _/ /    \\ \\_ | || |  |   /\\   |  | || |     | |      | || |     | |      | |\n";
    cout << "| | |________.'  | || | |____| |___| | || ||____|  |____|| || |  |__/  \\__|  | || |     |_|      | || |     |_|      | |\n";
    cout << "| |              | || |              | || |              | || |              | || |     (_)      | || |     (_)      | |\n";
    cout << "| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n";
    cout << " '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n";
}

void ticTacToeGame()
{
  cout << " ______  __   ______       ______  ______   ______       ______  ______   ______    \n";
  cout << "/\\__  _\\/\\ \\ /\\  ___\\     /\\__  _\\/\\  __ \\ /\\  ___\\     /\\__  _\\/\\  __ \\ /\\  ___\\   \n";
  cout << "\\/_/\\ \\/\\ \\ \\\\ \\ \\____    \\/_/\\ \\/\\ \\  __ \\\\ \\ \\____    \\/_/\\ \\/\\ \\ \\/\\ \\\\ \\  __\\   \n";
  cout << "   \\ \\_\\ \\ \\_\\\\ \\_____\\      \\ \\_\\ \\ \\_\\ \\_\\\\ \\_____\\      \\ \\_\\ \\ \\_____\\\\ \\_____\\ \n";
  cout << "    \\/_/  \\/_/ \\/_____/       \\/_/  \\/_/\\/_/ \\/_____/       \\/_/  \\/_____/ \\/_____/ \n";
}



//CREATION OF THE BOARD
void printBoard()
  {
    
    system("cls");
    ticTacToeGame();

    cout << "\t\t\t      -------------------------\n";
    cout << "\t\t\t      |       |       |       |\n";
    cout << "\t\t\t      |   " << board[0][0] << "   |   " << board[0][1] << "   |   " << board[0][2] << "   |\n";
    cout << "\t\t\t      |       |       |       |\n";
    cout << "\t\t\t      -------------------------\n";
    cout << "\t\t\t      |       |       |       |\n";
    cout << "\t\t\t      |   " << board[1][0] << "   |   " << board[1][1] << "   |   " << board[1][2] << "   |\n";
    cout << "\t\t\t      |       |       |       |\n";
    cout << "\t\t\t      -------------------------\n";
    cout << "\t\t\t      |       |       |       |\n";
    cout << "\t\t\t      |   " << board[2][0] << "   |   " << board[2][1] << "   |   " << board[2][2] << "   |\n";
    cout << "\t\t\t      |       |       |       |\n";
    cout << "\t\t\t      -------------------------\n" << flush;
    


    
   }

//THIS IS THE FUNCTION THAT INPUTS THE PLAYERS 'X' OR 'O' INTO THE DESIRED POTITION
    
  void playerInput()
  {
    char mark;
    /*The reason we create a string variable called "choice" is because if I treat it as an integer and accidentally 
    input a character, the program will act unexpectedly. Additionally, if I treat it as a character, the buffer will ignore all 
    elements after the first one (in case someone enters more than one character, but it will still input the first 
    element into the array because if it meets the requirements to be between 1 and 9 and the requirement of the specific potition
    isnt already occupied by mark. To better illustrate this, let's say I input "23" and have defined the choice as a char. The result
     would be that if element 2 of the array is empty(board[0][2]), it willinput the mark.a*/
    string choice;

    int intChoice;
    bool properInput ;
    
 
    do {
        properInput = true;

        printBoard();
        cout << "round " << counter << endl;
        cout << "Player " << player << ", enter your choice (1-9): ";
        cin >> choice;

         if ( choice.length() != 1) {
            properInput = false;
            continue;
        }

        int intChoice = choice[0] - '0';
        int row = (intChoice - 1) / 3;
        int col = (intChoice - 1) % 3;

        // Check if the chosen position is already occupied
        if (board[row][col] == 'X' || board[row][col] == 'O') {
            properInput = false;
            continue; 
        }
        if(intChoice < 1 || intChoice > 9)
        {
            properInput = false;
            continue;
        }

        
        mark = (player == 1) ? 'X' : 'O';
        board[row][col] = mark;

        break;
    } while (!properInput);
    
    if(properInput)
    {
    counter++;
    player = (player == 1) ? 2 : 1;
    }
  }



//CHEKWIN CONDITION 
    int checkWinCondition()
   {
    bool checkIftheresAWinner = false;
    int win = 0;
    int draw = 1;
    int gameProgressing = 2;


    if (
    (board[0][0] == board[1][0] && board[0][0] == board[2][0]) ||
    (board[0][1] == board[1][1] && board[0][1] == board[2][1]) ||
    (board[0][2] == board[1][2] && board[0][2] == board[2][2]) ||
    (board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
    (board[2][0] == board[1][1] && board[2][0] == board[0][2]) ||
    (board[0][0] == board[0][1] && board[0][0] == board[0][2]) ||
    (board[1][0] == board[1][1] && board[1][0] == board[1][2]) ||
    (board[2][0] == board[2][1] && board[2][0] == board[2][2])  )
       {
        checkIftheresAWinner = true;
        return win;
       }
       else if(counter > 9 && checkIftheresAWinner == false)
       {
          return draw;
       }
       
       return gameProgressing;
   }




//this is the main function
  int main()
  {
  
    do {
    playerInput();
    }while(checkWinCondition() == 2);

    if (checkWinCondition() == 0)//in case of win
      {
        
        player = (player == 1) ? 2 : 1;
        gameResult();
      }


    if (checkWinCondition() == 1)//in case of draw
      {
        gameDraw();
      }

  }
