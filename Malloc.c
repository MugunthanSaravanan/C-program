{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
#include <stdlib.h>\
\
int main()\
\{\
	int* ptr;\
	int n, i;\
\
	printf("Enter number of elements:");\
	scanf("%d",&n);\
\
	ptr = (int*)malloc(n * sizeof(int));\
\
	if (ptr == NULL) \{\
		printf("Memory not allocated.\\n");\
		exit(0);\
	\}\
	else \{\
	    \
		printf("The elements of the array are: ");\
		for (i = 0; i < n; ++i) \{\
		    	ptr[i] = i + 1;\
			printf("%d, ", ptr[i]);\
		\}\
	\}\
	return 0;\
\}}