//A-Z - fputc
#include <iostream>
using namespace std;

int main() {
	FILE *fp;
	fp=fopen("example.txt","w");
	
	if(!fp){
		cout << "Cannot open file.\n";
		exit(1);
	}
	
	//print A-Z to the file
	//ascii.cl -> check for the values of ASCII
	for (int i=65;i<91;i++)
		fputc(i,fp); //character
	
	fclose(fp);
	return 0;
}
