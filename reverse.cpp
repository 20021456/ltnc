#include <iostream>
#include <cstring>
using namespace std;
void rFilter(char* s)
{
	char* c = s;
	for (s; *s != '\0';s++)
		if ((*s >= 65 && *s <= 90) || (*s >= 97 && *s <= 122)) continue;
		else *s = '_';
}
int main() {
    char *s;
    s = new char[50];
    cin >> s;
    rFilter(s);
    cout << s;
    system("pause");
}