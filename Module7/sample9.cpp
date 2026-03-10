//display multiplication table
#include <iostream>
using namespace std;
int main() {
	
	FILE *fp;
	fp=fopen("sample3.txt","w");
	if(!fp){
		cout << "Cannot open file. \n";
		//windows
		//system("pause"); //Press anykey to continue
		exit(1);
	}
	for (int x=1;x<=10;x++){
		for (int y=1;y<=10;y++)
			//fprintf
			fprintf(fp,"%5d",x*y);
		fputc('\n',fp);
	}
	fclose(fp);
	return 0;
}
