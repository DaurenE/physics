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
            case 1:
                cout << "'теплота'\n";
                warm();
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
        cin >> c >> m >> T;
        answer = c*m*T;
        cout << "Analisys: Q = c*m*△T\nAnswer is: " << answer << "[Дж]\n";
    } else if (unknown == "T") {
        cout << "Enter Q, c, m:\n";
        cin >> Q >> c >> m;
        answer = Q/c*m
        cout << "Analisys: △T = Q/cm\nAnswer is: " << answer << "[˚С]\n";
    } else {
        cout << "Error";
    }

}

void I_func () {
    float U, P, R;
    cout << "What is unknown (U, P, R):" << endl;
    string quesI;
    cin >> quesI;
    if (quesI == "U") {
        cout << "Enter P(Вт): " << endl;
        cin >> P;
        cout << "Enter R(Ω): " << endl;
        cin >> R;
        float I1 = P/R;
        float ans = sqrt (I1);
        cout << "I = " << ans << endl;
    } else if (quesI == "P") {
        cout << "Enter U(В): " << endl;
        cin >> U;
        cout << "Enter R(Ω): " << endl;
        cin >> R;
        float I_2 = U/R;
        cout << "I = " << I_2 << endl;
    } else if (quesI == "R") {
        cout << "Enter P(Вт): " << endl;
        cin >> P;
        cout << "Enter U(В): " << endl;
        cin >> U;
        float I_3 = P/U;
        cout << "I = " << I_3 << endl;
    } else {
        cout << "Error" << endl;
    }
}

void R_func () {
    float U, I, P;
    string quesR;
    cout << "What is unknown (U, I, R): ";
    cin >> quesR;
    if (quesR == "U") {
        cout << "Enter P(Вт): ";
        cin >> P;
        cout << "Enter I(A): ";
        cin >> I;
        float R1 = pow(I, 2);
        cout << "R = " << P/R1 << endl;
    } else if (quesR == "P") {
        cout << "Enter U(В): " << endl;
        cin >> U;
        cout << "Enter I(A): " << endl;
        cin >> I;
        float R_2 = U/I;
        cout << "R = " << R_2 << endl;
    } else if (quesR == "I") {
        cout << "Enter P(Вт): " << endl;
        cin >> P;
        cout << "Enter U(В): " << endl;
        cin >> U;
        float RI = pow(U, 2);
        cout << "R = " << RI/P << endl;
    } else {
        cout << "Sorry" << endl;
    }
}

void P_func () {
    float U, I, R;
    string quesP;
    cout << "What is undnown (U, I, R): ";
    cin >> quesP;
    if (quesP == "U") {
        cout << "Enter I(A): ";
        cin >> I;
        cout << "Enter R(Ω): ";
        cin >> R;
        float PU = pow(I, 2);
        cout << "P = " << PU/R << endl;
    } else if (quesP == "I") {
        cout << "Enter U(В): " << endl;
        cin >> U;
        cout << "Enter R(Ω): " << endl;
        cin >> R;
        float PI = pow(U, 2)/R;
        cout << "P = " << PI << endl;
    } else if (quesP == "R") {
        cout << "Enter U(В): " << endl;
        cin >> U;
        cout << "Enter I(A): " << endl;
        cin >> I;
        float PR = U*I;
        cout << "P = " << PR << endl;
    } else {
        cout << "Oops!\nSomething get wrong!" << endl;
    }
}

void current_strength () {
    string formula;
    cout << "Enter unknown parameter" << endl;
    cin >> formula;
    if (formula == "U") {
        U_func();
    } else if (formula == "I") {
        I_func();
    } else if (formula == "R") {
        R_func();
    } else if (formula == "P") {
        P_func();
    } else {
        cout << "You type wrong values";
    }

}