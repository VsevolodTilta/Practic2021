#include <iostream>
using namespace std;


void InsertSort(int* mas, int n)
{
    try {
        cout << "\n\nСортировка вставками" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int i = 1; i < n; i++) {
                for (int j = i; j > 0 && mas[j - 1] > mas[j]; j--) {
                    int tmp = mas[j - 1];
                    mas[j - 1] = mas[j];
                    mas[j] = tmp;
                    cout << endl << "Сортировка:\t";
                    for (int i = 0; i < n; i++)
                        cout << mas[i] << "\t";
                }
            }
        }
        cout << endl << "Результирующий массив: ";
        for (int i = 0; i < n; i++)
            cout << mas[i] << "\t";
    }
    catch(...)
    {
        cout << "Гоша наелся говна" << endl;
    }
}

void BubbleSort(int* mas, int n)
{
    try {
        cout << "\n\nСортировка пузырьком" << endl;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (mas[j] > mas[j + 1]) {
                    int temp = mas[j];
                    mas[j] = mas[j + 1];
                    mas[j + 1] = temp;

                    cout << endl << "Сортировка:\t";
                    for (int i = 0; i < n; i++)
                        cout << mas[i] << "\t";
                }
            }
        }
        cout << endl << "Результирующий массив: ";
        for (int i = 0; i < n; i++)
            cout << mas[i] << "\t";
    }
    catch (...)
    {
        cout << "Гоша наелся дважды" << endl;
    }
}

int main()
{
    try {
        setlocale(LC_ALL, "Rus");
        int n;
        cin.exceptions(ios_base::failbit);
        cout << "Количество элементов в массиве: " << "";
        cin >> n;
        int* masInsert = new int[n];
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << "-й " << "элемент: ";
            cin >> masInsert[i];
        }

        int* masBubble = new int[n];
        for (int i = 0; i < n; i++)
        {
            masBubble[i] = masInsert[i];
        }
        cout << endl;
        cout << "Ваш массив:\t";
        for (int i = 0; i < n; i++)
            cout << masBubble[i] << "\t";
        InsertSort(masInsert, n);
        BubbleSort(masBubble, n);
        cout << endl;
    }
    catch (...)
    {
        cout << "Гоша наелся говна впервые" << endl;
    }
    system("pause");
    return 0;
}
