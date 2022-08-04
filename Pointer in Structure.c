{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>  \
struct Employee  \
\{  \
    char name[30];  \
    int id;  \
    int age;  \
    char gender[30];  \
    char city[40];  \
\};  \
struct Employee emp1,*ptr1;  \
int main()  \
\{  \
    ptr1 = &emp1;  \
    printf (" Enter the name of the Employee (emp1): ");  \
    scanf (" %s", &ptr1->name);  \
    printf (" Enter the id of the Employee (emp1): ");  \
    scanf (" %d", &ptr1->id);  \
    printf (" Enter the age of the Employee (emp1): ");  \
    scanf (" %d", &ptr1->age);  \
    printf (" Enter the gender of the Employee (emp1): ");  \
    scanf (" %s", &ptr1->gender);  \
    printf (" Enter the city of the Employee (emp1): ");  \
    scanf (" %s", &ptr1->city);\
    printf("\\n");\
    printf ("\\n Display the Details of the Employee using Structure Pointer");  \
    printf("\\n");\
    printf ("\\n Details of the Employee (emp1) \\n");  \
    printf(" Name: %s\\n", ptr1->name);  \
    printf(" Id: %d\\n", ptr1->id);  \
    printf(" Age: %d\\n", ptr1->age);  \
    printf(" Gender: %s\\n", ptr1->gender);  \
    printf(" City: %s\\n", ptr1->city);  \
    return 0;  \
\}   }