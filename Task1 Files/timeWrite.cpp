#include <bits/stdc++.h>
using namespace std;

int main()
{
  FILE *fp,*outputfile;
  char var[40];

  fp = popen("date +%s", "r");
  while (fgets(var, sizeof(var), fp) != NULL) 
    {
      printf("%s", var);
    }
  pclose(fp);

  outputfile = fopen("text.txt", "a");
  fprintf(outputfile,"%s\n",var);
  fclose(outputfile);

  return 0;
}