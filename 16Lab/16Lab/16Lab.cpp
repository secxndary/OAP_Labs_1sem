#include <iostream>
using namespace std;

//1 основа 3 варик

//
//int FILL_and_SHOW(int** arr, const int length, const int rows) //заполнение и вывод массива
//{
//    int counter = 0, sum = 0, SUM = 0;
//    bool a = false;
//    for (int i = 0; i < rows; i++)
//    {
//        counter = 0;
//        cout << endl;
//        sum = 0;
//        for (int j = 0; j < length; j++)
//        {
//            arr[i][j] = rand() % 19 - 9;
//            if (arr[i][j] >= 0)
//                cout << ' ';
//            cout << arr[i][j] << '|';
//            if (arr[i][j] > 0)
//                counter++;
//            sum += arr[i][j];
//        }
//        if (counter == length && a == false)
//        {
//            SUM = sum;
//            a = true;
//        }
//    }
//    return SUM;
//}
//
//void SHOW_after_CHANGES(int** arr, const int J, const int I, int SUM) //изменение и вывод массива
//{
//    for (int i = 0; i < I; i++)
//    {
//        cout << endl;
//        for (int j = 0; j < J; j++)
//        {
//            if (arr[i][j] + SUM >= 0 && arr[i][j] + SUM < 10)
//                cout << ' ';
//            cout << arr[i][j] + SUM << '|';
//        }
//    }
//}
//
//void main()
//{
//    setlocale(LC_ALL, "ru");
//    int length, rows, SUM; cout << "введите количество столбцов, а потом строк:\n";
//    cin >> length;
//    cin >> rows;
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; i++)
//    {
//        matrix[i] = new int[length];
//    }
//
//    cout << "\nначальная матрица: \n";
//    SUM = FILL_and_SHOW(matrix, length, rows);
//    cout << "\nсумма строчки положительных: " << SUM;
//    cout << "\nконечная матрица: \n";
//
//    SHOW_after_CHANGES(matrix, length, rows, SUM);
//
//
//    for (int i = 0; i < rows; i++) //освобождение памяти
//    {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//}

//2 основа 3 варик

//int f_max(int count, int i...) //функция с несколькими параметрами
//{
//    int max = 0;
//    int* pa = &i;
//    while (count--)
//    {
//        if (*pa > max)
//            max = *pa;
//        pa++;
//    }
//    return max;
//}
//void main()
//{
//    setlocale(LC_ALL, "ru");
//    int i, j, k, l;
//    cout << "введите несколько чисел для сравнения: " << endl;
//    scanf_s("%d %d %d %d", &i, &j, &k, &l);
//    cout << "наибольшее из двух первых чисел:    " << f_max(2, i, j) << endl;
//    cout << "наибольшее из трёх первых чисел:    " << f_max(3, i, j, k) << endl;
//    cout << "наибольшее из четырёх первых чисел: " << f_max(4, i, j, k, l) << endl;
//}

//1 доп 7 варик

//int FILL_and_SHOW(int** arr, const int length, const int rows)
//{
//    int counter = 0, sum = 0, SUM = 0;
//    bool a = false;
//    for (int i = 0; i < rows; i++)
//    {
//        counter = 0;
//        cout << endl;
//        sum = 0;
//        for (int j = 0; j < length; j++)
//        {
//            arr[i][j] = rand() % 19 - 9;
//            if (arr[i][j] >= 0)
//                cout << ' ';
//            cout << arr[i][j] << '|';
//            if (arr[i][j] < 0)
//                counter++;
//            sum += arr[i][j];
//        }
//        if (counter == length && a == false)
//        {
//            SUM = sum;
//            a = true;
//        }
//    }
//    return SUM;
//}
//
//void SHOW_after_CHANGES(int** arr, const int J, const int I, int SUM)
//{
//    for (int i = 0; i < I; i++)
//    {
//        cout << endl;
//        for (int j = 0; j < J; j++)
//        {
//            if (arr[i][j] + SUM > -10)
//                cout << " ";
//            cout << arr[i][j] + SUM << '|';
//        }
//    }
//}
//
//void main()
//{
//    setlocale(LC_ALL, "ru");
//    int length, rows, SUM; cout << "введите количество столбцов, а потом строк:\n";
//    cin >> length;
//    cin >> rows;
//    int** matrix = new int* [rows];
//    for (int i = 0; i < rows; i++)
//    {
//        matrix[i] = new int[length];
//    }
//
//    cout << "начальная матрица: \n";
//    SUM = FILL_and_SHOW(matrix, length, rows);
//    cout << "\nсумма строчки отрицательных: " << SUM;
//    cout << "\nконечная матрица: \n";
//
//    SHOW_after_CHANGES(matrix, length, rows, SUM);
//
//
//    for (int i = 0; i < rows; i++)
//    {
//        delete[] matrix[i];
//    }
//    delete[] matrix;
//}

//2 доп 7 варик

//int f_min(int count, int i...)
//{
//    int* pa = &i;
//    int max = *pa;
//    while (count--)
//    {
//        if (*pa < max)
//            max = *pa;
//        pa++;
//    }
//    return max;
//}
//
//void main()
//{
//    setlocale(LC_ALL, "ru");
//    int i, j, k, l;
//    cout << "введите несколько чисел для сравнения: " << endl;
//    scanf_s("%d %d %d %d", &i, &j, &k, &l);
//    cout << "наименьшее из двух первых чисел:    " << f_min(2, i, j) << endl;
//    cout << "наименьшее из трёх первых чисел:    " << f_min(3, i, j, k) << endl;
//    cout << "наименьшее из четырёх первых чисел: " << f_min(4, i, j, k, l) << endl;
//}

//3 доп 15 варик

//void TenToTwo(int count, int i...)
//{
//    int* pointer = &i;
//    char temp[255];
//    int III = 0;
//    while (count--)
//    {
//        III++;
//        _itoa_s(*pointer, temp, 2);
//        cout << III << " число в двоичном виде: " << temp << endl;
//        pointer++;
//    }
//}
//    
//void main()
//{
//    setlocale(LC_ALL, "ru");
//    int i, j, k;
//    cout << "введите три числа:\n";
//    scanf_s("%d%d%d", &i, &j, &k);
//    TenToTwo(3, i, j, k);
//}