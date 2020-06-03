#include"Board.hpp"
#include"Soldier.hpp"
#include"FootSoldier.hpp"
#include"FootCommander.hpp"
#include<iostream>

using namespace std;

Soldier*& WarGame::Board::operator[](std::pair<int,int> location)
{
    cout << "puting a soldier on the board..." << endl;
    
    //return board[0][0];
    return board[location.first][location.second];
}

Soldier* WarGame::Board::operator[](std::pair<int,int> location) const
{
    cout << "reading a soldier on the board..." << endl;
    
    //return board[0][0];
    return board[location.first][location.second];
}

void WarGame::Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction)
{
    cout << "Board::move()" << endl;

    if(this->board[source.first][source.second]->get_p_num() == player_number)
    {
        if(direction == Up)
        {
            board[source.first + 1][source.second] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else if(direction == Down)
        {
            board[source.first - 1][source.second] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else if(direction == Right)
        {
            board[source.first][source.second + 1] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else
        {
            board[source.first][source.second - 1] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
    }
    else
    {
        /* code */
    }
    
}

bool WarGame::Board::has_soldiers(uint player_number) const
{
    cout << "Board::has_soldiers()" << endl;

    int flag = 0;

    for(int i = 0; i < this->board.size() ; i++)
    {
        for(int j = 0; j < this->board[i].size() ; j++)
        {
            if(board[i][j] != nullptr && board[i][j]->get_p_num() == player_number)
            {
                flag = 1;
            }
        }

    }
    return flag;
}



// draw the board status(for testing)
void WarGame::Board::drawBoard() const
{
    for(int i = 0; i < this->board.size() ; i++)
    {
        cout << " ____";
    }
    cout << "\n";

    for(int i = 0; i < this->board.size() ; i++)
    {
        cout << "|";
        for(int j = 0; j < this->board[i].size() ; j++)
        {
            if(board[i][j] != nullptr)
            {
                //cout << "_" << "*" << "_|";
                
                cout << "_" << board[i][j]->printType() << "_|";
            }
            else
            {
                cout << "____|";
            }
        }
        cout << "" << endl;
    }

}