#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buff[255]="",d;
    char * pch;
    int i,j=0;
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("input.txt", "r+");
    fp2 = fopen("output.txt", "w+");
    while(!feof(fp1)){
    fgets(buff, 255, (FILE*)fp1);
    pch = strtok (buff," \n");
    while (pch != NULL){
          if(strcmp(pch,".-"    )==0){fprintf(fp2,"A");}else
          if(strcmp(pch,"-..."  )==0){fprintf(fp2,"B");}else
          if(strcmp(pch,"-.-."  )==0){fprintf(fp2,"C");}else
          if(strcmp(pch,"-.."   )==0){fprintf(fp2,"D");}else
          if(strcmp(pch,"."     )==0){fprintf(fp2,"E");}else
          if(strcmp(pch,"..-."  )==0){fprintf(fp2,"F");}else
          if(strcmp(pch,"--."   )==0){fprintf(fp2,"G");}else
          if(strcmp(pch,"...."  )==0){fprintf(fp2,"H");}else
          if(strcmp(pch,".."    )==0){fprintf(fp2,"I");}else
          if(strcmp(pch,".----" )==0){fprintf(fp2,"J");}else
          if(strcmp(pch,"-.-"   )==0){fprintf(fp2,"K");}else
          if(strcmp(pch,".-.."  )==0){fprintf(fp2,"L");}else
          if(strcmp(pch,"--"    )==0){fprintf(fp2,"M");}else
          if(strcmp(pch,"-."    )==0){fprintf(fp2,"N");}else
          if(strcmp(pch,"---"   )==0){fprintf(fp2,"O");}else
          if(strcmp(pch,".--."  )==0){fprintf(fp2,"P");}else
          if(strcmp(pch,"--.-"  )==0){fprintf(fp2,"Q");}else
          if(strcmp(pch,".-."   )==0){fprintf(fp2,"R");}else
          if(strcmp(pch,"..."   )==0){fprintf(fp2,"S");}else
          if(strcmp(pch,"-"     )==0){fprintf(fp2,"T");}else
          if(strcmp(pch,"..-"   )==0){fprintf(fp2,"U");}else
          if(strcmp(pch,"...-"  )==0){fprintf(fp2,"V");}else
          if(strcmp(pch,".--"   )==0){fprintf(fp2,"W");}else
          if(strcmp(pch,"-..-"  )==0){fprintf(fp2,"X");}else
          if(strcmp(pch,"-.--"  )==0){fprintf(fp2,"Y");}else
          if(strcmp(pch,"--.."  )==0){fprintf(fp2,"Z");}
          pch = strtok (NULL, " \n");
    }
    fprintf(fp2," ");
    }
    fclose(fp1);
    fclose(fp2);
  return 0;
}
