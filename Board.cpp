#include"Board.hpp"
#include<iostream>

using namespace std;

Soldier*& WarGame::Board::operator[](std::pair<int,int> location)
{
    cout << "puting a soldier on the board..." << endl;
    
    return board[0][0];
}

Soldier* WarGame::Board::operator[](std::pair<int,int> location) const
{
    cout << "searching for soldiers on the board..." << endl;
    
    return board[0][0];
}

void WarGame::Board::move(uint player_number, std::pair<int,int> source, MoveDIR direction)
{
    cout << "Board::move()" << endl;
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