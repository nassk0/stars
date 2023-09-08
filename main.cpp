#include <iostream>

using namespace std;

int main()
{
    int n=10;
    for (int i = 0;i<n;i++)
       {
        for (int j = 0;j<n*4;j++)
          {
            if (i ==j||i==(2*n-1)-j)
                cout << "*" ;
            else
                cout <<" ";

            if (((i==1||i==n-2)&&j>2*n&&j<3*n-1)||((j==2*n+1||j==3*n-2)&&i>1&&i<n-2))
                cout << "*" ;
            else
                cout <<" ";

            if (j>3*n-1&&j<4*n&&(i==j - 3*n+2||i==j-3*n-2))
                cout << "*" ;
            else
                cout <<" ";
          }

            cout <<"\n";
       }

    return 0;
}
