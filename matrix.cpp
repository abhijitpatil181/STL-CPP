#include <iostream>
using namespace std;

int main()
{
    cout << "Enter matrix 1 elements: ";
    int matrix1[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> matrix1[i][j]; // matrix 1 elements
    }
    cout << "Enter matrix 2 elements: ";
    int matrix2[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> matrix2[i][j]; // matrix 2 elements
    }
    cout << endl;
    cout << "Matrix 1 is: " << endl;
    for (int i = 0; i < 3; i++)
    { // print matrix 1
        for (int j = 0; j < 3; j++)
            cout << matrix1[i][j] << "\t";
        cout << endl;
    }
    cout << "Matrix 2 is: " << endl;
    for (int i = 0; i < 3; i++)
    { // print matrix 2
        for (int j = 0; j < 3; j++)
            cout << matrix2[i][j] << "\t";
        cout << endl;
    }
    cout << endl;
    int product[3][3];
    for (int i = 0; i < 3; i++)
    { // calculate matrix product
        for (int j = 0; j < 3; j++)
        {
            for(int k=0;k<3;k++){
            product[i][j] = matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of the matrices is: " << endl;
    for (int i = 0; i < 3; i++)
    { // print matrix product
        for (int j = 0; j < 3; j++)
            cout << product[i][j] << "\t";
        cout << endl;
    }
    return 0;
}