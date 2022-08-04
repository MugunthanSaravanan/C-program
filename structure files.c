#include <stdio.h>
struct student{
    int roll_no;
    char name[30] ;
    char sec[10];
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;
};
int main() 
{
    int total;
    struct student s1;
    printf ("Enter Roll no :");
    scanf("%d",&s1.roll_no);
    printf("\nEnter Name :");
    scanf("%s",&s1.name);
    printf("\nEnter Section : ");
    scanf("%s",&s1.sec);
    printf("\nMark1 : ");
    scanf ("%d", &s1.mark1) ;
    printf("Mark2:");
    scanf("%d",&s1.mark2);
    printf ("Mark3 : ");
    scanf ("%d" , &s1.mark3) ;
    printf ("Mark4 : ");
    scanf ("%d" , &s1.mark4) ;
    printf ("Mark5 : ");
    scanf ("%d" , &s1.mark5) ;
    total=s1.mark1+s1.mark2+s1.mark3+s1.mark4+s1.mark5;
    FILE *fptr;
    fptr=fopen("studentdetails.txt","w");
    fprintf(fptr,"======================Student 1======================\n");
    fprintf(fptr,"Roll No    : %d\n",s1.roll_no);
    fprintf(fptr,"Name       : %s\n",s1.name);
    fprintf(fptr,"Section    : %s\n",s1.sec);
    fprintf(fptr,"Mark1      : %d\n",s1.mark1);
    fprintf(fptr,"Mark2      : %d\n",s1.mark2);
    fprintf(fptr,"Mark3      : %d\n",s1.mark3);
    fprintf(fptr,"Mark4      : %d\n",s1.mark4);
    fprintf(fptr,"Mark5      : %d\n",s1.mark5);
    fprintf(fptr,"Total      : %d\n",total);
    fprintf(fptr,"===================================================");
    fclose(fptr);
    printf("\nRoll no : %d",s1.roll_no);
    printf("\nName    : %s",s1.name);
    printf("\nSection : %s",s1.sec);
    printf("\nMark 1  : %d",s1.mark1);
    printf("\nMark 2  : %d",s1.mark2);
    printf("\nMark 3  : %d",s1.mark3);
    printf("\nMark 4  : %d",s1.mark4);
    printf("\nMark 5  : %d",s1.mark5);
    printf("\nTotal   : %d",total);
}