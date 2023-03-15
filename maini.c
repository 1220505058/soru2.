#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



	int bulEnkucuk(int A[], int n){
	}
	
    int enkucuk; 
    int k;
    enkucuk = A[0];// 1 kez 
    for (k = 0; k < n; k++) //n+1 kez
        if (A[k] < enkucuk) //1*n+1 kez
            enkucuk = A[k]; //1*n+1 kez 
    return enkucuk;//1 kez 
    //T(n)=3n+5


}
