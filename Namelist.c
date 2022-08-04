#include <stdio.h>
#include<string.h>
struct student{
    char name[100];
    char sec[100]; 
    int roll_no;
    int mark1;    
    int mark2;
    int mark3;
    int mark4;
    int mark5;
};
int main() 
{
    struct student s1;
    printf("Enter Your Name :");
    gets(s1.name);
    printf("\nEnter Your Section :");
    gets(s1.sec);
    printf("\nEnter Roll no :");
    scanf("%d",&s1.roll_no);
    printf("\nMark1 :");
    scanf("%d",&s1.mark1);
    printf("Mark2 :");
    scanf("%d",&s1.mark2);
    printf("Mark3 :");
    scanf("%d",&s1.mark3);
    printf("Mark4 :");
    scanf("%d",&s1.mark4);
    printf("Mark5 :");
    scanf("%d",&s1.mark5);
    int total; 
    total=s1.mark1+s1.mark2+s1.mark3+s1.mark4+s1.mark5;
    FILE *fptr;
    fptr=fopen("MarkList.txt","w");
    fprintf(fptr,"Name    :  %s\n",s1.name);
    fprintf(fptr,"Section :  %s\n",s1.sec);
    fprintf(fptr,"Roll no : %d\n",s1.roll_no);
    fprintf(fptr,"Mark 1  : %d\n",s1.mark1);
    fprintf(fptr,"Mark 2  : %d\n",s1.mark2);
    fprintf(fptr,"Mark 3  : %d\n",s1.mark3);
    fprintf(fptr,"Mark 4  : %d\n",s1.mark4);
    fprintf(fptr,"Mark 5  : %d\n",s1.mark5);
    fprintf(fptr,"Total   : %d\n",total);
    fclose(fptr);
    printf("Data successfully written \n");
    printf("Roll NO :%d\n",s1.roll_no);
    printf("Mark1 = %d\n",s1.mark1);
    printf("Mark2 = %d\n",s1.mark2);
    printf("Mark3 = %d\n",s1.mark3);
    printf("Mark4 = %d\n",s1.mark4);
    printf("Mark5 = %d\n",s1.mark5);
    printf("Total = %d\n",total);
    
    return 0;	
}