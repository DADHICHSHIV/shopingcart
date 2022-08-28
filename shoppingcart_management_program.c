#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"

 
int main()
{int n;
    char cart;
    char *product[4][4] = {//{"product ID", "Name", "price", "Quantity"},
                           {"1", "shampo", "30", "100"},
                           {"2", "soap", "40", "100"},
                           {"3", "brush", "50", "100"},
                           {"4", "jel", "60", "100"}};

    int a=sizeof(product);
    int b=sizeof(product[0][0]);
    int c=sizeof(char);

    printf("%d %d  %d\n",a,b,c);
                               printf("\t%sproduct ID\tName\t\tprice\t\tquantity%s\n",BOLD,RESET);


    for (int i = 0; i < 4; i++)
    {
        for (char j = 0; j < 4; j++)
        {

           printf("\t%s\t",product[i][j]);
        }
        printf("\n"); 
    }
        printf("enter product id: ");
        scanf("%d",&n);
        n=n-1;
    for (int i = 0; i < 4; i++)
    {
        for (char j = 0; j < 4; j++)
        {if (i==n)
        {
                     printf("\t%s\t",product[i][j]);
                     cart=product[i][j];
   
        }
        }
        printf("\n"); 
    }printf("%d",cart);

}
