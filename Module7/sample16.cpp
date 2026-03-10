//write content to a file
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	ofstream fout;
	fout.open("sample6.txt");
	fout << "Hadji Tejuco\n";
	fout << "CS\n";
	fout << "12345";
	fout.close();
}
