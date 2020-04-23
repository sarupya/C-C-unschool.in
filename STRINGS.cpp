#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int v = 0, c = 0;
    cout << "Enter a string : ";
    gets(str);
    for (int i = 0; str[i]!='\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            ++v;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                ++c;

    }
    cout << "Number of vowels : " << v;
    cout << "\nNumber of consonants : " << c;
    return 0;
}
