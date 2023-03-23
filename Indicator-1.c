#include<stdio.h>
#include<string.h>
void swap(int *a,int *b){
	int c;
	c =*a;
	*a =*b;
	*b =c;
	printf("After swap A : %d\n",*a);
	printf("After swap B : %d\n",*b);
}
int main(){
	int x,y;
	printf("Enter The A value :");
	scanf("%d",&x);
	printf("Enter The B value :");
	scanf("%d",&y);
	swap(&x,&y);
		
	return 0;
}
