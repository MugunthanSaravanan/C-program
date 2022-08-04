{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
struct a\{\
    int n;\
    char m[10];\
\};\
int main() \{\
    struct a struc1;\
    struct a struc2;\
    struc1.n=8;\
    struc1.m[10]="a";\
    printf("Number :%d\\n",struc1.n);\
    printf("Name :%c\\n",struc1.m);\
    struc2.n=9;\
    struc2.m[10]="b";\
    printf("Number :%d\\n",struc2.n);\
    printf("Name :%c\\n",struc2.m);\
    return 0;\
\}}