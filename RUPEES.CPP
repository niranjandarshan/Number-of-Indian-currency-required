#include<stdio.h>
#include<conio.h>
void main(){
	int rupees,i,sum=0,m,n;
	clrscr();
	int note[]={2000,500,200,100,50,20,10,5,2,1};

	printf("\n Enter the amount:-");
	scanf("%d", &rupees);
	m=rupees;

	for(i=0;i<10;i++){

		n=m/note[i];
		sum=sum+n;
		m=m%note[i];

	}
printf("\n Total Notes required :- %d",sum);
	getch();
}
