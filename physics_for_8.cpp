#include <iostream>
#include <cmath>

using namespace std;


void translation_to_temprature();
void warm();
void current_strength();
void state_of_aggregation();
void Coulombs_law();
void JouleLenz_law();
void Law_of_light_reflection();
void Law_of_refraction_of_light();
void Optical_power_of_the_lens();


int main() {
	while (true) {
		string choose;

        cout << "Перевод в температуру:0, Теплота:1, Сила тока:2\nАгрегатное состояние жидкостей:3, Закон Кулона:4, Закон Джоуля Ленца:5\nЗакон отражения света:6, Закон преломления света:7, Оптическая сила линзы:8\n";
		cout << "Введите номер задачи от 0 до 8 или напишите 'stop' для завершения:\n";
		cin >> choose;

		if (choose == "stop") {
			break;
		}
        switch (stoi(choose)) {
            case 0:
                cout << "Вы выбрали 'Температура'\n";
                translation_to_temprature();
                break;
            case 1:
                cout << "Вы выбрали 'теплота'\n";
                warm();
                break;
            case 2:
                cout << "Вы выбрали 'сила тока'\n";
                current_strength();
                break;
            case 3:
                cout << "Вы выбрали 'Агрегатное состояние жидкостей'\n";
                state_of_aggregation();
                break;
            case 4:
                cout << "Вы выбрали 'Закон Кулона'\n";
                Coulombs_law();
                break;
            case 5:
                cout << "Вы выбрали 'Закон Джоуля Ленца'\n";
                JouleLenz_law();
                break;
            case 6:
                cout << "Вы выбрали 'Закон отражения света'\n";
                Law_of_light_reflection();
                break;
            case 7:
                cout << "Вы выбрали 'Закон преломления света'\n";
                Law_of_refraction_of_light();
                break;
            case 8:
                cout << "Вы выбрали 'Оптическая сила линзы'\n";
                Optical_power_of_the_lens();
                break;
            default:
                cout << "Неверный выбор. Пожалуйста повторите попытку\n";
                break;
        }
        cout << "\n\n";
	}
}

void translation_to_temprature () {
    string SI_temprature;
    float celsius, farengeit, kelvin;
    cout << "Введите из чего во что вы хотите перевести:\nЦелсии в Кельвины | 001\nКельвины в Целсии | 002\nФаренгейты в Кельвины | 003\nКельвины в Фаренгейты | 004\nЦелсии в Фаренгейты | 005\nФаренгейты в Целсии | 006" << endl;
    cin >> SI_temprature;
    if (SI_temprature == "001") {
        cout << "Введите температуру в Целсиях: ";
        cin >> celsius;
        float temprature_c_k = celsius + 273.15;
        cout << "Ответ: " << temprature_c_k << endl;
    } else if (SI_temprature == "002") {
        cout << "Введите температуру в Келвинах ( > 0 ): ";
        cin >> kelvin;
        float temprature_k_c = kelvin - 273.15;
        cout << "Ответ: " << temprature_k_c << "°" << endl;
    } else if (SI_temprature == "003") {
        cout << "Введите температуру в Фаренгейтах: ";
        cin >> farengeit;
        float temprature_f_k = (farengeit-32)*5/9 + 273.15;
        cout << "Ответ: " << temprature_f_k << endl;
    } else if (SI_temprature == "004") {
        cout << "Введите температуру в Келвинах ( > 0 ): ";
        cin >> kelvin;
        float temprature_k_f = (kelvin-273.15)*9/5 + 32;
        cout << "Ответ: " << temprature_k_f << endl;
    } else if (SI_temprature == "005") {
        cout << "Введите температуру в Целсиях: ";
        cin >> celsius;
        float temprature_c_f = (celsius*9/5) + 32;
        cout << "Ответ: " << temprature_c_f << endl;
    } else if (SI_temprature == "006") {
        cout << "Введите температуру в Фаренгейтах: ";
        cin >> farengeit;
        float temprature_f_c = 5/9*(98.6 - 32);
        cout << "Ответ: " << temprature_f_c << "°" << '\n';
    } else {
        cout << "Error\n";
    }
}

