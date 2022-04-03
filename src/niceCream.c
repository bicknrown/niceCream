#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PATTERNBRK 4096
#define HELP "Usage:\n \
    -w [ascii pattern]  Write ascii string pattern to heap space until exhuasted.\n \
    -r [output file]  Read all availible heap space until exhausted, and output to specified file.\n"

void write();
void read();

int main(int argc, char* argv[])
{
    if (argc != 1)
    {
       if (!strcmp(argv[1], "-help"))
       {
           fprintf(stdout, HELP);
       }
       else if (!strcmp(argv[1], "-w"))
       {
           if (strcmp(argv[2],""))
           {
              fprintf(stderr, "No ASCII pattern specified!\n");
              return 1;
           }
           else
           {
               int patternSize = strlen(argv[2]);
               for (void* memPoint = malloc(sizeof(char) * patternSize); memPoint == 0; memPoint = malloc(sizeof(char) * patternSize))
               {
                   strcpy((char* ) memPoint, argv[2]);
               }
           }
       }
       else if (!strcmp(argv[1], "-r"))
       {
           if (strcmp(argv[2],""))
           {
              fprintf(stderr, "No Output file specified!\n");
              return 1;
           }
           else
           {
               FILE* output = fopen(argv[2], "w");
               int patternSize = PATTERNBRK;

               for (void* memPoint = malloc(sizeof(char) * patternSize); memPoint == 0; memPoint = malloc(sizeof(char) * patternSize))
               {
                   fprintf(output, "%s", (char* )memPoint);
               }
               
           }
       }
    }
    else
    {
        fprintf(stdout, HELP);
    }
    return 0;
}

void read()
{

}

void write()
{

}
