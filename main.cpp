#include <iostream>
#include <Windows.h>


//TOFFAH
//TIC TAC TOE GAME
//THIS IS A SIMPLE TIC TAC TOE GAME PROJECT

void gameGrid(char gridNum[9]);
int checkWinner(char gridNum[9]);

int main()
{
    char selections[9] = { '1','2','3','4','5','6','7','8','9' };

    bool playing = true;
    int player = 1;
    int choice;
    int winner; 
    int turns = 1;

    while (playing==true)
    {
        gameGrid(selections);

        if (player % 2 == 1)
        {
            //PLAYER 1 IS 'X'

            std::cout << "Select a square, Player 1: ";
            std::cin >> choice;
            player++;

            selections[choice-1] = 'X';

        }
        else if (player % 2 == 0)
        {
            //PLAYER 2 IS 'O'

            std::cout << "Select a square, Player 2: " << std::endl;
            std::cin >> choice;
            player++;

            selections[choice-1] = 'O';

        }
        else
        {
            std::cout << "ERROR!\a" << std::endl;
        }

        gameGrid(selections);
        
        winner= checkWinner(selections);

        if (winner != -1)
        {
            playing = false;
            break;
        }

        if (turns >= 9)
        {
            std::cout << "Draw\a" << std::endl;
            break;
        }

        turns++;
        

    }

    system("pause");

    
	return 0;
}


void gameGrid(char  gridNum[9])
{
    system("cls");

    std::cout << "==============TIC TAC TOE=================" << std::endl;

    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << gridNum[0] << "  |  " << gridNum[1] << "  |  " << gridNum[2] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << gridNum[3] << "  |  " << gridNum[4] << "  |  " << gridNum[5] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << gridNum[6] << "  |  " << gridNum[7] << "  |  " << gridNum[8] << std::endl;

    std::cout << "     |     |     " << std::endl;

}

int checkWinner(char gridNum[9])
{
    
    if (gridNum[0] == 'X' && gridNum[1] == 'X' && gridNum[2] == 'X') //PLAYER 1 HORIZONTAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else if (gridNum[0] == 'O' && gridNum[1] == 'O' && gridNum[2] == 'O')//PLAYER 2 HORIZONTAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }

    if (gridNum[3] == 'X' && gridNum[4] == 'X' && gridNum[5] == 'X') //PLAYER 1 HORIZONTAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else if (gridNum[3] == 'O' && gridNum[4] == 'O' && gridNum[5] == 'O') //PLAYER 2 HORIZONTAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }

    if (gridNum[6] == 'X' && gridNum[7] == 'X' && gridNum[8] == 'X') //PLAYER 1 HORIZONTAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else  if (gridNum[6] == 'O' && gridNum[7] == 'O' && gridNum[8] == 'O') //PLAYER 2 HORIZONTAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }

    if (gridNum[0] == 'X' && gridNum[3] == 'X' && gridNum[6] == 'X') //PLAYER 1 VERTICAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else if (gridNum[0] == 'O' && gridNum[3] == 'O' && gridNum[6] == 'O') //PLAYER 2 VERTICAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }

    if (gridNum[1] == 'X' && gridNum[4] == 'X' && gridNum[7] == 'X') //PLAYER 1 VERTICAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else if (gridNum[1] == 'O' && gridNum[4] == 'O' && gridNum[7] == 'O') //PLAYER 2 VERTICAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }

    if (gridNum[2] == 'X' && gridNum[5] == 'X' && gridNum[8] == 'X') //PLAYER 1 VERTICAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else  if (gridNum[2] == 'O' && gridNum[5] == 'O' && gridNum[8] == 'O') //PLAYER 2 VERTICAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }

    if (gridNum[0] == 'X' && gridNum[4] == 'X' && gridNum[8] == 'X') //PLAYER 1 DIAGONAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else if (gridNum[0] == 'O' && gridNum[4] == 'O' && gridNum[8] == 'O') //PLAYER 2 DIAGONAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }

    if (gridNum[2] == 'X' && gridNum[4] == 'X' && gridNum[6] == 'X') //PLAYER 1 DIAGONAL LINE CHECK
    {
        std::cout << "Player 1 Wins!" << std::endl;
        return 1;
    }
    else if (gridNum[2] == 'O' && gridNum[4] == 'O' && gridNum[6] == 'O') //PLAYER 2 DIAGONAL LINE CHECK
    {
        std::cout << "Player 2 Wins!" << std::endl;
        return 2;
    }


    return -1;

}