//define warm func
void warm () {
    float Q, m, C, c, T, answer;
    string unknown;
    cout << "Введите неизвестное значение (C, Q, T, c, m): ";
    cin >> unknown;
    if (unknown == "C") {
        cout << "Введите Q, △t:\n";
        cin >> Q >> T;
        answer = Q/T;
        cout << "Анализ: C = Q/△t\nОтвет: " << answer << "[Дж/˚С]\n";
    } else if (unknown == "c") {
        cout << "Введите Q, △t, m:\n";
        cin >> Q >> T >> m;
        answer = Q/T*m;
        cout << "Анализ: c = Q/△t*m\nОтвет: " << answer << "[Дж/˚С*кг]\n"; 
    } else if (unknown == "Q") {
        cout << "Введите c, m, △t: \n";
        cin >> c >> m >> T;
        answer = c*m*T;
        cout << "Анализ: Q = c*m*△t\nОтвет: " << answer << "[Дж]\n";
    } else if (unknown == "T") {
        cout << "Введите Q, c, m:\n";
        cin >> Q >> c >> m;
        answer = Q/c*m;
        cout << "Анализ: △t = Q/cm\nОтвет: " << answer << "[˚С]\n";
    } else if (unknown == "q") {
        cout << "Введите Q, m:\n";
        cin >> Q, m;
        answer = Q/m;
        cout << "Анализ: q = Q/m\nОтвет: " << answer << "[Дж/кг]\n";
    } else {
        cout << "Error\n";
    }

}

void voltage () {
    float U, I, P, R;
    string ques;
    cout << "Введите неизвестный параметр (I, P, R):" << endl;
    cin >> ques;
    if (ques == "I") {
        cout << "Введите P(Вт): " << endl;
        cin >> P;
        cout << "Введите R(Ω): " << endl;
        cin >> R;
        float U1 = P*R;
        float U2 = sqrt (U1);
        cout << "U = " << U2 << endl;
    } else if (ques == "P") {
        cout << "Введите I(A): " << endl;
        cin >> I;
        cout << "Введите R(Ω): " << endl;
        cin >> R;
        float U_2 = I*R;
        cout << "U = " << U_2 << endl;
    } else if (ques == "R") {
        cout << "Введите P(Вт): " << endl;
        cin >> P;
        cout << "Введите I(A): " << endl;
        cin >> I;
        float U_3 = P/I;
        cout << "U = " << U_3 << endl;
    } else {
        cout << "Error\n";
    }

}

void current_s () {
    float U, P, R;
    cout << "Введите неизвестный параметр (U, P, R):" << endl;
    string quesI;
    cin >> quesI;
    if (quesI == "U") {
        cout << "Введите P(Вт): " << endl;
        cin >> P;
        cout << "Введите R(Ω): " << endl;
        cin >> R;
        float I1 = P/R;
        float ans = sqrt (I1);
        cout << "I = " << ans << endl;
    } else if (quesI == "P") {
        cout << "Введите U(В): " << endl;
        cin >> U;
        cout << "Введите R(Ω): " << endl;
        cin >> R;
        float I_2 = U/R;
        cout << "I = " << I_2 << endl;
    } else if (quesI == "R") {
        cout << "Введите P(Вт): " << endl;
        cin >> P;
        cout << "Введите U(В): " << endl;
        cin >> U;
        float I_3 = P/U;
        cout << "I = " << I_3 << endl;
    } else {
        cout << "Error" << endl;
    }
}

void resistance () {
    float U, I, P;
    string quesR;
    cout << "Введите неизвестный параметр (U, I, R): ";
    cin >> quesR;
    if (quesR == "U") {
        cout << "Введите P(Вт): ";
        cin >> P;
        cout << "Введите I(A): ";
        cin >> I;
        float R1 = pow(I, 2);
        cout << "R = " << P/R1 << endl;
    } else if (quesR == "P") {
        cout << "Введите U(В): " << endl;
        cin >> U;
        cout << "Введите I(A): " << endl;
        cin >> I;
        float R_2 = U/I;
        cout << "R = " << R_2 << endl;
    } else if (quesR == "I") {
        cout << "Введите P(Вт): " << endl;
        cin >> P;
        cout << "Введите U(В): " << endl;
        cin >> U;
        float RI = pow(U, 2);
        cout << "R = " << RI/P << endl;
    } else {
        cout << "Error" << endl;
    }
}

void power () {
    float U, I, R;
    string quesP;
    cout << "Введите неизвестный параметр (U, I, R): ";
    cin >> quesP;
    if (quesP == "U") {
        cout << "Введите I(A): ";
        cin >> I;
        cout << "Введите R(Ω): ";
        cin >> R;
        float PU = pow(I, 2);
        cout << "P = " << PU/R << endl;
    } else if (quesP == "I") {
        cout << "Введите U(В): " << endl;
        cin >> U;
        cout << "Введите R(Ω): " << endl;
        cin >> R;
        float PI = pow(U, 2)/R;
        cout << "P = " << PI << endl;
    } else if (quesP == "R") {
        cout << "Введите U(В): " << endl;
        cin >> U;
        cout << "Введите I(A): " << endl;
        cin >> I;
        float PR = U*I;
        cout << "P = " << PR << endl;
    } else {
        cout << "Error" << endl;
    }
}

