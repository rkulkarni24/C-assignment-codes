#include <stdio.h>
#include <string.h>

struct Employee {
 char name[50];
 char designaion[50];
 char gender[10];
 char doj[20]; 
 float salary;
 };
 
 int main(){
 struct Employee e[50];
 int n, i;
 int male = 0, female = 0;
 
 printf("Enter number of employees: ");
 scanf("%d", &n);
 
 for(i = 0; i<n; i++) {
 printf("Enter details of employee %d:\n", i+1);
 
 printf("Name: ");
 scanf("%s", e[i].name);
 
 printf("Designaion: ");
 scanf("%s", e[i].designaion);
 
 printf("Gender: ");
 scanf("%s", e[i].gender);
 
 printf("Date of joining: ");
 scanf("%s", e[i].doj);
 
 printf("Salary: ");
 scanf("%f", &e[i].salary);
 }
 
 printf("\nTotal number of employees %d\n", n);
 
 for(i=0; i<n; i++) {
 if(strcmp(e[i].gender, "Male") == 0)
 male++;
 else
 female++;
 }
 
 printf("Male employees = %d\n", male);
 printf("Female employees = %d\n", female);
 
 printf("\nEmployees with salary more than 10000:\n");
 for(i=0; i<n; i++) {
 if(e[i].salary > 10000) {
 printf("%s\n", e[i].name);
 }
 }
 
 return 0;
 }
