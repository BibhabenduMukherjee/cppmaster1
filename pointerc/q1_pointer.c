#include <stdio.h>

int main()
{
	int a[4] = {10,20,30,40};

	int *p1[4] = {a,a+1 , a+2, a+3};

	int **p2[2] = {p1 , p1+1};

    int ***p3[2] = {p2,p2+1};

    int ****ptr = p3;

    ptr++; // ++*ptr
	
	
	

	printf("%d" , ****ptr); // 
	return 0;
}

// can we assign int variable to a char pointer


// int x = 10;

// char *p = &x;

// only first 8 bit can acceseble

// print (*p) will give you worng answer

// float *p = &x 

// both possible but some  gurbage 
// value will be printed 


