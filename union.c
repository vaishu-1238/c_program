#include<stdio.h>
union student{
    char usn[20];
    int age;
    float total_marks;
};
int main()
{
    union student s[2];
    float average_marks;
    int i;
    for(i=0;i<2;i++){
     
        printf("Enter the usn of student 1:",i+1);
        scanf("%s",s[i].usn);
        
        printf("Enter the age of student 1:",i+1);
        scanf("%d",&s[i].age);
        
        printf("Enter the total marks of student 1:",i+1);
        scanf("%f",&s[i].total_marks);
    }
    printf("Student details\n");
     for (int i = 0; i < 2; i++) {
        printf("Student %d:\n", i + 1);
        printf("USN: %s\n", s[i].usn);
        printf("Age: %d\n", s[i].age);
        printf("Total Marks: %.2f\n\n", s[i].total_marks);
    }
average_marks = (s[0].total_marks + s[1].total_marks) / 2;
    printf("Average of Total Marks: %.2f\n", average_marks);

    return 0;

}