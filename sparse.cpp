//A sparse using arrays using C++
#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {0, 0, 5},
        {0, 8, 0},
        {0, 0, 0}
    };
    int sparse[10][3];
    int k = 1;

    // Store matrix dimensions
    sparse[0][0] = 3;
    sparse[0][1] = 3;

    // Find non-zero elements
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = a[i][j];

                k++;
            }
        }
    }

    // Store number of non-zero elements
    sparse[0][2] = k - 1;

    // Display triplet representation
    cout<<"Row Column Value\n";

    for(int i = 0; i < k; i++){
        cout<<sparse[i][0]<< " "
            <<sparse[i][1]<< " "
            <<sparse[i][2]<< endl;
    }
return 0;
}
