{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
#include<stdlib.h>\
\
int main() \{\
    char name[100];\
    int mark,i,num;\
    printf("Enter number of students :");\
    scanf("%d",&num);\
    FILE*fptr;\
    fptr=(fopen("example.txt","a"));\
    if(fptr==NULL)\{\
        printf("Error !");\
        exit(1);\
    \}\
    for (i=0;i<num;++i)\{\
        printf("For Student %d\\n Enter name",i+1);\
        scanf("%s",&name);\
        printf("Enter mark :");\
        scanf("%d",&mark);\
        fprintf(fptr,"\\n Name :%s\\n Marks :%d\\n",name,mark);\
\}\
    fclose(fptr);\
    return 0;\
\}}