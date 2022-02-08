

#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] ={
                        {1,9,2},
                        {5,7,6 },
                        {4,3,8}};
    const int ROW =3;
    const int COL =3;
    int temp = 0;
    for (int m=0; m<(ROW * COL - 1); m++)
           for (int i = 0; i<ROW ; i++){
               for (int j = 0; j<COL; j++){
                   
                       if (i==ROW-1 && j==COL-1){
                               continue;
                       }
                  
                   if (arr[i][j] > arr[i][j+1]){
                      temp = arr[i][j];
                      arr[i][j] = arr[i][j+1];
                      arr[i][j+1] = temp;
                   }
              }
           }
    for(int i=0;i<ROW;++i)
    {
        for(int j = 0;j<COL;++j)
        {
            cout<<arr[i][j]<<' ';
        }
    }
    return 0;
}
