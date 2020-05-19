#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, menu, gia;
		
		printf ("capuchino(1) gia: 50000\n", gia);
		printf ("capuchino caramel(2) gia: gia 70000\n", gia);
	do {
		printf ("chon do uong\n");
		printf ("vui long nhap do uong\n");
			scanf ("%d", &menu);
			
		switch (menu){
	
		case '1':
			printf ("chon capuchino");
			gia+=50000;
			break;
		case '2':
			printf ("chon capuchino caramel");
			gia+=70000;
			break;
	}
	printf ("nhap so bat ki de tiep tuc chon do\n");
	printf ("nhap 0 de dung chon do va thanh toan\n");
	printf ("\n");
	printf ("ban co muon tiep tuc chon do khong\n");
	scanf ("%d", &x);
		
	} while (x!=0);
	printf ("dat hang thanh cong va so tien thanh toan: %d\n", gia);
	
	return 0;
}
