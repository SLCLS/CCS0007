#include <cstdio>
#include <cstring>
int main() {
    FILE *fp;
    fp = fopen("sample.txt", "w");
    char text[] = "Hello World!";
    if(fp) {
        for(int i=0; i<strlen(text); i++) 
            putc(text[i], fp);
    }
    fclose(fp);
    return 0;
}
