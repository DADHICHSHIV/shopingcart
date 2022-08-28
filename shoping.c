#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define RESET "\x1B[0m"
#define BOLD "\x1B[1m"

struct inventary
{
    int productId;
    char productName[10];
    int productPrice;
    int totalQuantity;
};

int main()
{
    int getId;
    struct inventary *cart;
    struct inventary p[4][4] = {{1, "soap", 30, 100}, {2, "shampoo", 40, 100}, {3, "brush", 50, 100}, {4, "jel", 60, 100}};
    printf("\t%sproduct ID\tName\t\tprice\tquantity%s\n", BOLD, RESET);

    for (int i = 0; i < 4; i++)
    {

        printf("\t%d\t\t%s\t\t%d\t%d\n", p[i].productId, p[i].productName, p[i].productPrice, p[i].totalQuantity);
    }
    printf("enter product id: ");
    scanf("%d", &getId);
    getId = getId - 1;
    for (int i = 0; i < 4; i++)
    {

        if (i == getId)
        {
            printf("\t%d\t\t%s\t\t%d\t%d\n", p[i].productId, p[i].productName, p[i].productPrice, p[i].totalQuantity);
            cart =  p[i].productId, p[i].productName, p[i].productPrice, p[i].totalQuantity;
        }
    }
    
    //cart = (struct inventary *)malloc(getId * sizeof(struct inventary));
   // for(int i=0;i<4;i++){
       // if(i==getId){
       // scanf("\t%d\t\t%s\t\t%d\t%d\n",&cart[i].productId, cart[i].productName, &cart[i].productPrice, &cart[i].totalQuantity);
    //}
    //}
    for(int i=0;i<4;i++){  
        if(i==getId){  
        printf("\t%d\t\t%s\t\t%d\t%d\n", cart[i].productId, cart[i].productName, cart[i].productPrice, cart[i].totalQuantity);
      printf("%s",cart[i]);
    }
    }
}