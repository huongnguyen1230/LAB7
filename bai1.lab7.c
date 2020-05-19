#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ASM, written, practice;
	printf ("nhap diem ASM\n");
	scanf ("%d", &ASM);
	printf ("nhap diem written\n");
	scanf ("%d", &written);
	printf ("nhap diem  practice\n");
	scanf ("%d", &practice);
	
	if (ASM>=4 && ASM<=100)
	 printf ("pass\n",ASM);
	 	else if (ASM <4)
	 	 printf ("not pass\n", ASM);
	if (written>=40 && written <=100)
	  printf ("pass\n", written);
	  	else if (written <40)
	 	 printf ("not pass\n", written);
	if (practice>=6 && practice<=15 )
	  printf ("pass\n", practice);
	  	else if (practice<6)
	 	 printf ("not pass\n", practice);
	 
	return 0;
}
