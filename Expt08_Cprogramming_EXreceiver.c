#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int i,j;
int main()
{
 char str[100];
 char choice;
 printf("\n.....YOUR OPTIONS....\n");
 printf("\na. Checksum\nb. Bit stuffing\nc. Character count\n");
 printf("\nEnter your choice:");
 scanf("%c",&choice);
 switch(choice)
 {
 //Checksum Calculation - Incomplete
 case 'a':
 {
    int arr[100];
    int sum = 0;
    printf("\nEnter checksum of array: ");
    scanf("%s",arr);
    printf("\nSUM = %d\n",sum);
 }
 break;
 //Bit stuffing
 case 'b':
 {
 int count=0;
 int countHold=0;
 printf("Enter the binary bit stuffed string: ");
 scanf("%s",str);
 int len = strlen(str);
 char strtemp[len];
 for(i=j=0; str[i]; i++)
 {
    if(str[i]=='1') count++;
    else count=0;
    if(count==5) countHold = count;
    if(count==0 && countHold==5){
        j = i+1;
        count=0;
        countHold = 0;
    }
    strtemp[i] = str[j];
    j++;
 }
 //strtemp[len-1]='\0';
 printf("\nBefore Bit stuffing : %s\n", strtemp);
 }
 break;
 //Inserting character count code
 case 'c':
 {
 char arr[100]; int x,y;
 printf("\nENTER THE CHARACTER COUNT FRAME OF THE ARRAY:");
 scanf("%s",arr);
 int len = strlen(arr);
 if(arr[0]-48!=len){
    printf("\n Invalid character count");
    break;
 }
 char resarr[strlen(arr)-1];
 for(i==0; i<strlen(arr); i++){
    resarr[i] = arr[i+1];
 }
 printf("\n Resultant Array = %s\n",resarr);
 }
 break;
 default:
 printf("\nYou entered an invalid choice run program again");
}
 getch();
}

