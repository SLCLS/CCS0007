//write a string 
#include <iostream>
using namespace std;

int main() {
	FILE *fp;
	fp=fopen("sample2.txt","w");
	if(!fp){
		cout << "Cannot open file. \n";
		//windows
		//system("pause"); //Press anykey to continue
		exit(1);
	}
	//write a string
	fputs("Sample String 1\n",fp);
	fputs("Sample String 2",fp);
	
	fclose(fp);
	return 0; 
}
