#include <iostream>

using namespace std;


void temprature();

int main() {
    cout << "Перевод в температуру:0, ";
	while (true) {
		string choose;

		cout << "Введите номер задачи от 0 до 19 или напишите 'stop' для завершения:\n";
		cin >> choose;

		if (choose == "stop") {
			break;
		}
        cout << "Your choice is: ";
        switch (stoi(choose)) {
            case 0:
                cout << "'Температура'\n";
                translation_to_temprature();
                break;
        }
	}
}

void translation_to_temprature () {
    string SI_temprature;
    float celsius, farengeit, kelvin;
    cout << "Enter from what to what you want to convert:\nCelsius in Kelvin:001\nKelvin in Celsius:002\nFarengeit in Kelvin:003\nKelvin in Farengeit:004\nCelsius in Farengeit:005" << endl;
    cin >> SI_temprature;
    if (SI_temprature == "001") {
        cout << "Enter temprature in celsius: ";
        cin >> celsius;
        float temprature_c_k = celsius + 273.15;
        cout << "Answer is: " << temprature_c_k << endl;
    } else if (SI_temprature == "002") {
        cout << "Enter temprature in Kelvin: ";
        cin >> kelvin;
        float temprature_k_c = kelvin - 273.15;
        cout << "Answer is: " << temprature_k_c << endl;
    } else if (SI_temprature == "003") {
        cout << "Enter temprature in Farengeit: ";
        cin >> farengeit;
        float temprature_f_k = (farengeit-32)*5/9 + 273.15;
        cout << "Answer is: " << temprature_f_k << endl;
    } else if (SI_temprature == "004") {
        cout << "Enter temprature in Kelvin: ";
        cin >> kelvin;
        float temprature_k_f = (kelvin-273.15)*9/5 + 32;
        cout << "Answer is: " << temprature_k_f << endl;
    } else if (SI_temprature == "005") {
        cout << "Enter temprature in celsius: ";
        cin >> celsius;
        float temprature_c_f = (celsius*9/5) + 32;
        cout << "Answer is: " << temprature_c_f << endl;
    } else {
        cout << "4o4" << endl;
    }
}

//define warm func
void warm () {
    float Q, m, C, c, T, answer;
    string unknown;
    cout << "Enter unknown value (C, Q, T, c, m): ";
    cin >> unknown;
    if (unknown == "C") {
        cout << "Enter Q, △T:\n";
        cin >> Q >> T;
        answer = Q/T;
        cout << "Analisys: C = Q/△T\nAnswer is: " << answer << "[Дж/˚С]\n";
    } else if (unknown == "c") {
        cout << "Enter Q, △T, m:\n";
        cin >> Q >> T >> m;
        answer = Q/T*m;
        cout << "Analisys: c = Q/△T*m\nAnswer is: " << answer << "[Дж/˚С*кг]\n"; 
    } else if (unknown == "Q") {
        cout << "Enter c, m, △T:\n";
        cint >> c >> m >> T;
        answer = c*m*T;
        cout << "Analisys: Q = c*m*△T\nAnswer is: " << answer << "[Дж]\n";
    } else if ()

}