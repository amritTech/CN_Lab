#include<stdio.h>
#include<string.h>
#define N strlen(g)

char t[28],cs[28],g[30], data[28];
int a,e,c;
void exor()
{
 for(c = 1;c < N; c++)
 cs[c] = (( cs[c] == g[c])?'0':'1');
}
void crc()
{
 for(e=0;e<N;e++) cs[e]=t[e];
 do{
    if(cs[0]=='1') exor();
    for(c=0;c<N-1;c++)
        cs[c]=cs[c+1];
    cs[c]=t[e++];
    }
 while(e<=a+N-1);
}

int main()
{
 printf("\nEnter code word data: ");
 scanf("%s",t);
 printf("\nEnter Generating polynomial in binary: ");
 scanf("%s",g);
 a=strlen(t);

 crc();
 int len = strlen(cs);

 if(len==0){
     for(e=0;e<a-(N-1);e++) data[e] = t[e];
     printf("\n---");
     printf("\nFinal decoded data is : %s",data);
     printf("\n---\n\n");
 }
 else{
    printf("\n---");
    printf("\nInvalid code word detected");
    printf("\n---\n\n");
 }
 return 0;
}
