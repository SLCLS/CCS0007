#include <iostream>
using namespace std;

int main() {
	
	FILE *fp;
	fp=fopen("example.txt","w");
	//mac
	//fp=fopen("//Users//hadjitejuco//Desktop//cpp//sample.txt","w");
	
	//windows
	//fp=fopen("c:\\myfiles\\sample.txt","w");
	//dir -> c:\myfiles\sample.txt
	
	fclose(fp);
	return 0;
}
