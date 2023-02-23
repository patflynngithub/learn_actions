#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
   const string succeed = "succeed";
   const string fail    = "fail";
   const int SUCCEED    = 0;
   const int FAIL       = 1;

   if (argc != 2) {
     cout << "Need one argument: main succeed   or   main fail\n";
     return FAIL;
   }

   string argument(argv[1]);

   if (argument == succeed) {
      FILE * fp;

      fp = fopen ("ford_fortran_doc/file.txt", "a");
      fprintf(fp, "%lu\n", (unsigned long)time(NULL)); 
      fclose(fp);
      
      cout << "succeed\n";
      return SUCCEED;
   } else {
      cout << "failed\n";
      return FAIL;
   }
}

