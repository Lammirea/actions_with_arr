// lab_1_num_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//написать программу, осуществляющую поиск среди структур student структуру с заданными параметрами(фамилией, именем и т.д.).

#include <iostream>
#include <string>
using namespace std;

struct Student {
    char surname[30];
    char name[15];
    int group_ID;
};
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    char data[30];
    cout << "Введите количество студентов:" << endl;
    cin >> n;
    Student* stud = new Student[n];  //создадим дин. массив.
    for (int i = 0; i < n; i++)
    {
        cout << "Введите имя студента:" << endl;
        cin >> stud[i].name;
        cout << "Введите фамилию студента:" << endl;
        cin >> stud[i].surname;
        cout << "Введите группу студента:" << endl;
        cin >> stud[i].group_ID;
    }
    cout << endl;
    cout << "Введите фамилию, имя или группу искомого студента:" << endl;
    cin >> data;
    for (int i = 0; i < n; i++)
    {
        if (atoi(data) == stud[i].group_ID) {
            cout << "Имя искомого студента:" << stud[i].name << endl;
            cout << "Фамилия искомого студента:" << stud[i].surname << endl;
        }
        if (strcmp(data, stud[i].name) == 0) {
            cout << "Группа искомого студента:" << stud[i].group_ID << endl;
            cout << "Фамилия искомого студента:" << stud[i].surname << endl;
        }
        if (strcmp(data, stud[i].surname) == 0) {
            cout << "Группа искомого студента:" << stud[i].group_ID << endl;
            cout << "Имя искомого студента:" << stud[i].name << endl;
        }
    }
    delete[] stud; //освобождаем  память
    system("pause>nul");
    return 0;
}