void current_strength () {
    string formula;
    cout << "Введите неизвестный параметр (U, I, R, P): " << endl;
    cin >> formula;
    if (formula == "U") {
        voltage();
    } else if (formula == "I") {
        current_s();
    } else if (formula == "R") {
        resistance();
    } else if (formula == "P") {
        power();
    } else {
        cout << "Error\n";
    }

}

//Defining a func state of aggregation
void state_of_aggregation () {
    float lambda, Q, m, phi, rho, rho0;
    string unknown, answer;
    cout << "Введите неизвестный параметр (λ-lambda, Q, m\nφ-phi, ρ-rho, l):\n";
    cin >> unknown;
    if (unknown == "lambda") {
        cout << "Введите Q, m: ";
        cin >> Q, m;
        answer = Q/m;
        cout << "Анализ: λ = Q/m\nОтвет: " << answer << "[Дж/кг]\n";
    } else if (unknown == "Q") {
        cout << "Введите λ, m: ";
        cin >> lambda >> m;
        answer = lambda*m;
        cout << "Анализ: Q = λ•m\nОтвет: " << answer << "[Дж]\n";
    } else if (unknown == "phi") {
        cout << "Введите ρ, ρ0:\n";
        cin >> rho >> rho0;
        answer = (rho/rho0)*1;
        cout << "Анализ: φ = ρ/ρ0*100%\nОтвет: " << answer << "[%]\n";
    } else if (unknown == "L") {
        cout << "Введите Q, m:\n";
        cin >> Q, m;
        answer = Q/m;
        cout << "Анализ: L = Q/m\nОтвет: " << answer << "[Дж/кг]\n";
    } else {
        cout << "error";
    }
}

void Coulombs_law() {
    float F, k, q, q1, q2, t, r2, I;
    string unknown, answer;
    cout << "Введите неизвестный параметр (F, k, q1, q2, r): ";
    cin >> unknown;
    if (unknown == "F") {
        cout << "Введите k, q1, q2, r^2\n";
        cin >> k, q1, q2, r2;
        answer = k * (q1 * q2)/r2;
        cout << "Анализ: F = k•(q1•q2)/r^2\nОтвет: " << answer << "[H]\n";
    } else if (unknown == "I") {
        cout << "Введите q, t: ";
        cin >> q >> t;
        answer = q/t;
        cout << "Анализ: I = q/t\nОтвет: " << answer << "[A]\n";
    } else {
        cout << "error\n";
    }
}

void JouleLenz_law () {
    cout << "Q = I^2*R*t\nQ = U*I*t\nQ = P*t\nQ = U^2/R*t\n";
}

void Law_of_light_reflection() {
    cout << "α = β [град]\n";
}

void Law_of_refraction_of_light() {
    cout << "sin α/sin β = n\n";
}

void Optical_power_of_the_lens() {
    float D, F;
    string unknown;
    cout << "Введите unknown параметр (D, F): ";
    cin >> unknown;
    if (unknown == "D") {
        cout << "Введите F: ";
        cin >> F;
        cout << "Анализ: D = 1/F\nОтвет: " << 1/F << "[Дптр]\n";
    } else if (unknown == "F") {
        cout << "Введите D: ";
        cin >> D;
        cout << "Анализ: F = 1/D\nОтвет: " << 1/D << "[H]\n";
    } else {
        cout << "Error" << '\n';
    }
}
/*
Α	α	    alpha      a --> father
Β	β	    beta       b
Γ	γ	    gamma      g
Δ	δ	    delta      d
Ε	ε	    epsilon    e --> end
Ζ	ζ	    zêta       z
Η	η	    êta        ê --> hey
Θ	θ	    thêta      th --> thick
Ι	ι	    iota       i --> it
Κ	κ    	kappa      k
Λ	λ	    lambda     l
Μ	μ	    mu         m
Ν	ν    	nu         n
Ξ	ξ	    xi         ks --> box
Ο	ο	    omikron    o --> off
Π	π	    pi         p
Ρ	ρ	    rho        r
Σ	σ, ς    sigma      s --> say
Τ	τ    	tau        t
Υ	υ	    upsilon    u --> put
Φ	φ	    phi        f
Χ	χ	    chi        ch --> Bach
Ψ	ψ	    psi        ps
Ω	ω	    omega      ô --> grow
*/
