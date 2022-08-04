{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<stdio.h>\
int main()\
\{\
    int n,i;\
    int t1=0;int t2=1;\
    int nexterm=t1+t2;\
    printf("Enter the no of terms:");\
    scanf("%d",&n);\
    printf("Fibonacci series is: %d,%d",t1,t2);\
    for(i=3;i<=n;++i)\{\
        printf("%d",nexterm);\
        t1=t2;\
        t2=nexterm;\
        nexterm=t1+t2;\
    \}\
    return 0;\
\}}