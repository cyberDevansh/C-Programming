#include <stdio.h>
#include <conio.h>
int main()
{
    // read student name,class, roll no,fathers name,marks
    
    int rollno,marks;
    char name[15],fathersname[15],branch[5];
    printf("input all information :\nNAME:");
    scanf("%s", &name);
    printf("branch:"); 
    scanf("%s", &branch);
    printf("ROLL NUMBER:");
    scanf("%d", &rollno);
    printf("Fathers name:");
    scanf("%s",&fathersname);
    printf("Marks:");
    scanf("%d",&marks);
    printf("%s\n%d\n%d\n%s\n%s",branch,rollno,marks,name,fathersname);
    getch();
    return 0;
}