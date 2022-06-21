#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sodu = 100000000;
int username = 123;
int password = 456;
Login (int username, int password){

		printf ("\nMoi ban nhap username: ");
		scanf ("%d", &username);
		printf ("\nMoi ban nhap password: ");
		scanf ("%d", &password);
	
	if (username != 123 || password != 456){
		printf ("\nBan nhap sai username hoac password");
		return (0);
		}
	else 
		return (1);
	}
Withdraw (int a){
	int sotienrut;
	char luachon;
	printf ("Ban da chon chuc nang rut tien!\n");
		do{
			printf ("\nMoi ban nhap so tien can rut: ");
			scanf ("%d", &sotienrut);
			if (sotienrut <= sodu && sotienrut <= 3000000 && sotienrut%50000 == 0){
				sodu = sodu - sotienrut;
				printf ("\nCay ATM da nhe tien cho ban roi day!!! Moi ban nhan cho!!!");
				printf ("\nSo du tai khoan cua ban hien la: %d\n", sodu);
				}
				else if (sotienrut%50000 !=0){
					printf ("So tien ban nhap phai la boi so cua 50k!\n");
					}
					else if (sotienrut > sodu){
							printf ("So tien giao dich vuot qua so du tai khoan!\n");
						}		 
						else if (sotienrut > 3000000){
							printf ("Giao dich khong thuc hien duoc do so tien vuot 3.000.000!\n");
						}
			printf ("Ban co muon tiep tuc rut tien khong Y/N?: ");
			fflush (stdin);
			scanf ("%c", &luachon);	
		}
		while (luachon == 'Y'|| luachon == 'y');
		
	}
Transfer (int id, int num)	{
	int sodu1 = 0;
	char luachon;
	printf ("Ban da chon chuc nang chuyen tien!\n");
	do {
		printf ("\nMoi ban nhap vao so tai khoan can chuyen: ");
		scanf ("%d", &id);
		printf ("\nMoi ban nhap vao so tien can chuyen: ");
		scanf ("%d", &num);
		sodu = sodu - num;
		sodu1 += num;
		printf ("So du tai khoan hien tai cua ban la: %d\n", sodu);
		
		printf ("Ban co muon tiep tuc chuyen khoan khong Y/N? ");
		fflush (stdin);
		scanf ("%c", &luachon);
	}
	while (luachon == 'Y'|| luachon == 'y');
	
}
Check (int a){
	printf ("Ban da chon chuc nang xem so du tai khoan!\n");
	printf ("So du tai khoan cua ban la: %d\n", sodu);
}

int main(int argc, char *argv[]) {
	int op;
	int id, num;
	char check;
	char user, pass;
		
	if (Login(user, pass) == 1){
		printf ("Chao mung ban da den voi ngan hang VNPT!\n");
		printf ("May ATM cua VNPT gom cac chuc nang sau:\n\n");
		printf ("2. Withdraw (num)\t\t");
		printf ("3. Transfer (id, num)\t\t");
		printf ("4. Check()\n");
	do {
		printf ("\n\nMoi ban lua chon chuc nang tuong ung '2', '3', '4': ");
		scanf ("%d", &op);
		switch (op){
			case 2: 
				Withdraw (num);
				break;
			case 3: 
				Transfer (id, num);
				break;
			case 4: 
				Check (sodu);
				break;
		}
		printf ("Ban co muon lua chon giao dich de thuc hien khong Y/N?:");
		fflush (stdin);
		scanf ("%c", &check);
	}
	while (check == 'Y'|| check == 'y');
	}
	else 
		return 0;
}
