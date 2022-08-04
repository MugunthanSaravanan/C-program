{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
int main() \{\
    int num, originalNum, remainder, result = 0;\
    printf("Enter a three-digit integer: ");\
    scanf("%d", &num);\
    originalNum = num;\
\
    while (originalNum != 0) \{\
       // remainder contains the last digit\
        remainder = originalNum % 10;\
        \
       result += remainder * remainder * remainder;\
        \
       // removing last digit from the orignal number\
       originalNum /= 10;\
    \}\
\
    if (result == num)\{\
        printf("%d is an Armstrong number.", num);\
    \}\
    else\
        printf("%d is not an Armstrong number.", num);\
\
    return 0;\
\}}