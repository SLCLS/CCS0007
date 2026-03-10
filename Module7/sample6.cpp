#include <iostream>
using namespace std;

int main() {
	FILE *fp;
	fp =fopen("sample.txt","r");
	int c;
	if (fp) {
		while((c=getc(fp))!=EOF)
			putchar(c);
	}
	fclose(fp);
	return 0;
}
