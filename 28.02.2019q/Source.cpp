#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<locale.h>

using namespace std;

char* my_strchr(char *s1, char *s2)
{

	while (*s1++ != '\0')
	{
		char *p1 = s1;
		char *p2 = s2;

		p1 = s1;

		if (*p1 == *p2)
		{
			return p1;

		}

	}

}

char* my_strstr(char* s1, char* s2)
{
	char *p1 = s1;
	char *p2 = s2;
	int flag = 0;
	int k = 0;

	while (*s1++ != '\0')
	{

		p1 = s1;
		p2 = s2;
		if (*p1 == *p2)
		{
			for (size_t i = 1; i < strlen(s2); i++)
			{
				if (s1[i] == s2[i])
				{
					k++;
				}
				if (k == (strlen(s2) - 1))
				{
					return p1;
				}

			}

		}

	}
	return 0;
}

void WithoutO(char *&a)
{
	char *b;
	b = a;
	int k = 0;
	for (size_t i = 0; i < strlen(a); i++)
	{
		if (a[i] == 'o' || a[i] == 'O')
		{
			continue;
		}
		k++;
	}

	char *tmp = new char[k];
	k = 0;

	for (size_t i = 0; i < strlen(tmp); i++)
	{

		if (a[i] == 'o' || a[i] == 'O')
		{
			continue;

		}
		k++;
		tmp[k] = a[i];
	}



	b = new char[k];

	b = tmp;

	cout << b << endl;
}

int main()
{
	char str[50] = " Hello,World!";
	char str2[100];
	char *p;

	cin.getline(str, 50);//Заполнение строки через монитор

	p = str;

	WithoutO(p);


	//cout << p << endl;

	system("pause");
}


///strlwr(str);//	//strupr(str);//	strcmp(str);//	strncmp(str, 2);

//strcpy_s/*Перезапись строки*/(str, "125");
//cout << atoi(str) * 2 << endl;//////Alfa to integer Меняет строку в число 

//p = my_strstr(str,str2);

//cout << strlen(str)/*Количество символов в строке*/ << endl;