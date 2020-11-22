#include <stdio.h>
#include <math.h>
#include <time.h>
int main() {
int matrix [6][9], i, j, max=0, min=120, h, p, z;
srand(time(NULL));
for (i=0; i<6; i++)
{
for(j=0; j<9; j++)
{
matrix[i][j]=rand()%120;
if (matrix[i][j]>max) { max=matrix[i][j]; h=i;}
if (matrix[i][j]<min) { min=matrix[i][j]; p=i;}
printf("%d\t", matrix[i][j]);
}
printf("\n");
}
for (j=0; j<9; j++)
{
    zub=matrix[h][j];
    matrix[h][j]=matrix[p][j];
    matrix[p][j]=z;
}
printf("\n");
for (i=0; i<6; i++){
for (j=0; j<9; j++){
   printf("%d\t", matrix[i][j]); 
}
printf("\n");
}


    return 0;
}
