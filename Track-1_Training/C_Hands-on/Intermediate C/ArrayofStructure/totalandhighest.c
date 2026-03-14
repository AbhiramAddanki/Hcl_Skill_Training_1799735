#include<stdio.h>
struct employee{
    char name[50];
    int id;
    float salary;
};
int main(){
    int n;
    scanf("%d",&n);
    struct employee employees[n];
    float totalSalary = 0.0;
    struct employee highestSalaryEmployee;
    for(int i=0; i<n; i++){
        scanf("%s %d %f",employees[i].name, &employees[i].id, &employees[i].salary);
        totalSalary += employees[i].salary;
        if(i == 0 || employees[i].salary > highestSalaryEmployee.salary){
            highestSalaryEmployee = employees[i];
        }
    }
    printf("Total Salary: %.2f\n", totalSalary);
    printf("Highest Salary Employee: %s\nID: %d\nSalary: %.2f\n", highestSalaryEmployee.name, highestSalaryEmployee.id, highestSalaryEmployee.salary);
     return 0;
}