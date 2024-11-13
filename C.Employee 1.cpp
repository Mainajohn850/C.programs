//structures
#include <stdio.h>
#include <string.h>

struct employee {
  char name[25];
  int id;
  char department[20];
  float salary;
  char email[50];
};
int main(){
  
  struct employee employee1;
  employee1.id = 12345;
  employee1.salary = 55000.50;
  strcpy(employee1.name,"john Doe");
  strcpy(employee1.department,"Human resourse");
  strcpy(employee1.email,"johndoe@company.com");
  
  printf("id:%d\n",employee1.id);
  printf("salary: %2f\n",employee1.salary);
  printf("nama:%s\n",employee1.name);
  printf("department:%s\n",employee1.department);
  printf("email:s\n",employee1.email);
  
  
  return 0;
}
  
  
  

  
  


