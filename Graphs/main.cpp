#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int row = 4 ;
    int col = 4 ;

    vector<vector<int>> Matrix( row, vector<int>(col ,0) );


    char Vertex[4] = {'A' ,'B' ,'C' ,'D'};

    int Edge[4][4] = {{0, 1, 0, 0},
                     {1, 0, 1, 0},
                     {0, 1, 0, 1},
                     {0, 0, 1, 0}};

                     // Number of vertices
    int V = 4;
    int E = 0;
    for (int i = 0; i < V; i++) {
        cout << Vertex[i] << " ";
        for (int j = 0; j < V; j++) {
            cout << Edge[i][j] << " ";
        }
        cout << endl;
    }
}