{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
\
int main() \{\
\
  int n, i, flag = 0;\
  printf("Enter a positive integer: ");\
  scanf("%d", &n);\
\
  // 0 and 1 are not prime numbers\
  // change flag to 1 for non-prime number\
  if (n == 0 || n == 1)\
    flag = 1;\
\
  for (i = 2; i <= n / 2; ++i) \{\
\
    // if n is divisible by i, then n is not prime\
    // change flag to 1 for non-prime number\
    if (n % i == 0) \{\
      flag = 1;\
      break;\
    \}\
  \}\
\
  // flag is 0 for prime numbers\
  if (flag == 0)\
    printf("%d is a prime number.", n);\
  else\
    printf("%d is not a prime number.", n);\
\
  return 0;\
\}}