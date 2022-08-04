{\rtf1\ansi\ansicpg1252\cocoartf2636
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
int main(void)\
\{\
   int age;\
    printf("Enter your age :");\
    scanf("%d",&age);\
    if (age>=18)\
        printf("you are eligible to vote");\
    else\
        printf("you are not eligible");\
        printf("You would be able to caste your vote after %d year.\\n",18-age);\
\}}