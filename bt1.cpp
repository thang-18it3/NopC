#include<stdio.h>
#include<math.h>
#include<iostream>
void Init(int B[10],int n){
	printf("nhap cac phan tu cua mang: \n");
	for (int i=0; i<n; i++){
		scanf("%d",&B[i]);
	}
} 
void Display(int B[10],int n){
	for(int i=0;i<n;i++){
			printf("\n phan tu thu %d la %d",i,B[i]);
	}
}
double Average(int B[10], int n){
	double TongTB=0;
	for(int i=0;i<n;i++)
		TongTB=TongTB+B[i];
	return TongTB/n;
}
void Dec(int B[10],int n){
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			if (B[i]>B[j]){
				int tam=B[i];
				B[i]=B[j];
				B[j]=tam;
			}
		}
	printf("\n mang da sap xep la:");
	for(int k=0;k<n;k++){
		printf("\n phan tu thu %d la: %d",k,B[k]);
	}
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int B[n];
	Init(B,n);
	Display(B,n);
	printf("\n trung binh cong cac phan tu trong mang la: %lf",Average(B,n));
	Dec(B,n);
}
