//fscanf -> data 
//int = d
//float = %f
//string = %s
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	FILE *fp;
	int id;
	char name[20];
	float price;
	fp=fopen("sample5.txt","r");
	if(!fp){
		cout << "Cannot open file. \n";
		//windows
		//system("pause"); //Press anykey to continue
		exit(1);
	}
	cout << "Read data from file\n";
	
	while(fscanf(fp,"%d %s %f",&id,name,&price)==3){
		cout << "ID " << id <<endl;
		cout << "Name: " << name << endl;
		cout << "Price: " <<price<<endl;
		cout << "---------\n";
	}
	fclose(fp);
	return 0;
}
