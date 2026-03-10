//fscanf -> data 
//int = d
//float = %f
//string = %s
/*
ID 102
Name: Apple
Price: 10.26
*/
#include <iostream>
using namespace std;
int main() {
	FILE *fp;
	fp=fopen("sample4.txt","r");
	if(!fp){
		cout << "Cannot open file. \n";
		//windows
		//system("pause"); //Press anykey to continue
		exit(1);
	}
	
	int id;
	char name[20];
	float price;
	fscanf(fp,"%d%s%f",&id,&name,&price);
	cout << "ID " << id <<endl;
	cout << "Name: " << name << endl;
	cout << "Price: " <<price<<endl;
	
	fclose(fp);
	return 0;
}
