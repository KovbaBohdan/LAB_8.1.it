#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool Count(const char* str) 
{
    int length = strlen(str);
    for (int i = 0; i < length - 3; ++i) 
    {
        if (str[i] == str[i + 1] && str[i + 1] == str[i + 2] && str[i + 2] == str[i + 3]) 
            return true;
    }
    return false; 
}

char* Change(char* s)
{
    char* t = new char[strlen(s) + 1];
    char* p;
    int pos1 = 0,
        pos2 = 0;
    *t = 0;
    while (p = strchr(s + pos1, s[pos1]))
    {
        int count = 0;
        pos2 = p - s;
        while (s[pos2] == s[pos1] && count < 4)
        {
            ++pos2;
            ++count;
        }
        strncat(t, s + pos1, count);
        if (count == 4)
        {
            strcat(t, "**");
        }
        pos1 = pos2;
    }
    strcat(t, s + pos1);
    strcpy(s, t);
    delete[] t;  // Звільнення пам'яті
    return s;
}

int main() 
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    if (Count(str)) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    cout << "Modified string (param) : " << str << endl;
   
    cout << "Modified string (result): " << Change(str) << endl;

    return 0;
}






