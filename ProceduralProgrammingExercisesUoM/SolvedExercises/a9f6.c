#include <stdio.h>
#include "genlib.h"
#include "simpio.h"
#define SALESMEN 4
#define PRODUCTS 5

//Function declaration
void calculateSales(int S, int P, int salesTable[S][P], int price[], int sp[]);
void calculateProductSales(int S, int P,  int salesTable[S][P], int prods[]);
void maxArray(int size, int table[], int *max ,int *pos);
void printArray(int S, int table[]);



int main()
{
    int sales[SALESMEN][PRODUCTS]={{10,4,5,6,7},
                                   {7,0,12,1,3},
                                   {4,19,5,0,8},
                                   {3,2,1,5,6}};

    int price[]={250,150,320,210,920};
    int salesperson[SALESMEN];
    int productSales[PRODUCTS];
    int income, bestsalesman, maxprod, bestprod;

    calculateSales(SALESMEN, PRODUCTS, sales, price, salesperson);
    calculateProductSales(SALESMEN, PRODUCTS, sales, productSales);
    maxArray(SALESMEN, salesperson, &income, &bestsalesman);
    maxArray(PRODUCTS, productSales, &maxprod, &bestprod);


    //Output
    printf("SalesMan-Sales\n");
    printArray(SALESMEN, salesperson);
    printf("Best SalesMan was %d with %d sales\n", bestsalesman, income);
    printf("Product-Items\n");
    printArray(PRODUCTS, productSales);
    printf("Best product was %d with %d items\n", bestprod, maxprod);


    return 0;
}

//Function definition

void calculateSales(int S, int P, int salesTable[S][P], int price[], int sp[])
{
    int i,j;

    for(i=0; i<S; i++)
    {
        sp[i]=0;
        for(j=0; j<P; j++)
        {
            sp[i]+= salesTable[i][j]*price[j];
        }
    }
}


void calculateProductSales(int S, int P,  int salesTable[S][P], int prods[])
{

       int i,j;

       for(i=0; i<P; i++)
       {
           prods[i]=0;
           for(j=0; j<S; j++)
           {
               prods[i]+= salesTable[j][i];
           }
       }
}


void maxArray(int size, int table[], int *max ,int *pos)
{
    int i;

    *max=table[0];
    *pos=0;

    for(i=1; i<size; i++)
    {
        if(table[i]> *max)
        {
            *max=table[i];
            *pos=i;
        }
    }
}


void printArray(int S, int table[])
{

    int i;

    for(i=0; i< S; i++)
    {
        printf("   %d     %d\n", i, table[i]);
    }
}
