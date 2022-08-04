{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>  \
#include <string.h>    \
\
struct student\{    \
    int rollno;    \
    char name[10];    \
\};    \
int main()\
\{    \
    int i;    \
    struct student st[5];    \
    printf("Enter Records of 5 students");    \
    for(i=0;i<2;i++)\{    \
    printf("\\nEnter Rollno:");    \
    scanf("%d",&st[i].rollno);    \
    printf("\\nEnter Name:");    \
    scanf("%s",&st[i].name);  \
    printf("\\n")\
\}\
    printf("\\nStudent Information List:");    \
    for(i=0;i<2;i++)\{    \
    printf("\\nRollno:%d, Name:%s",st[i].rollno,st[i].name);    \
\}    \
   return 0;    \
\}    }