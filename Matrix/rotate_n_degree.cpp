#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4



void printMatrix(int arr[R][C])
{
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}
 



void rotate90(int Mat[R][C])
{	
  
    int M_col = 0;
    int  M_row= 0 ;

	for (int j = C -1;  j>=0 ; j++)
	{
		for (int i = 0; i < R -1 ; i++)
		{
		  Mat[M_row][M_col] = Mat[i][j];

		  M_col ++;
		}

		M_row++;
	}
 
}

int main()
{

     int Mat[R][C] = { { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };

                      rotate90(Mat);
                       printMatrix(Mat);
    
	return 0;
}