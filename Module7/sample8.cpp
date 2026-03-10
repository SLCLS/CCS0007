#include <iostream>
using namespace std;
int main() {
	FILE *fp;
	char buffer[1000];
	fp=fopen("sample2.txt","r");
	if (!fp) {
		cout << "Cannot open file\n";
		exit(1);
	}
	
	while(fgets(buffer,1000,fp)!=NULL)
		cout << buffer;
	
	fclose(fp);
	return 0;
}
