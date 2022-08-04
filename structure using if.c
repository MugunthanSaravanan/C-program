{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
#include <string.h>\
struct population\{\
    char gender[100];\
    char men[100];\
    char women[100];\
    char name[100];\
    int men_pop;\
    int women_pop;\
    int tot_pop;\
\};\
\
int main()\
\{\
    struct population s1;\
    printf("Enter Your name : ");\
    gets(s1.name);\
    printf("Enter Your Gender :");\
    gets(s1.gender);\
    printf("Enter Men Field :");\
    gets(s1.men);\
    printf("Enter Women Field :");\
    gets(s1.women);\
    printf("Enter Man Population :");\
    scanf("%d",&s1.men_pop);\
    printf("Enter Woman Population :");\
    scanf("%d",&s1.women_pop);\
    s1.tot_pop=s1.men_pop+s1.women_pop; \
    printf("\\n==================================================");\
    printf("\\nName    : %s",s1.name);\
    printf("\\nGender : %s",s1.gender);\
    printf("\\nMen Field :%s",s1.men);\
    printf("\\nWomen Field  :%s",s1.women);\
    printf("\\nTotal Population :%d",s1.men_pop);\
    printf("\\nTotal Population :%d",s1.women_pop);\
    printf("\\nTotal Population :%d",s1.tot_pop);\
    printf("\\n==================================================");\
    return 0;\
\}}