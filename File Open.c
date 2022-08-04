{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 # include <stdio.h>\
# include <string.h>\
int main( )\
\{\
    FILE *filePointer ;\
    char dataToBeWritten[50]= "A Computer Science Portal for Geeks";\
    filePointer = fopen("GfgTest.c", "w") ;\
    if ( filePointer == NULL )\
    \{\
        printf( "GfgTest.c file failed to open." ) ;\
    \}\
    else\
    \{\
        printf("The file is now opened.\\n") ;\
        if ( strlen (dataToBeWritten ) > 0 )\
        \{\
            fputs(dataToBeWritten, filePointer) ;\
            fputs("\\n", filePointer) ;\
        \}\
        fclose(filePointer) ;\
        printf("Data successfully written in file GfgTest.c\\n");\
        printf("The file is now closed.") ;\
    \}\
    return 0;       \
\}}