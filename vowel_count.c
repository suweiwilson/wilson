#include<stdio.h>

int main(void)
{
 char a;
 int b=0,i;
 FILE *c;
 c=fopen("MP0_input.txt","r");
 for(i=1;i<=1000000;i++)
 {
  fscanf(c,"%c",&a);
  if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
  {
   b++;
  }
 }
 fclose(c);
 c=fopen("MP0_output.txt","w");
 fprintf(c,"%d",b);
 fclose(c);
 return 0;
} 
//從檔案MP0_input.txt讀出裡面的母音數並將結果放到MP0_output.txt
