#include<stdio.h>

struct student{
	int roll_no;
	char name[30];
	int age;
};

int main(){
	int i;
	struct student stud[5];
	
	for(i=0; i<=4; i++){
		stud[i].roll_no = i+1;
		printf("Student no. %d\n", stud[i].roll_no);
		printf("Enter name: \n");
		scanf("%s", stud[i].name);
		printf("Enter age: \n");
		scanf("%d", &stud[i].age);
	}
	
	printf("Info for student with roll no. 2: \n Name: %s\n Age: %d", stud[1].name, stud[1].age);
	return 0;
}
