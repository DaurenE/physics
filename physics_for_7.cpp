//When I write this only me and God knows what is it 
//Now only God knows
#include <iostream>
#include <cmath>
#include "physics_for_7.h"

using namespace std;


void mechanical_work();
void density();
void inertia();
void average_speed();
void power();
void gravity();
void friction_force();
void elastic_force();
void pressure();
void pressure_in_liquds();
void SI_categories();
void gidravlical();
void Communicating_Vessels();
void archimed();
void alloy_density();
void potential_energy();
void kinetic_energy();
void elastic_deform();
void law_of_energy_conservation();

int main() {
    cout << "Плотность:0, механическая_работа:1, инерция:2\nсредняя_скорость:3, мощность:4, сила тяжести:5,\nсила трения:6, сила упругости:7, Давление:8, Давление в жидкостях и газах:9,\nперевод в СИ:10, Гидравличесская машина:11, ";
    cout << "Сообщающиеся сосуды:12,\nсила Архимеда:13, плотность сплава:14, Потенциальная энергия:15,\nКинетичесская энергия:16, Упругая деформация:17, Закон сохранения энергии:18\n\n:";
    while (true) {
        string main_task;
        cout << "Введите номер задачи от 0 до 18 или 'stop' для завершения: ";
        cin >> main_task;
        cout << endl;

        if (main_task == "stop") {
            break;
        }
        cout << "Your choice is: ";
        switch (stoi(main_task)) {
            case 0:
                cout << "'плотность'" << endl;
                density();
                break;
            case 1:
                cout << "'механическая_работа'" << endl;
                mechanical_work();
                break;
            case 2:
                cout << "'инерция'" << endl;
                inertia();
                break;
            case 3:
                cout << "'средняя_скорость'" << endl;
                average_speed();
                break;
            case 4:
                cout << "'мощность'" << endl;
                power();
                break;
            case 5:
                cout << "'сила тяжести'" << endl;
                gravity();
                break;
            case 6:
                cout << "'сила трения'" << endl;
                friction_force();
                break;
            case 7:
                cout << "сила 'упругости'" << endl;
                elastic_force();
                break;
            case 8:
                cout << "'Давление'" << endl;
                pressure();
                break;
            case 9:
                cout << "'Давление в жидкостях и газах'" << endl;
                pressure_in_liquds();
                break;
            case 10:
                cout << "'перевод в СИ'" << endl;
                SI_categories();
                break;
            case 11:
                cout << "'Гидравличесская машина'" << endl;
                gidravlical();
                break;
            case 12:
                cout << "'Сообщающиеся сосуды'" << endl;
                Communicating_Vessels();
                break;
            case 13:
                cout << "'сила Архимеда'" << endl;
                archimed();
                break;
            case 14:
                cout << "'плотность сплава'" << endl;
                alloy_density();
                break;
            case 15:
                cout << "'Потенциальная энергия'" << endl;
                potential_energy();
                break;
            case 16:
                cout << "'Кинетичесская энергия'" << endl;
                kinetic_energy();
                break;
            case 17:
                cout << "'Упругая деформация'" << endl;
                elastic_deform();
                break;
            case 18:
                cout << "'Закон сохранения энергии'" << endl;
                law_of_energy_conservation();
                break;
            default:
                cout << "Invalid task number." << endl;
                break;
        }

        cout << "\n" << endl;
    }
    return 0;
}
