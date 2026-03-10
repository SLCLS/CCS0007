#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	FILE *fp;
	int number;
	
	fp=fopen("sample3.txt","r");
	if(!fp){
		cout << "Cannot open file. \n";
		//windows
		//system("pause"); //Press anykey to continue
		exit(1);
	}
	
	cout << "Multiplication table \n";
	while(!feof(fp)){
		int count = 0;
		while(fscanf(fp,"%d",&number)==1){
			printf("%5d",number);
			count++;
			if (count==10){
				break;
			}
		}
		if (count==0){
			break;
		}
		printf ("\n");
	}
	fclose(fp);
	return 0;
	
}
