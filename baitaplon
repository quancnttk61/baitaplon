#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

//NOTE: struct employee
struct Employee {
    char name[30];
    char province[30];
    int year;
    char b[30];
};
void enter(Employee *employee);// NOTE: h�m nh?p 1 nh�n vi�n
void print(Employee *employee); // NOTE: h�m xu?t 1 nh�n vi�n
void enter(Employee *&employee, int &amount);// NOTE: nh?p danh s�ch nh�n vi�n
void print(Employee *employee, int amount);// NOTE:xu?t danh s�ch nh�n vi�n
void arrange(Employee*employee,int amount);
void count(Employee *employee, int amount);
void menu(Employee *employee,int amount);
void outprintf(Employee *employee,int amount,FILE *f);
// NOTE: main
int main(){
    Employee *employee;
    int amount;
    employee = (Employee*)malloc(amount*sizeof(Employee));
    enter (employee,amount);
    menu(employee,amount);
    if(employee !=NULL){
    free(employee);
    }

    return 0;
}
void enter(Employee *employee){
    fflush (stdin);
    printf("Name of employee: ");
    gets(employee->name);
    printf("Province of employee: ");
    gets(employee->province);
    printf("Year of birth of employee: ");
    scanf("%d",&employee->year);
}
void print(Employee *employee){
    printf("Name of employee %s\n",employee->name);
    printf("Province of employee %s\n",employee->province);
    printf("Year of birth of employee %d\n",employee->year);
}
void enter(Employee *&employee, int &amount){
    // NOTE: nh?p s? lu?ng
    printf("Nhap vao so luong nhan vien:");
    scanf("%d",&amount);
    /// NOTE: c?p ph�t b? nh?
    employee = (Employee*)realloc(employee,(amount)*sizeof(Employee));
    // NOTE: nh?p v�o l?n lu?t c�c nh�n vi�n
    for(int i = 0; i < amount;i++){
        printf ("\nNhap thong tin nhan vien thu %d\n",i+1);
        enter(&*(employee+i));
    }
}
void print(Employee *employee, int amount){
    for(int i = 0; i<amount;i++){
        printf("Nhan vien thu %d\n",i+1);
        print(employee+i);
    }
}
void arrange(Employee *emoloyee, int amount){


    Employee temp;
    for(int i = 0; i < amount-1; i++){
        for(int j = i+1; j < amount; j++){
            if(strcmp((emoloyee+i)->province, (emoloyee+j)->province) < 0){
                temp = *(emoloyee+i);
                *(emoloyee+i) = *(emoloyee+j);
                *(emoloyee+j) = temp;
            }
        }
    }
}
void count(Employee *employee, int amount){
	printf("\ntinh thanh \t so lan \n");
	for(int i=0;i<amount;i++){
		int k=1;
		if(strcmp((employee+i)->b,(employee+1)->name )==0){
		strcpy((employee)->b,(employee+2)->name);// gia tri da dc xet
		  for(int j=1+i;j<amount;j++){
			if(strcmp((employee+i)->province,(employee+j)->province)==0){
				k++;
				strcpy((employee+j)->b,(employee+2)->name);
			}
		}
		printf("%s\t\t%d\n", employee->province , k);
	}
  }
}
void searchProvince(Employee *employee, int amount)
{
	system("cls");
	char s[255];
	int k=0;
	printf("\nnhap ten tinh thang can tim:\n");
	fflush(stdin);
	gets(s); 
	for(int i=0;i<amount;i++){
		if(strcmp(s,(employee+i)->province)==0){
			printf("sinh vien thu %d \n %s %s %d\n",i+1,(employee+i)->name,(employee+i)->province, (employee+i)->year);
			k++;
		}
	}
	if(k==0){
		printf("ko tim thay\n");
	}

} 
void outprintf(Employee *employee,int amount,FILE *f){
    f= fopen ("C:\\Users\\Admin\\Desktop\\ghifile","ab");
    if(f==NULL){
    	printf("khong the mo file");
    	exit(0);
	}
	fprintf(f,"ho va name nhan vien la \tque quan nhan vien la \tnam sinh cua nhan vien la \n");
    for(int i=0; i<amount;i++){
    	fprintf(f,"\t%s\t\t%s\t\t%d\n",(employee+i)->name,(employee+i)->province,(employee+i)->year);
	}
     fclose(f);
}
void menu(){
	int chon, flat=1;
	while(flat){
		printf("1. Nhap du lieu cua tung nhan vien.\n");
		printf("2. Sap xep, thong k� va hien thi thong tin chi tiet cua tung nhan vien theo tinh.\n");
		printf("3. Tim nh�n vien theo tinh.\n");
		printf("4. Ghi vao tap tin nhi phan employee.dat.\n");
		printf("5. Thoat.\n");
		printf("Moi ban chon chuc nang: ");
		scanf("%d", &chon);
		switch(chon){
			case 1: 
				struct Employee *employee;
				int amount;
				printf ("Nhap so sinh vien: ");
				scanf ("%d", &amount);
				enter(employee, amount);
				break;
			case 2:
				printf("\nThong tin sinh vien da nhap vao la: \n");
				arrange(employee, amount);
				print(employee, amount);
				count(employee,amount);
				break;
			case 3:
				printf("tim nhan vien theo tinh >>\n");
				searchProvince(employee,amount);
				break;
			case 4: 
			    FILE *f;
				outprintf(employee,amount,f);
				break;
			case 5:
				flat=0;		
		}
	}	
}

