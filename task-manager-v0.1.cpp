#include <iostream>

using namespace std;

void start()
{
    cout << "===============================" << "\n";
    cout << "1. Вывести список задач" << "\n";
    cout << "2. Добавить" << "\n";
    cout << "0. Закрыть <Task Manager>" << "\n";
    cout << "===============================" << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "\n       Добро пожаловать 📝" << "\n";

    start();

    string TASKS[5] {};
    int tasks_size = size(TASKS);
    int num_of_tasks = -1;
    int start_menu = 9;

    while (start_menu > 0) {
        // Главное меню
        cout << "Выберите действие: ";
        cin >> start_menu;

        // Вывести список задач
        if (start_menu == 1) {

            // Если список пуст, выввести сообщение
            if (TASKS[0] == "") {
                cout << "Список пуст" << "\n";
            }

            // Иначе вывести то, чем он наполнен
            else {
                cout << "\n";
                
                for (int i = 0; i < tasks_size; ++i) {
                    if (!(TASKS[i] == "")) {
                        cout << "--> " << TASKS[i] << "\n";
                    }
                }
            }
        }
        // Добавить задачу
        else if (start_menu == 2 && num_of_tasks < tasks_size) {
            string new_task_name;
            cout << "Новая задача: ";
            cin >> new_task_name;
          
            // Счётчик задач
            ++num_of_tasks;
  
            TASKS[num_of_tasks] = new_task_name;

            cout << "\n✅ Задача успешно добавлена!\n";
            cout << "Для проверки нажмите <1>\n";
          // Если кол-во задач (num_of_tasks) превышает размер статического массива
        } else if (num_of_tasks >= tasks_size - 1) {
            cout << "\n⚠️ Список переполнен!\n\n";
        }

        // Стартовое меню
        start();
    }

    cout << "\nДо встречи!" << "\n\n";
}
