{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
#include <string.h>\
struct student \
\{\
            int id;\
            char name[20];\
            float percentage;\
\};\
int main() \
\{\
            struct student record;\
            record.id=1;\
            strcpy(record.name, "Raju");\
            record.percentage = 86.5;\
            func(record);\
            return 0;\
\}\
void func(struct student record)\
\{\
            printf(" Id is: %d \\n", record.id);\
            printf("Name is: %s \\n", record.name);\
            printf("Percentage is: %f \\n", record.percentage);\
\}}