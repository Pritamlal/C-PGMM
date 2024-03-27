#include<stdio.h>

int main(){
	
	int i,N,arr[100];
	int *ptr=arr;
	
	printf("Enter the number::");
	scanf("%d ",&N);
	
	printf("Enter elements::");
	
	for(i=0;i<N;i++){
		scanf("%d",&ptr[i]);
		ptr++;
	}
	
	ptr=arr;
	
	printf("ARray elements:::::");
	for(i=0;i<N;i++)
	{
		printf("%d ",i[ptr]);
		ptr++;
	}
	return 0;
}
