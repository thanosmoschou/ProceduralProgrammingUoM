/*�� ������ ��������� �� ����� �� �������� ����� ��������� �������� ��� �� ���� ��������� ���� ���������� �, �, C,
�� ���� ��������� ���� ������� ����� ������������� ��� ����� ���� ������ ��� ���������� �� �� ������� ��� ���������� swap(x,y),
 ���� ���� A<B<C. T���� �� ��������� ��� ������������� ����� ��� ���������� �, � ��� C.
 � ��������� swap(int *x, int *y) �� ���������� ��� ����� 2 �������� ���������� x ��� y
 (� ���� ��� x �� ����� ���� ��������� y ��� ��� y ���� x).*/


#include<stdio.h>
#include"genlib.h"
#include"simpio.h"

//func decl
void swap(int *x, int *y);


int main()
{
	int A,B,C;

	printf("Insert A:");
	A=GetInteger();

	printf("Insert B:");
	B=GetInteger();

	printf("Insert C:");
	C=GetInteger();

	if(A>B && A>C)
	{
		swap(&A, &C); //Check the message above about how i want to sort the numbers
	}

	 if(B>C)
	{
		swap(&B, &C);
	}

	 if(A>B)
	{
		swap(&A, &B);
	}

	printf("Your numbers shorted are: %d %d %d\n", A,B,C);
	return 0;
}

//Func defin
void swap(int *x, int *y)
{
	int temp;

	temp= *x;
	*x= *y;
	*y = temp;
}
