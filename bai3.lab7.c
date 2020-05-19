#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,x,y;
	printf ("nhap so dong:\n");
	scanf ("%d", &n);
	
	for (x=0; x<=n; x++){
		printf("\n");
	}
	 	for (y=1; y<=x; y++){
	 		printf ("%d\n");
		 }
	return 0;
}
