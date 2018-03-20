#include <iostream>
#include <vector>
#include "Spaces.hpp"
#include "Player.hpp"
using std::cout;
using std::endl;
using std::vector;

int main()
{
    /*Spaces grid[20][20];
    cout << " - - - - - - - - - - - - - - - - - - - -" <<endl;
    for (int i = 0; i < 20; i++)
    {   
        cout << "|";
        for (int j = 0; j < 20; j++)
        {
            
            cout << grid[i][j].object() << " ";
           
        }
        cout << "|"<< endl;
    }
    cout << " - - - - - - - - - - - - - - - - - - - -" <<endl;
    */

    Spaces*** grid = new Spaces**[20];
    for (int i = 0; i < 20; i++)
        grid[i] = new Spaces*[20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            grid[i][j] = NULL;
        }
    }
    cout << " - - - - - - - - - - - - - - - - - - - -" <<endl;
    for (int i = 0; i < 20; i++)
    {   
        cout << "|";
        for (int j = 0; j < 20; j++)
        {
            
            cout << grid[i][j]-> object() << " ";
           
        }
        cout << "|"<< endl;
    }
    cout << " - - - - - - - - - - - - - - - - - - - -" <<endl;

    

}