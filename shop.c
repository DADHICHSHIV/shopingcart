#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int inventry();
void shampo();
void soap();
void brush();
void jel();
void showProduct();
//void addProduct();
//void showCart();
//void checkOut();
void removeProduct();

int nos=0,nosoap=0,nob=0,noj=0,count=0,amount=0;

int main()
{
    while (1)
    {
        switch (inventry())
        {
        case 1:
            shampo();
            break;
        case 2:
            soap();
            break;
        case 3:
            brush();
            break;
        case 4:
            jel();
            break;
        case 5:
            showProduct();
            break;
        case 6:
            removeProduct();
            break;
        case 7:
            exit(0);
            break;

        default:
            printf("\ninvalid choice: ");
            break;
        }
    }
}
int inventry()
{
    
    char *product[4][13] = {//{"product ID", "Name", "price", "Quantity"},
                            {"1", "shampo", "30", "100"},
                            {"2", "soap", "40", "100"},
                            {"3", "brush", "50", "100"},
                            {"4", "jel", "60", "100"}};

    printf("\tproduct ID\tName\t\tprice\t\tquantity\n");

    for (int i = 0; i < 4; i++)
    {
        for (char j = 0; j < 4; j++)
        {

            printf("\t%s\t", product[i][j]);
        }
        printf("\n");
    }printf("\t5\t\tshowProduct\n");
    printf("\t6\t\tremoveProduct\n");
    printf("\t7\t\texit\n");
    printf("\n\n");

    int n;

    printf("enter product id: ");
    scanf("%d", &n);
    n = n - 1;
    return (n);
}

void removeProduct()
{
    nos = 0;
    nosoap = 0;
    nob = 0;
    noj = 0;
    count = 0;
    amount = 0;
}
void showProduct()
{
    printf("\nnumber of shampo: %d", nos);
    printf("\nnumber of soap: %d", nosoap);
    printf("\nnuber of brush: %d", nob);
    printf("\nnumber of jel: %d", noj);
    printf("\ntotal product: %d", count);
    printf("\ntotal amount: %d", amount);
}

void shampo()
{
    printf("added in cart\n");
    nos++;
    amount = amount + 30;
    count++;
}

void soap()
{
    printf("added in cart\n");
    nosoap++;
    amount = amount + 40;
    count++;
}

void brush()
{
    printf("added in cart\n");
    nob++;
    amount = amount + 50;
    count++;
}

void jel()
{
    printf("added in cart\n");
    noj++;
    amount = amount + 60;
    count++;
}