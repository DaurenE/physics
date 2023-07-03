#include <iostream>
#include <cmath>

using namespace std;


void mechanical_work();
void density();
void inertia();
void average_speed();
void power();
void gravity();
void friction_force();
void elastic_force();
void current_strength();
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
    cout << "Плотность:0, механическая_работа:1, инерция:2\nсредняя_скорость:3, мощность:4, сила тяжести:5,\nсила трения:6, сила упругости:7, сила тока:8\nДавление:9, Давление в жидкостях и газах:10,\nперевод в СИ:11, Гидравличесская машина:12, ";
    cout << "Сообщающиеся сосуды:13,\nсила Архимеда:14, плотность сплава:15, Потенциальная энергия:16,\nКинетичесская энергия:17, Упругая деформация:18, Закон сохранения энергии:19\n\n:";
    while (true) {
        string main_task;
        cout << "Введите номер задачи от 0 до 19 или 'stop' для завершения: ";
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
                cout << "'сила тока'" << endl;
                current_strength();
                break;
            case 9:
                cout << "'Давление'" << endl;
                pressure();
                break;
            case 10:
                cout << "'Давление в жидкостях и газах'" << endl;
                pressure_in_liquds();
                break;
            case 11:
                cout << "'перевод в СИ'" << endl;
                SI_categories();
                break;
            case 12:
                cout << "'Гидравличесская машина'" << endl;
                gidravlical();
                break;
            case 13:
                cout << "'Сообщающиеся сосуды'" << endl;
                Communicating_Vessels();
                break;
            case 14:
                cout << "'сила Архимеда'" << endl;
                archimed();
                break;
            case 15:
                cout << "'плотность сплава'" << endl;
                alloy_density();
                break;
            case 16:
                cout << "'Потенциальная энергия'" << endl;
                potential_energy();
                break;
            case 17:
                cout << "'Кинетичесская энергия'" << endl;
                kinetic_energy();
                break;
            case 18:
                cout << "'Упругая деформация'" << endl;
                elastic_deform();
                break;
            case 19:
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


//Function for solving tasks about mechanical work
void mechanical_work() {
    float A, N, t;
    string unknown;

    cout << "Enter unknown value (A, N, t): ";
    cin >> unknown;

    if (unknown == "A") {
        cout << "Enter N: ";
        cin >> N;
        cout << "Enter t: ";
        cin >> t;
        A = N / t;
        cout << "A = " << A << endl;
    } else if (unknown == "N") {
        cout << "Enter A: ";
        cin >> A;
        cout << "Enter t: ";
        cin >> t;
        N = A * t;
        cout << "N = " << N << endl;
    } else if (unknown == "t") {
        cout << "Enter A: ";
        cin >> A;
        cout << "Enter N: ";
        cin >> N;
        t = N / A;
        cout << "t = " << t << endl;
    } else {
        cout << "Error" << endl;
    }
}

// Define function for solving tasks about density
void density() {
    float ro, m, v;
    string formula;

    cout << "Enter unknown parameter (p, m, v):" << endl;
    cin >> formula;

    if (formula == "p") {
        cout << "Enter m: " << endl;
        cin >> m;
        cout << "Enter v: " << endl;
        cin >> v;
        cout << "p = " << m/v << endl;
    } else if (formula == "m") {
        cout << "Enter p: " << endl;
        cin >> ro;
        cout << "Enter v: " << endl;
        cin >> v;
        cout << "m = " << ro*v << endl;
    } else if (formula == "v") {
        cout << "Enter m: " << endl;
        cin >> m;
        cout << "Enter p: " << endl;
        cin >> ro;
        cout << "v = " << m/ro << endl;
    } else {
        cout << "Error" << endl;
    }
}
//Define a func that provide me to solve tasks with alloy density
void alloy_density () {
    float m1, m2, v1, v2;
    cout << "Enter m1(кг): ";
    cin >> m1;
    cout << "Enter m2(кг): ";
    cin >> m2;
    cout << "Enter v1(м3): ";
    cin >> v1;
    cout << "Enter v2(м3): ";
    cin >> v2;
    cout << "Analysis: ρсп = (m1 + m2):(v1 + v2)\nAnswer is: ρсп = " << (m1 + m2)/(v1 + v2) << "кг/м3" << endl;
}
// The same thing with upper examples
void inertia () {
    string formula;
    float m1, m2, v1, v2;

    cout << "Enter unknown parameter (m1, m2, v1, v2): ";
    cin >> formula;

    if (formula == "m1") {
        cout << "Enter m2(кг), v1(м/с), v2(м/с): \n";
        cin >> m2 >> v1 >> v2;
        cout << "m1 = " << m2*v2/v1 << endl;
    } else if (formula == "m2") {
        cout << "Enter m1(кг), v1(м/с), v2(м/с): \n";
        cin >> m1 >> v1 >> v2;
        cout << "m2 = " << m1*v1/v2 << "\n";
    } else if (formula == "v1") {
        cout << "Enter m2(кг), v2(м/с), m1(кг): \n";
        cin >> m2 >> v2 >> m1;
        cout << "v1 = " << m2*v2/m1 << endl;
    } else if (formula == "v2") {
        cout << "Enter m1(кг), v1(м/с), m2(кг): " << endl;
        cin >> m1 >> v1 >> m2;
        cout << "v2 = " << m1*v1/m2 << endl;
    } else {
        cout << "Error" << endl;
    }

}

void average_speed () {
    float S1, S2, V1, V2, t1, t2;

    cout << "Enter S1(м): " << endl;
    cin >> S1;
    cout << "Enter S2(м): " << endl;
    cin >> S2;
    if (S1 == S2) {
        cout << "Enter V1(м/с): " << endl;
        cin >> V1;
        cout << "Enter V2(м/с): " << endl;
        cin >> V2;
        cout << "Analysis: 2・V1・V2 : V1 + V2" << endl;
        cout << "Vср = " << 2*V1*V2 / (V1+V2) << endl;
    } else if (S1 != S2) {
        cout << "Enter t1(сек): " << endl;
        cin >> t1;
        cout << "Enter t2(сек): " << endl;
        cin >> t2;
        cout << "Analysis: S1 + S2/t1 + t2" << endl;
        cout << "Answer is: " << (S1+S2)/(t1+t2) << endl;
    } else {
        cout << "Error" << "\n";
    }
}

void power () {
    string formula;
    float A, t, N, F, V;
    cout << "Enter unknown parameter (A, t, N, F, V): ";
    cin >> formula;
    if (formula == "N") {
        cout << "Enter A(Дж), t(сек): \n";
        cin >> A >> t;
        cout << "Analysis: N = A / t\n";
        cout << "Answer is:\nN = " << A / t << "\n";
    } else if (formula == "A") {
        cout << "Enter N(Вт), t(сек): \n";
        cin >> N >> t;
        cout << "Analysis: A = N・t\nAnswer is: A = " << N*t << "\n";
    } else if (formula == "t") {
        cout << "Enter N(Вт), A(Дж): \n";
        cin >> N >> A;
        cout << "Analysis: t = A/N\nAnswer is: t = " << A/N << "\n";
    } else if (formula == "V") {
        cout << "Enter F(H), N(Вт): \n";
        cin >> F >> N;
        cout << "Analysis: V = N/F\nAnswer is: V = " << N/F << "\n";
    } else if (formula == "F") {
        cout << "Enter N(Вт), V(м/с): \n";
        cin >> N >> V;
        cout << "Analysis: F = N/V\nAnswer is: F = " << N/V << "\n";
    } else {
        cout << "*Error*" << "\n";
    }
}

void gravity () {
    string formula;
    float m, F, g;

    cout << "Значения в H / кг:\n Меркурий 3,7\n Венера 8,9\n Земля 9,8\n Марс 3,7\n Юпитер 24,9\n Сатурн 10,6\n Уран 8,7\n Нептун 11,6\n Солнце 274\n Луна 1,6" << endl;
    cout << "Enter unknown parameter (F, m, g):" << endl;
    cin >> formula;
    if (formula == "F") {
        cout << "Enter m(кг): " << endl;
        cin >> m;
        cout << "Enter g(м/с): " << endl;
        cin >> g;
        cout << "Analysis: F = mg\nAnswer is: F = " << m*10 << endl;
    } else if (formula == "m") {
        cout << "Enter F(H): " << endl;
        cin >> F;
        cout << "Enter g(м/с): " << endl;
        cin >> g;
        cout << "Analysis: m = F:g\nAnswer is: m = " << F/10 << endl;
    } else {
        cout << "You have to enter F or m" << endl;
    }
}

void friction_force () {
    string formula;
    float F, u, N;

    cout << "Enter unknown parameter (F, u, N):" << endl;
    cin >> formula;
    if (formula == "F") {
        cout << "Enter μ: " << endl;
        cin >> u;
        cout << "Enter N(H): " << endl;
        cin >> N;
        cout << "Analysis: F = μ*N\nAnswer is: F = " << u*N << endl;
    } else if (formula == "u") {
        cout << "Enter F(H): " << endl;
        cin >> F;
        cout << "Enter N(H): " << endl;
        cin >> N;
        float res = F/N;
        if (res > 1) {                                                                              //This block of "if-else" compares values to normal
            cout << "⌀\nNo solves because μ must be more than 1 and less than 0\n0 < μ < 1" << endl;
        } else if (res < 0) {
            cout << "⌀\nNo solves because μ must be more than 1 and less than 0\n0 < μ < 1" << endl;
        } else if (res == 1) {
            cout << "impossible be in real life" << endl;
        } else {
            cout << "Analysis: μ = F/N\nAnswer is: μ = " << F/N << endl;
        }
    } else if (formula == "N") {
        cout << "Enter F(H): " << endl;
        cin >> F;
        cout << "Enter μ: " << endl;
        cin >> u;
        cout << "Analysis: N = F/μ\nAnswer is: N = " << F/u << endl;
    } else {
        cout << "Un recognized input" << endl;
    }

}

void elastic_force () {
    string formula;
    float F, k, x;

    cout << "Enter unknown parameter (F, k, △x): " << endl;
    cin >> formula;
    if (formula == "F") {
        cout << "Enter k(H/м): " << endl;
        cin >> k;
        cout << "Enter △x(см): " << endl;
        cin >> x;
        cout << "Analysis: F = k△x\nAnswer is: F = " << k*x << endl;
    } else if (formula == "k") {
        cout << "Enter F(H): " << endl;
        cin >> F;
        cout << "Enter △x(см): " << endl;
        cin >> x;
        cout << "Analysis: k = F/△x\nAnswer is: k = " << F/x << endl;
    } else if (formula == "x") {
        cout << "Enter F(H): " << endl;
        cin >> F;
        cout << "Enter k(H/м): " << endl;
        cin >> k;
        cout << "Analysis: x = F/k\nAnswer is: x = " << F/k << endl;
    } else {
        cout << "Un recognized input" << endl;
    }

}
void pressure () {
    string formula;
    float p, F, S;
    cout << "Enter unknown parameter (p, F, S): ";
    cin >> formula;
    if (formula == "p") {
        cout << "Enter F(H): " << endl;
        cin >> F;
        cout << "Enter S(м2): " << endl;
        cin >> S;
        cout << "Analysis: p = F/S\nAnswer is: p = " << F/S << endl;
    } else if (formula == "F") {
        cout << "Enter p(Па): " << endl;
        cin >> p;
        cout << "Enter S(м2): " << endl;
        cin >> S;
        cout << "Analysis: F = p・S\nAnswer is: F = " << p*S << endl;
    } else if (formula == "S") {
        cout << "Enter F(H): " << endl;
        cin >> F;
        cout << "Enter p(Па): " << endl;
        cin >> p;
        cout << "Analysis: S = F:p\nAnswer is: S = " << F/p << endl;
    } else {
        cout << "Error" << endl;
    }
}

//converts any length to the one you need
void length () {
    string SI;
    float km, m, cm, mm;
    cout << "Enter from what to what you want to convert:\nкм в м:001\nм в км:002\nм в см:003\nсм в м:004\nсм в км:005\nкм в см:006\nмм в м:007\nм в мм:008";
    cin >> SI;
    if (SI == "001") {
        cout << "Enter length is kilometers: ";
        cin >> km;
        float length_kilometers_m = km*1000;
        cout << "Answer is: " << length_kilometers_m << endl;
    } else if (SI == "002") {
        cout << "Enter length in meters";
        cin >> m;
        float length_meters_km = m/1000;
        cout << length_meters_km << endl;
    } else if (SI == "003") {
        cout << "Enter length in meters" << endl;
        cin >> m;
        float length_meters_cm = m*100;
        cout << "Answer is: "<< length_meters_cm << endl;
    } else if (SI == "004") {
        cout << "Enter length in cm" << endl;
        cin >> cm;
        float length_centemeters_m = cm / 100;
    } else if (SI == "005") {
        cout << "Enter length in cm: ";
        cin >> cm;
        float length_centemeters_km = cm / 100000;
        cout << "Answer is: " << length_centemeters_km << endl;
    } else if (SI == "006") {
        cout << "Enter length in km: ";
        cin >> km;
        float length_kilometers_cm = km * 100000;
    } else if (SI == "007") {
        cout << "Enter length in mm: ";
        float mm;
        cin >> mm;
        float length_mm_m = mm / 100000;
        cout << "Answer is: " << length_mm_m << endl;
    } else if (SI == "008") {
        cout << "Enter length in meters";
        cin >> m;
        float length_m_mm = m * 1000;
        cout << "Answer is: " << length_m_mm << endl;
    } else {
        cout << "Error" << endl;
    }
}

//converts any time to the one you need
void time () {
    string SI_time;
    float seconds, minutes, hours;
    
    cout << "Enter from what to what you want to convert:\nсек в мин:001\nмин в сек:002\nч в мин:003\nмин в ч:004\nсек в ч:005\nч в сен:006";
    cin >> SI_time;
    if (SI_time == "001") {
        cout << "Enter time in seconds: ";
        cin >> seconds;
        float time_sec_min = seconds / 60;
        cout << "Answer is: " << time_sec_min << endl;
    } else if (SI_time == "002") {
        cout << "Enter time in minutes: ";
        cin >> minutes;
        float time_min_sec = minutes * 60;
        cout << "Answer is: " << time_min_sec << endl;
    } else if (SI_time == "004") {
        cout << "Enter time in minutes: ";
        cin >> minutes;
        float time_min_hour = minutes / 60;
        cout << "Answer is: " << time_min_hour << endl;
    } else if (SI_time == "003") {
        cout << "Enter time in hours: ";
        cin >> hours;
        float time_hour_min = hours * 60;
        cout << "Answer is: " << time_hour_min << endl;
    } else if (SI_time == "005") {
        cout << "Enter time in seconds: ";
        cin >> seconds;
        float time_sec_hour = seconds / 3600;
        cout << "Answer is: " << time_sec_hour << endl;
    } else if (SI_time == "006") {
        cout << "Enter time in hours: ";
        cin >> hours;
        float time_hour_sec = hours * 3600;
        cout << "Answer is: " << time_hour_sec << endl;
    } else {
        cout << "Error" << endl;
    }
}
//Define a mass function
//Converts any mass to the one you need
void mass () {
    string SI_mass;
    float kg, gramms;
    
    cout << "Enter from what to what you want to convert:\nг в кг:001\nкг в г:002\n" << endl;
    cin >> SI_mass;
    if (SI_mass == "001") {
        cout << "Enter mass in gramms: ";
        cin >> gramms;
        float mass_g_kg = gramms / 1000;
        cout << "Answer is: " << mass_g_kg<< endl;
    } else if (SI_mass == "002") {
        cout << "Enter mass in kg: ";
        cin >> kg;
        float mass_kg_g = kg * 1000;
        cout << "Answer is: " << mass_kg_g << endl;
    } else {
        cout << "Sorry" << endl;
    }
}

//Define a temp function;
//converts any temprature to the one you need
void temprature () {
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

//Define a speed function;
//converts any speed to the one you need
void speed () {
    string SI_speed;
    float kmph, mps;

    cout << "Enter from what to what you want to convert:\nкм/ч в м/с:001\nм/с в км/ч:002";
    cin >> SI_speed;
    if (SI_speed == "001") {
        cout << "Enter speed in km/h: ";
        cin >> kmph;
        float speed_kmph_mps = kmph / 3.6;
        cout << "Answer is: " << speed_kmph_mps << endl;
    } else if (SI_speed == "002") {
        cout << "Enter speed in m/s: ";
        cin >> mps;
        float speed_mps_kmph = mps * 3.6;
        cout << "Answer is: " << speed_mps_kmph << endl;
    } else {
        cout << "Error" << endl;
    }
}

//Define a volume function;
//converts any volume to the one you need
void volume () {
    string SI_volume;
    float cm3, m3;
    cout << "Enter from what to what you want to convert:\nсм3 в м3:001\nм3 в см3:002:002 ";
    cin >> SI_volume;
    if (SI_volume == "001") {
        cout << "Enter volume in cm3: ";
        cin >> cm3;
        float volume_cm3_m3 = cm3 / 1000000;
        cout << "Answer is: " << volume_cm3_m3 << endl;
    } else if (SI_volume == "002") {
        cout <<"Enter volume in m3: ";
        cin >> m3;
        float volume_m3_cm3 = m3 * 1000000;
        cout << "Answer is: " << volume_m3_cm3 << endl;
    } else {
        cout << "Error" << endl;
    }
}

//Uses upper functions to convert values to SI
void SI_categories () {
    string SI, categories;
    float km, m, cm;
    
    cout << "What do you want to convert(длина:1, время:2, масса:3, температура:4, скорость:5, объём:6)\n";
    cin >> categories;

//Cheking inputs;
    if (categories == "1") {
        length();
    } else if (categories == "2") {
        time();
    } else if (categories == "3") {
        mass();
    } else if (categories == "4") {
        temprature();
    } else if (categories == "5") {
        speed();
    } else if (categories == "6") {
        volume();
    }


}

void pressure_in_liquds () {
    string unexpected;
    float ρ, g, P, h;
    cout << "Enter unknown parameter (ρ, g, P, h): ";
    cin >> unexpected;
    if (unexpected == "h") {
        cout << "Enter ρ(кг/м3): ";
        cin >> ρ;
        cout << "Enter P(Па): ";
        cin >> P;
        cout << "Enter g(м/с): ";
        cin >> g;
        cout << "Analysis: h = P/ρg\nAnswer is: h = " << P/ρ*g << endl;
    } else if (unexpected == "ro") {
        cout << "Enter h(м): ";
        cin >> h;
        cout << "Enter P(Па): ";
        cin >> P;
        cout << "Enter g(м/с): ";
        cin >> g;
        cout << "Analysis: ρ = P/gh\nAnswer is: ρ = " << P/g*h << endl;
    } else if (unexpected == "P") {
        cout << "Enter ρ(кг/м3): ";
        cin >> ρ;
        cout << "Enter h(м): ";
        cin >> h;
        cout << "Enter g(м/с): ";
        cin >> g;
        cout << "Analysis: P = ρgh\nAnswer is: P = " << ρ*g*h << endl;
    } else {
        cout << "Error" << endl;
    }
}

void gidravlical () {
    string F_input;
    float F1, S1, S2, h1, h2, F2;

    cout << "Enter unknown parameter (F1, S1, S2, h1, h2, F2): ";
    cin >> F_input;

    if (F_input == "F2") {
        cout << "Enter F1, S1, S2: ";
        cin >> F1 >> S1 >> S2;
        cout << "Analysis: F2 = F1 * S1 / S2" << endl;
        cout << "Answer is: F2 = " << F1 * S1 / S2 << "H" << endl;
    } else if (F_input == "F1") {
        cout << "Enter F2, S1, S2: ";
        cin >> F2 >> S1 >> S2;
        cout << "Analysis: F1 = F2 * S2 / S1" << endl;
        cout << "Answer is: F1 = " << F2 * S2 / S1 << "H" << endl;
    } else if (F_input == "S1") {
        cout << "Enter F1, F2, S2: ";
        cin >> F1 >> F2 >> S2;
        cout << "Analysis: S1 = F2 * S2 / F1" << endl;
        cout << "Answer is: S1 = " << F2 * S2 / F1 << "м2" << endl;
    } else if (F_input == "S2") {
        cout << "Enter F1, F2, S1: ";
        cin >> F1 >> F2 >> S1;
        cout << "Analysis: S2 = F1 * S1 / F2" << endl;
        cout << "Answer is: S2 = " << F1 * S1 / F2 << "м2" << endl;
    } else if (F_input == "h1") {
        cout << "Enter F1, h2, F2: ";
        cin >> F1 >> h2 >> F2;
        cout << "Analysis: h1 = F2 * h2 / F1" << endl;
        cout << "Answer is: h1 = " << F2 * h2 / F1 << "м" << endl;
    } else if (F_input == "h2") {
        cout << "Enter F1, F2, h1: ";
        cin >> F1 >> F2 >> h1;
        cout << "Analysis: h2 = F1 * h1 / F2" << endl;
        cout << "Answer is: h2 = " << F1 * h1 / F2 << "м" << endl;
    } else {
        cout << "5o5" << endl;
    }
}

//Define a func of Communicating Vessels;
void Communicating_Vessels () {
    string unknown;
    float h2, p2, h1, p1;

    cout << "Enter unknown parameter (h2, p2, h1, p1): ";
    cin >> unknown;
    if (unknown == "p1") {
        cout << "Enter h2, p2, h1: ";
        cin >> h2 >> p2 >> h1;
        cout << "Analysis: p1 = h2・p2:h1\nAnswer is: p1 = " << h2*p2/h1 << endl;
    } else if (unknown == "p2") {
        cout << "Enter p1, h2, h1: ";
        cin >> p1 >> h2 >> h1;
        cout << "Analysis: p2 = p1・h1:h2\nAnswer is: p2 = " << p1*h1/h2 << endl;
    } else if (unknown == "h2") {
        cout << "Enter p1, p2, h1: ";
        cin >> p1 >> p2 >> h1;
        cout << "Analysis: h2 = p1・h1:p2\nAnswer is: h2 = " << p1*h1/h2 << endl;
    } else if (unknown == "h1") {
        cout << "Enter p1, p2, h2: ";
        cin >> p1 >> p2 >> h2;
        cout << "Analysis: h1 = p2・h2:p1\nAnswer is: h1 = " << p2*h2/p1 << endl;
    } else {
        cout << "Something get wrong" << endl;
    }
}

void archimed () {
    string Unknown;
    float p, Fa, V;

    cout << "Enter unknown parameter (p, Fa, V): ";
    cin >> Unknown;
    if (Unknown == "p") {
        cout << "Enter Fa(H): ";
        cin >> Fa;
        cout << "Enter V(м3): ";
        cin >> V;
        cout << "Analysis: p = Fa:gV\nAnswer is: p = " << Fa/10*V << "кг/м3" << endl;
    } else if (Unknown == "Fa") {
        cout << "Enter p(кг/м3): ";
        cin >> p;
        cout << "Enter V(м3): ";
        cin >> V;
        cout << "Analysis: Fa = ρgV\nAnswer is: Fa = " << p*10*V << "H" << endl;
    } else if (Unknown == "V") {
        cout << "Enter Fa(H): ";
        cin >> Fa;
        cout << "Enter p(кг/м3): ";
        cin >> p;
        cout << "Analysis: V = Fa:ρg\nAnswer is: V = " << Fa/p*10 << "м3" << endl;
    } else {
        cout << "Error" << endl;
    }
}

void potential_energy() {
    string unknown;
    float m, h, Ep;
    cout << "Enter unknown parameter (m, h, Ep): ";
    cin >> unknown;
    if (unknown == "Ep") {
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Enter h(м): ";
        cin >> h;
        cout << "Analysis: Ep = mgh\nAnswer is Ep = " << m*10*h << "[Дж]" << endl;
    } else if (unknown == "m") {
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Enter h(м): ";
        cin >> h;
        cout << "Analysis: m = Ep/gh\nAnswer is m = " << Ep/10*h << endl;
    } else if (unknown == "h") {
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Analysis: h = Ep/mg\nAnswer is h = " << Ep/m*10 << endl;
    } else {
        cout << "Sorry" << endl;
    }

}

void elastic_deform() {
    string unknown;
    float k, x, Ep;
    cout << "Enter unknown parameter (k, x, Ep): ";
    cin >> unknown;
    if (unknown == "Ep") {
        cout << "Enter k(H/м): ";
        cin >> k;
        cout << "Enter △x(см): ";
        cin >> x;
        cout << "Analysis: Ep = k△x^2/2\nAnswer is Ep = " << (k*pow(x, 2))/2 << "[Дж]" << endl;
    } else if (unknown == "k") {
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Enter △x(см): ";
        cin >> x;
        cout << "Analysis: k = 2・Ep/△x^2\nAnswer is k = " << 2*Ep/pow(x, 2) << "[H/м]" << endl;
    } else if (unknown == "x") {
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Enter k(H/м): ";
        cin >> k;
        cout << "Analysis: △x = √2・Ep/k\nAnswer is △x = " << sqrt(2*Ep/k) << "[см]" << endl;
    } else {
        cout << "you made a mistake in one parameter" << endl;
    }
}

void kinetic_energy() {
    string not_given;
    float m, V, Ek;
    cout << "Enter unknown parameter (m, V, Ek): ";
    cin >> not_given;
    if (not_given == "Ek") {
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Enter V(м/с): ";
        cin >> V;
        cout << "Analysis: Ek = m・V^2/2\nAnswer is Ek = " << (m*pow(V, 2))/2 << "[Дж]" << endl;
    } else if (not_given == "m") {
        cout << "Enter Ek(Дж): ";
        cin >> Ek;
        cout << "Enter V(м/с): ";
        cin >> V;
        cout << "Analysis: m = 2・Ek/V^2\nAnswer is m = " << 2*Ek/pow(V, 2) << "[кг]" << endl;
    } else if (not_given == "V") {
        cout << "Enter Ek(Дж): ";
        cin >> Ek;
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Analysis: V = 2・Ek/m\nAnswer is V = " << sqrt(2*Ek/m) << "[м/c]" << endl;
    } else {
        cout << "There is a mistake" << endl;
    }
}


void law_of_energy_conservation() {
    string unknown, yes_or_no;
    float Ek, Ep, Em, V, h, m, g;

    cout << "Enter unknown parameter (Ek, Ep, Em, V, h, m, g): ";
    cin >> unknown;

    if (unknown == "Em") {
        cout << "Do you know Ek and Ep? (y/n): ";
        cin >> yes_or_no;

        if (yes_or_no == "y") {
            cout << "Enter Ek (Дж): ";
            cin >> Ek;
            cout << "Enter Ep (Дж): ";
            cin >> Ep;
            Em = Ek + Ep;
            cout << "Analysis: Em = Ek + Ep\nAnswer is Em = " << Em << "[Дж]\n";
        } else if (yes_or_no == "n") {
            cout << "There is kinetic energy\n";
            kinetic_energy();
            cout << '\n' << "There is potential energy\n";
            potential_energy();
        }
    } else if (unknown == "V") {
        cout << "Enter h (m): ";
        cin >> h;
        cout << "Enter g: ";
        cin >> g;
        V = sqrt(2 * g * h);
        cout << "Analysis: √2gh\nAnswer is V = " << V << "[м/с]\n";
    } else if (unknown == "h") {
        cout << "Enter V (m/s): ";
        cin >> V;
        cout << "Enter g: ";
        cin >> g;
        h = pow(V, 2) / (2 * g);
        cout << "Analysis: h = V^2/2g\nAnswer is h = " << h << "[m]\n";
    } else {
        cout << "There is a mistake\n";
    }
}    
