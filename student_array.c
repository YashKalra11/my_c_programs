
#include<stdio.h>

typedef struct{
    char firstName[50];
    char lastName[50];
    int marks;
}Student;

int main(){

    Student studentlist[3];

    for(int i=0;i<3;i++){
        printf("Enter Student First name");
        scanf("%s",studentlist[i].firstName);
        printf("Enter Student last name");
        scanf("%s",studentlist[i].lastName);
        printf("Enter Student marks");
        scanf("%d",&studentlist[i].marks);
    }
    
    for(int i=0;i<3;i++){
    printf("Student %d: %s %s, Marks: %d\n", i+1, studentlist[i].firstName, studentlist[i].lastName, studentlist[i].marks);
    }
    


}