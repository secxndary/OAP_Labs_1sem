
#include <iostream>
#include <stdio.h>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;


//Variant 3. В строке есть два символа *. Получить все символы между первым и вторым символом *. 

//void main()
//{
//	char str[50];
//	int i, iLast, iFirst, j;
//	cout << "Enter string: ";
//	cin >> str;
//
//	for (i = strlen(str); i >= 0; i--)
//	{
//		if (str[i] == '*') break;
//	}
//	iLast = i;
//
//	for (j = (iLast - 1); j >= 0; j--)
//	{
//		if (str[j] == '*') break;
//	}
//	iFirst = j;
//
//	char s[20];
//	strncpy_s(s, &str[iFirst + 1], iLast - iFirst - 1);
//	s[iLast - iFirst - 1] = 0;
//	cout << "String between '*': " << s;
//}



//Variant 6. 

//void del_char(char in[], int num)
//{
//    for (int i = num; i < strlen(in); i++)
//        in[i] = in[i + 1]; 
//}
//
//void repeat_char(char in[], int num)
//{
//    for (int i = strlen(in) + 1; i > num + 1; i--)
//        in[i] = in[i - 1]; 
//    in[num + 1] = in[num]; 
//}
//
//int main()
//{
//    char string[50];
//    cout << "Enter string: ";
//    cin >> string;
//    for (int i = 0; i < strlen(string); i++)
//    {
//        if (string[i] == '*')
//        {
//            del_char(string, i); 
//            i--;
//        }
//        else {
//            repeat_char(string, i);
//            i++; 
//        }
//    }
//    cout << string;
//    return 0;
//}



//Dop 1. В заданной последовательности слов найти все слова, имеющие заданное окончание.

//int main()
//{
//    char k;
//    int o;
//    setlocale(LC_CTYPE, "Russian");
//    string s;
//    cout << "Write something: " << endl;
//    getline(cin, s);
//    cout << "Окончание: " << endl;
//    cin >> k;
//    o = 0;
//    for (int i = 0; i < s.length(); ++i)
//    {
//        if (s[i] == ' ')
//        {
//            if (s[i - 1] = k) {
//                o++;
//            }
//
//        }
//    }
//    cout << "Совпадает окончание: ";
//
//    cout << o;
//}



//Dop 2. В заданном предложении указать слово, в котором доля гласных (A, E, I, O, U — строчных или прописных) максимальна.

//void main()
//{
//    setlocale(LC_ALL, "ru");
//    int count[10] = { 0,0,0,0,0,0,0,0,0,0 };
//    const int N = 100;
//    char str[N];
//    cout << "Enter string: ";
//    cin.getline(str, N);
//    unsigned int m;
//    m = strlen(str);
//    int k = 0;
//    for (int i = 0; i < m; i++)
//    {
//        if (str[i] == 'a' || str[i] == 'A'
//            || str[i] == 'e' || str[i] == 'E'
//            || str[i] == 'i' || str[i] == 'I'
//            || str[i] == 'o' || str[i] == 'O'
//            || str[i] == 'u' || str[i] == 'U')
//        {
//            count[k]++; // элемент массива
//        }
//        if (str[i] == ' ')
//        {
//            k++; //индекс массива
//        }
//    }
//
//    int max = count[0]; //кол гласных в 1 слове
//    int word = 0;
//    for (int i = 0; i < 10; i++)
//    {
//        if (count[i] > max)
//        {
//            max = count[i];
//            word = i;
//        }
//    }
//    cout << "Максимальное число гласных: " << max << endl;
//    cout << "Слово под номером: " << word + 1 << endl;
//}



//Dop 3. Отредактировать заданное предложение, удаляя из него все слова с нечетными номерами и переворачивая слова с четными номерами. 

void main()
{
    setlocale(LC_ALL, "ru");
    const int N = 100;
    char str[N];
    cout << "Enter string: ";
    cin.getline(str, N);
    unsigned int m;
    m = strlen(str);

    for (int i = m - 1; i >= 0; i--)
    {
        cout << str[i];
        if (str[i] == ' ')
        {
            i--;
            while (str[i] != ' ')
            {
                i--;
            }
        }
    }
}
