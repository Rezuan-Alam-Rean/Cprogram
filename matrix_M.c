#include <stdio.h>

int main(){

int a[20][20], b[20][20], product[20][20];
int arows , acols ,brows, bcols;
int i, j, k ;
int sum = 0 ;


printf("Enter the rows and columns of first matrix a :  \n ");


scanf("%d %d", &arows, &acols);


printf("Enter the rows and columns of secound matrix b :  \n ");


scanf("%d %d", &brows, &bcols);



while(acols != brows)
{

    printf("acols need to equal to brows");

    printf("Enter the rows and columns of first matrix a :  \n ");


    scanf("%d %d", &arows, &acols);


    printf("Enter the rows and columns of secound matrix b :  \n ");


    scanf("%d %d", &brows, &bcols);

    printf("acols need to equal to brows");


}


printf("Enter the element of matrix a : \n ");


for(i = 0 ; i < arows ; i++)
{

    for(j = 0 ; j < acols ; j++)
    {
       scanf("%d", &a[i][j]);
    }
}




printf("Enter the element of matrix b \n ");


for(i = 0 ; i < brows ; i++)
{

    for(j = 0 ; j < bcols ; j++)
    {
       scanf("%d", &b[i][j]);
    }
}


printf("matrix a \n");


for(i = 0 ; i < arows ; i++)
{

    for(j = 0 ; j < acols ; j++)
    {
       printf("%d ", a[i][j]);
    }
     printf("\n");
}



printf("\n matrix b \n");


for(i = 0 ; i < brows ; i++)
{

    for(j = 0 ; j < bcols ; j++)
    {
       printf("%d ", b[i][j]);
    }

     printf("\n");
}


printf("\n");

for(i=0; i< arows ; i++)

{
    for(j=0; j < bcols ; j++)

    {
        for(k = 0 ; k < brows ; k++)

        {
            sum += a[i][k] * b[k][j];
        }

        product[i][j]=sum;
        sum=0 ;
    }
}

printf("\n");

for(i=0; i< arows ; i++)

{
    for(j=0; j < bcols ; j++)

    {


        printf("%d ", product[i][j]);
    }

    printf("\n");
}



return 0 ;




}
