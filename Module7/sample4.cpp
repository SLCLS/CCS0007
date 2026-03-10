//a-z - fputc
#include <iostream>
using namespace std;
int main() {
	FILE *fp;
	fp=fopen("example.txt","a");
	
	if(!fp){
		cout << "Cannot open file.\n";
		exit(1);
	}
	
	fputc('\n',fp);
	//lowercase letters a-z
	for (int i=97;i<123;i++)
		fputc(i,fp);
	
	fclose(fp);
	return 0;
}
