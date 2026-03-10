//reading the file contents

#include <iostream>
using namespace std;
int main() {
	FILE *fp;
	fp = fopen("example.txt","r");
	
	if (!fp){
		cout << "Cannot Open File..\n";
		exit(1);
	}
	
	char c;
	while((c=fgetc(fp))!=EOF)
		cout << c;
	
	fclose(fp);
	//system("pause>0"); //calls for the pause
	return 0;
}
