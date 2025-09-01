#include<stdio.h>
struct students{
    char usn[20];
    int age;
    float total_marks;
};
int main()
{
    struct students s[2];
    float average_marks;
    int i;
    for(i=0;i<2;i++){
        printf("Enter student details %d:\n",i+1);
        printf("USN:");
        scanf("%s",s[i].usn);
        printf("AGE:");
        scanf("%d",&s[i].age);
        printf("TOTALMARKS:");
        scanf("%f",&s[i].total_marks);
    }
    printf("\nStudent details\n");
    for(i=0;i<2;i++){
        printf("Student %d:\n",i+1);
        printf("Usn:%s\n",s[i].usn);
        printf("Age:%d\n",s[i].age);
        printf("Totalmarks:%f",s[i].total_marks);
    }
    average_marks=(s[0].total_marks+s[1].total_marks)/2;
    printf("Average marks:%d",average_marks);
    return 0;
}