#include<stdio.h>
void main()
{
     for(char i='A' ; i<='C' ; i++)      //char charr='A';
  {                                        //for(int i=1 ; i<=3 ; i++){
  	for(char j='A' ; j<=i ; j++)               //for(int j=1 ; j<=i ; j++){
  	{                                              //printf("%c",charr); } printf("\n"); charr++; }
  		printf("%c",i);
  	}
  	printf("\n");
  }
}

