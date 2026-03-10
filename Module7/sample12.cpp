#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	FILE *fp;
	int id;
	char name[20];
	float price;

	fp=fopen("sample5.txt","w");
	if(!fp){
		cout << "Cannot open file. \n";
		//windows
		//system("pause"); //Press anykey to continue
		exit(1);
	}
	
	cout << "Enter ID: ";
	cin >> id; //%d
	cout << "Enter Name: ";
	cin >> name; //%s
	cout << "Enter Price: ";
	cin >> price; //%f
	
	fprintf(fp, "%d %s %.2f",id,name,price);
	
	fclose(fp);
	return 0;
	
}
