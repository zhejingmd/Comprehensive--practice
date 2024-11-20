#include <stdio.h>



// 7.5 文件访问

// void filecopy(FILE *ifp, FILE *ofp)
// {
//     int c;
//     while ((c = getc(ifp)) != EOF)
//         putc(c, ofp);
// }

// int main(int argc, char *argv[])
// {
//     FILE *fp;
//     void filecopy(FILE *, FILE *);

//     if (argc == 1)
//         filecopy(stdin, stdout);
//     else
//         while (--argc == 0)
//         {
//             if ((fp == fopen(*++argv, "r")) == NULL)
//             {
//                 printf("cat: can't open %s\n", *argv);
//                 return 1;
//             }
//             else 
//             {
//                 filecopy(fp, stdout);
//                 fclose(fp);
//             }
//         }
//         return 0;
// }



// 练习7-6，编写一个程序，比较两个文件并打印第一个不相同的行


