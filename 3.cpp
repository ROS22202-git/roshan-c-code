#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int data;

struct employee 
{
	int empno;
	char name[30];
	float salary;
	
};
void input (struct employee e[])
{
	printf("Enter the details of employee:\n");
	
	scanf("%d%s%f",&e[data].empno,e[data].name,&e[data].salary);
	data++;
}
void display(struct employee e[])
{
	int i;
	if (data==0)
	printf(" no record ");
	for (i=0;i<data;i++)
	
	{
	
	printf("%d \t %s \t%f",e[i].empno,e[i].name,e[i].salary);
	printf("\n");
}
	}
	void updatesalary(struct employee e[])
	{
		char identity[20],i;
		printf("enter the name of employee whose salary is to be increased");
		scanf("%s",identity);
			for (i=0;i<data;i++)
	{
			if(e[i].name==identity)
		{
			e[i].salary=e[i].salary+0.1*e[i].salary;
			break;
		}
		
		
		}
	
if (i==data)
{
	printf("record is not found");
}
}

int main()
{
	struct employee e[100];
	int choice;
	while(1)
	{
		system("cls"); 
		printf("Employement management sytem:\n");
		printf("1.ADD employee \n");
		printf("2.display employee\n");
		printf("3.Increase salalry \n");
		printf("4. exit\n");
		printf("enter the choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			    case 1:
			    input(e);
				getch;
				break;
				case 2:
				display(e);
				getch;
			    break;
				case 3:
				updatesalary(e);
				break;
				case 4:
				exit(0);
				defalut:
					printf("invalid input");
			
		}
		
	}
	return 0;
}
