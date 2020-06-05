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
    if(this->board[source.first][source.second] == nullptr)
    {
        throw std::invalid_argument("There is no soldier at this location!");
    }

    cout << "Board::move()" << endl;

    if(this->board[source.first][source.second]->get_p_num() == 1)
    {
        if(direction == Up)
        {
            if(this->board[source.first + 1][source.second] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            board[source.first + 1][source.second] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else if(direction == Down)
        {
            if(this->board[source.first - 1][source.second] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            board[source.first - 1][source.second] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else if(direction == Right)
        {
            if(this->board[source.first][source.second - 1] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            board[source.first][source.second - 1] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else
        {
            if(this->board[source.first][source.second + 1] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            board[source.first][source.second + 1] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
    }
    else // player id = 2
    {
        if(direction == Up)
        {
            if(this->board[source.first - 1][source.second] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            board[source.first - 1][source.second] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else if(direction == Down)
        {
            if(source.first + 1 > this->board.capacity()-1)
            {
                throw std::invalid_argument("This location is out of the board!");
            }
            if(this->board[source.first + 1][source.second] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            
            board[source.first + 1][source.second] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else if(direction == Right)
        {
            if(this->board[source.first][source.second + 1] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            board[source.first][source.second + 1] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
        else
        {
            if(this->board[source.first][source.second - 1] != nullptr)
            {
                throw std::invalid_argument("There is another soldier at this location!");
            }
            if(source.second - 1 < 0)
            {
                throw std::invalid_argument("This location is out of the board!");
            }
            board[source.first][source.second - 1] = board[source.first][source.second];
            board[source.first][source.second] = nullptr;
        }
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