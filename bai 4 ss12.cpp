#include<stdio.h>
#include<stdlib.h>
bool symmetry(int n, int numbers[]){
	for(int i=0;i<n/2;i++){
		if(numbers[i]!=numbers[n-i-1]){
			return false;
		}
	}
	return true;
} 
int main(){
	int n;
	printf("Nhap chi so phan tu cua mang: ");
	scanf("%d",&n);
	int numbers[n];
	for(int i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d",&numbers[i]);
	}
	if(symmetry(n,numbers)){
		printf("Day la mang doi xung");
	}else{
		printf("Day khong la mang doi xung");
	}
	return 0;
}
