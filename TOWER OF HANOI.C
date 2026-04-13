#include <stdio.h>
void toh(int diskscount,char S,char D,char T){
    if (diskscount == 1){
         printf("\nMove disk %d from %c to %c",diskscount,S,D);
        return;
    }
    toh(diskscount-1,S,T,D);
     printf("\nMove disk %d from %c to %c",diskscount,S,D);
    toh(diskscount-1,T,D,S);
}
int main(){
    int n;
   char S,T,D;
    printf("enter no.of disks : \n");
    scanf("%d",&n);
    toh(n,'S','D','T');
return 0;
}
