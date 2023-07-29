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
void sila_toka();
void pressure();
void pressure_in_liquds();
void SI_categories();
void gidravlical();
void Communicating_Vessels();
void archimed();
void Density_splava();
void potential_energy();
void kinetic_energy();
void elastic_deform();
void law_of_energy_conservation();

int main() {
    while (true) {
        string main_task;

        cout << "Введите тип задачи:\nплотность:0, механическая_работа:1, инерция:2\nсредняя_скорость:3, мощность:4, сила тяжести:5,\nсила трения:6, сила упругости:7, сила тока:8\nДавление:9, Давление в жидкостях и газах:10,\nперевод в СИ:11, Гидравличесская машина:12, ";
        cout << "Сообщающиеся сосуды:13,\nсила Архимеда:14, плотность сплава:15, Потенциальная энергия:16,\nКинетичесская энергия:17, Упругая деформация:18, Закон сохранения энергии:19:\n";
        cin >> main_task;

        switch (stoi(main_task)) {
        case 0:
            cout << "Your choice is: 'плотность'" << '\n';
            density();
            break;
        case 1:
            cout << "Your choice is: 'механическая_работа'" << '\n';
            mechanical_work();
            break;
        case 2:
            cout << "Your choice is: 'инерция'" << '\n';
            inertia();
            break;
        case 3:
            cout << "Your choice is: 'средняя_скорость'" << '\n';
            average_speed();
            break;
        case 4:
            cout << "Your choice is: 'мощность'" << '\n';
            power();
            break;
        case 5:
            cout << "Your choice is: 'сила тяжести'" << '\n';
            gravity();
            break;
        case 6:
            cout << "Your choice is: 'сила трения'" << '\n';
            friction_force();
            break;
        case 7:
            cout << "Your choice is: сила 'упругости'" << '\n';
            elastic_force();
            break;
        case 8:
            cout << "Your choice is: 'сила тока'" << '\n';
            sila_toka();
            break;
        case 9:
            cout << "Your choice is: 'Давление'" << '\n';
            pressure();
            break;
        case 10:
            cout << "Your choice is: 'Давление в жидкостях и газах'" << '\n';
            pressure_in_liquds();
            break;
        case 11:
            cout << "Your choice is: 'перевод в СИ'" << '\n';
            SI_categories();
            break;
        case 12:
            cout << "Your choice is: 'Гидравлическая машина'" << '\n';
            gidravlical();
            break;
        case 13:
            cout << "Your choice is: 'Сообщающиеся сосуды'" << '\n';
            Communicating_Vessels();
            break;
        case 14:
            cout << "Your choice is: 'сила Архимеда'" << '\n';
            archimed();
            break;
        case 15:
            cout << "Your choice is: 'плотность сплава'" << '\n';
            Density_splava();
            break;
        case 16:
            cout << "Your choice is: 'Потенциальная энергия'" << '\n';
            potential_energy();
            break;
        case 17:
            cout << "Your choice is: 'Кинетическая энергия'" << '\n';
            kinetic_energy();
            break;
        case 18:
            cout << "Your choice is: 'Упругая деформация'" << '\n';
            elastic_deform();
            break;
        case 19:
            cout << "Your choice is: 'Закон сохранения энергии'" << '\n';
            law_of_energy_conservation();
            break;
        default:
            cout << "Invalid choice. Please enter a valid option." << '\n';
            break;
        }   
        cout << "\n" << '\n';

    }
    return 0;
}

void mechanical_work() {
    float A, N, t, F, V;
    string unknown;

    cout << "Enter unknown value (A, N, t): " << '\n';
    cin >> unknown;
    if (unknown == "A") {
        cout << "Enter N, t: ";
        cin >> N >> t;
        cout << "A = " << N/t << '\n';
    } else if (unknown == "N") {
        cout << "Enter A, t: ";
        cin >> A >> t;
        cout << "N = " << A/t << '\n';
    } else if (unknown == "t") {
        cout << "Enter A, N: ";
        cin >> A >> N;
        cout << "t = " << N/A << '\n';
    } else {
        cout << "Error" << '\n';
    }
}
// Define function for solving density
void density() {
    float ro, m, v;
    string formula;

    cout << "Enter unknown parameter (p, m, v): " << '\n';
    cin >> formula;

    if (formula == "p") {
        cout << "Enter m, v: ";
        cin >> m >> v;
        cout << "p = " << m/v << '\n';
    } else if (formula == "m") {
        cout << "Enter p, v: ";
        cin >> ro, v;
        cout << "m = " << ro*v << '\n';
    } else if (formula == "v") {
        cout << "Enter m, ρ: ";
        cin >> m >> ro;
        cout << "v = " << m/ro << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void Density_splava () {
    float m1, m2, v1, v2;
    cout << "Enter m1(кг): ";
    cin >> m1;
    cout << "Enter m2(кг): ";
    cin >> m2;
    cout << "Enter v1(м3): ";
    cin >> v1;
    cout << "Enter v2(м3): ";
    cin >> v2;
    cout << "Analysis: ρсп = (m1 + m2):(v1 + v2)\nAnswer is: ρсп = " << (m1 + m2)/(v1 + v2) << "кг/м3" << '\n';
}

void inertia () {
    string formula;
    float m1, m2, v1, v2;

    cout << "Enter unknown parameter (m1, m2, v1, v2): ";
    cin >> formula;

    if (formula == "m1") {
        cout << "Enter m2, v1, v2: " << '\n';
        cin >> m2 >> v1 >> v2;
        cout << "m1 = " << m2*v2/v1 << '\n';
    } else if (formula == "m2") {
        cout << "Enter m1, v1, v2: " << '\n';
        cin >> m1 >> v1 >> v2;
        cout << "m2 = " << m1*v1/v2 << '\n';
    } else if (formula == "v1") {
        cout << "Enter m2, v2, m1: " << '\n';
        cin >> m2 >> v2 >> m1;
        cout << "v1 = " << m2*v2/m1 << '\n';
    } else if (formula == "v2") {
        cout << "Enter m1, v1, m2: " << '\n';
        cin >> m1 >> v1 >> m2;
        cout << "v2 = " << m1*v1/m2 << '\n';
    } else {
        cout << "Error" << '\n';
    }

}

void average_speed () {
    float S1, S2, V1, V2, t1, t2;

    cout << "Enter S1(м): " << '\n';
    cin >> S1;
    cout << "Enter S2(м): " << '\n';
    cin >> S2;
    if (S1 == S2) {
        cout << "Enter V1(м/с): " << '\n';
        cin >> V1;
        cout << "Enter V2(м/с): " << '\n';
        cin >> V2;
        cout << "Analysis: 2・V1・V2 : V1 + V2" << '\n';
        cout << "Vср = " << 2*V1*V2 / (V1+V2) << '\n';
    } else if (S1 != S2) {
        cout << "Enter t1(сек): " << '\n';
        cin >> t1;
        cout << "Enter t2(сек): " << '\n';
        cin >> t2;
        cout << "Analysis: S1 + S2/t1 + t2" << '\n';
        cout << "Answer is: " << (S1+S2)/(t1+t2) << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void power () {
    string formula;
    float A, t, N, F, V;
    cout << "Enter unknown parameter: ";
    cin >> formula;
    if (formula == "N") {
        cout << "Enter A(Дж), t(сек): " << '\n';
        cin >> A >> t;
        cout << "Analysis: N = A / t" << '\n';
        cout << "Answer is:\nN = " << A / t << '\n';
    } else if (formula == "A") {
        cout << "Enter N(Вт), t(сек): " << '\n';
        cin >> N >> t;
        cout << "Analysis: A = N・t\nAnswer is: A = " << N*t << '\n';
    } else if (formula == "t") {
        cout << "Enter N(Вт), A(Дж): " << '\n';
        cin >> N >> A;
        cout << "Analysis: t = A/N\nAnswer is: t = " << A/N << '\n';
    } else if (formula == "V") {
        cout << "Enter F, N: " << '\n';
        cin >> F, N;
        cout << "Analysis: V = N/F\nAnswer is: V = " << N/F << '\n';
    } else if (formula == "F") {
        cout << "Enter N, V: " << '\n';
        cin >> N >> V;
        cout << "Analysis: F = N/V\nAnswer is: F = " << N/V << '\n';
    } else {
        cout << "*Error*" << '\n';
    }
}

void gravity () {
    string formula;
    float m, F, g;

    cout << "Значения в H / кг:\n Меркурий 3,7\n Венера 8,9\n Земля 9,8\n Марс 3,7\n Юпитер 24,9\n Сатурн 10,6\n Уран 8,7\n Нептун 11,6\n Солнце 274\n Луна 1,6" << '\n';
    cout << "Enter unknown parameter" << '\n';
    cin >> formula;
    if (formula == "F") {
        cout << "Enter m(кг): " << '\n';
        cin >> m;
        cout << "Enter g(м/с): " << '\n';
        cin >> g;
        cout << "Analysis: F = mg\nAnswer is: F = " << m*g << '\n';
    } else if (formula == "m") {
        cout << "Enter F(H): " << '\n';
        cin >> F;
        cout << "Enter g(м/с): " << '\n';
        cin >> g;
        cout << "Analysis: m = F:g\nAnswer is: m = " << F/g << '\n';
    } else if (formula == "g") {
        cout << "Enter F , m: ";
        cin >> F >> m;
        cout << "Analysis: m = F:g\nAnswer is: m = " << F/m << '\n';
    }
}

void friction_force () {
    string formula;
    float F, u, N;

    cout << "Enter unknown parameter" << '\n';
    cin >> formula;
    if (formula == "F") {
        cout << "Enter μ, N: " << '\n';
        cin >> u >> N;
        cout << "Analysis: F = μ*N\nAnswer is: F = " << u*N << '\n';
    } else if (formula == "u") {
        cout << "Enter F, N: " << '\n';
        cin >> F >> N;
        float res = F/N;
        if (res > 1) {
            cout << "⌀\nNo solves because μ must be less than 1 and more than 0\n0 < μ < 1" << '\n';
        } else if (res < 0) {
            cout << "⌀\nNo solves because μ must be less than 1 and more than 0\n0 < μ < 1" << '\n';
        } else if (res == 1) {
            cout << "impossible be in real life" << '\n';
        } else {
            cout << "Analysis: μ = F/N\nAnswer is: μ = " << F/N << '\n';
        }
    } else if (formula == "N") {
        cout << "Enter F, μ: " << '\n';
        cin >> F >> u;
        cout << "Analysis: N = F/μ\nAnswer is: N = " << F/u << '\n';
    } else {
        cout << "Un recognized input" << '\n';
    }

}

void elastic_force () {
    string formula;
    float F, k, x;

    cout << "Enter unknown parameter" << '\n';
    cin >> formula;
    if (formula == "F") {
        cout << "Enter k(H/м), △x(см): ";
        cin >> k >> x;
        cout << "Analysis: F = k△x\nAnswer is: F = " << k*x << '\n';
    } else if (formula == "k") {
        cout << "Enter F, △x: ";
        cin >> F >> x;
        cout << "Analysis: k = F/△x\nAnswer is: k = " << F/x << '\n';
    } else if (formula == "x") {
        cout << "Enter F, k: ";
        cin >> F >> k;
        cout << "Analysis: x = F/k\nAnswer is: x = " << F/k << '\n';
    } else {
        cout << "Un recognized input" << '\n';
    }

}


void pressure () {
    string formula;
    float p, F, S;
    cout << "Enter unknown parameter: " << '\n';
    cin >> formula;
    if (formula == "p") {
        cout << "Enter F(H), S: " << '\n';
        cin >> F >> S;
        cout << "Analysis: p = F/S\nAnswer is: p = " << F/S << '\n';
    } else if (formula == "F") {
        cout << "Enter ρ(Па), S: " << '\n';
        cin >> p >> S;
        cout << "Analysis: F = p・S\nAnswer is: F = " << p*S << '\n';
    } else if (formula == "S") {
        cout << "Enter F(H), ρ: " << '\n';
        cin >> F >> p;
        cout << "Analysis: S = F:p\nAnswer is: S = " << F/p << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void length () {
    string SI;
    float km, m, cm, mm;
    cout << "Enter from what to what you want to convert:\nкм в м:001\nм в км:002\nм в см:003\nсм в м:004\nсм в км:005\nкм в см:006\nмм в м:007\nм в мм:008";
    cin >> SI;
    if (SI == "001") {
        cout << "Enter length is kilometers: ";
        cin >> km;
        float length_kilometers_m = km*1000;
        cout << "Answer is: " << length_kilometers_m << '\n';
    } else if (SI == "002") {
        cout << "Enter length in meters";
        cin >> m;
        float length_meters_km = m/1000;
        cout << length_meters_km << '\n';
    } else if (SI == "003") {
        cout << "Enter length in meters" << '\n';
        cin >> m;
        float length_meters_cm = m*100;
        cout << "Answer is: "<< length_meters_cm << '\n';
    } else if (SI == "004") {
        cout << "Enter length in cm" << '\n';
        cin >> cm;
        float length_centemeters_m = cm / 100;
    } else if (SI == "005") {
        cout << "Enter length in cm: ";
        cin >> cm;
        float length_centemeters_km = cm / 100000;
        cout << "Answer is: " << length_centemeters_km << '\n';
    } else if (SI == "006") {
        cout << "Enter length in km: ";
        cin >> km;
        float length_kilometers_cm = km * 100000;
    } else if (SI == "007") {
        cout << "Enter length in mm: ";
        float mm;
        cin >> mm;
        float length_mm_m = mm / 100000;
        cout << "Answer is: " << length_mm_m << '\n';
    } else if (SI == "008") {
        cout << "Enter length in meters";
        cin >> m;
        float length_m_mm = m * 1000;
        cout << "Answer is: " << length_m_mm << '\n';
    } else {
        cout << "Error" << '\n';
    }
}


void time () {
    string SI_time;
    float seconds, minutes, hours;
    
    cout << "Enter from what to what you want to convert:\nсек в мин:001\nмин в сек:002\nч в мин:003\nмин в ч:004\nсек в ч:005\nч в сен:006";
    cin >> SI_time;
    if (SI_time == "001") {
        cout << "Enter time in seconds: ";
        cin >> seconds;
        float time_sec_min = seconds / 60;
        cout << "Answer is: " << time_sec_min << '\n';
    } else if (SI_time == "002") {
        cout << "Enter time in minutes: ";
        cin >> minutes;
        float time_min_sec = minutes * 60;
        cout << "Answer is: " << time_min_sec << '\n';
    } else if (SI_time == "004") {
        cout << "Enter time in minutes: ";
        cin >> minutes;
        float time_min_hour = minutes / 60;
        cout << "Answer is: " << time_min_hour << '\n';
    } else if (SI_time == "003") {
        cout << "Enter time in hours: ";
        cin >> hours;
        float time_hour_min = hours * 60;
        cout << "Answer is: " << time_hour_min << '\n';
    } else if (SI_time == "005") {
        cout << "Enter time in seconds: ";
        cin >> seconds;
        float time_sec_hour = seconds / 3600;
        cout << "Answer is: " << time_sec_hour << '\n';
    } else if (SI_time == "006") {
        cout << "Enter time in hours: ";
        cin >> hours;
        float time_hour_sec = hours * 3600;
        cout << "Answer is: " << time_hour_sec << '\n';
    } else {
        cout << "Error" << '\n';
    }
}
//Define a mass function;
void mass () {
    string SI_mass;
    float kg, gramms;
    
    cout << "Enter from what to what you want to convert:\nг в кг:001\nкг в г:002\n" << '\n';
    cin >> SI_mass;
    if (SI_mass == "001") {
        cout << "Enter mass in gramms: ";
        cin >> gramms;
        float mass_g_kg = gramms / 1000;
        cout << "Answer is: " << mass_g_kg<< '\n';
    } else if (SI_mass == "002") {
        cout << "Enter mass in kg: ";
        cin >> kg;
        float mass_kg_g = kg * 1000;
        cout << "Answer is: " << mass_kg_g << '\n';
    } else {
        cout << "Sorry" << '\n';
    }
}

//Define a temp function;
void temprature () {
    string SI_temprature;
    float celsius, farengeit, kelvin;
    cout << "Enter from what to what you want to convert:\nCelsius in Kelvin:001\nKelvin in Celsius:002\nFarengeit in Kelvin:003\nKelvin in Farengeit:004\nCelsius in Farengeit:005" << '\n';
    cin >> SI_temprature;
    if (SI_temprature == "001") {
        cout << "Enter temprature in celsius: ";
        cin >> celsius;
        float temprature_c_k = celsius + 273.15;
        cout << "Answer is: " << temprature_c_k << '\n';
    } else if (SI_temprature == "002") {
        cout << "Enter temprature in Kelvin: ";
        cin >> kelvin;
        float temprature_k_c = kelvin - 273.15;
        cout << "Answer is: " << temprature_k_c << '\n';
    } else if (SI_temprature == "003") {
        cout << "Enter temprature in Farengeit: ";
        cin >> farengeit;
        float temprature_f_k = (farengeit-32)*5/9 + 273.15;
        cout << "Answer is: " << temprature_f_k << '\n';
    } else if (SI_temprature == "004") {
        cout << "Enter temprature in Kelvin: ";
        cin >> kelvin;
        float temprature_k_f = (kelvin-273.15)*9/5 + 32;
        cout << "Answer is: " << temprature_k_f << '\n';
    } else if (SI_temprature == "005") {
        cout << "Enter temprature in celsius: ";
        cin >> celsius;
        float temprature_c_f = (celsius*9/5) + 32;
        cout << "Answer is: " << temprature_c_f << '\n';
    } else {
        cout << "4o4" << '\n';
    }
}

//Define a speed function;
void speed () {
    string SI_speed;
    float kmph, mps;

    cout << "Enter from what to what you want to convert:\nкм/ч в м/с:001\nм/с в км/ч:002";
    cin >> SI_speed;
    if (SI_speed == "001") {
        cout << "Enter speed in km/h: ";
        cin >> kmph;
        float speed_kmph_mps = kmph / 3.6;
        cout << "Answer is: " << speed_kmph_mps << '\n';
    } else if (SI_speed == "002") {
        cout << "Enter speed in m/s: ";
        cin >> mps;
        float speed_mps_kmph = mps * 3.6;
        cout << "Answer is: " << speed_mps_kmph << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

//Define a volume function;
void volume () {
    string SI_volume;
    float cm3, m3;
    cout << "Enter from what to what you want to convert:\nсм3 в м3:001\nм3 в см3:002:002 ";
    cin >> SI_volume;
    if (SI_volume == "001") {
        cout << "Enter volume in cm3: ";
        cin >> cm3;
        float volume_cm3_m3 = cm3 / 1000000;
        cout << "Answer is: " << volume_cm3_m3 << '\n';
    } else if (SI_volume == "002") {
        cout <<"Enter volume in m3: ";
        cin >> m3;
        float volume_m3_cm3 = m3 * 1000000;
        cout << "Answer is: " << volume_m3_cm3 << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

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
    float ρ, g = 10, P, h;
    cout << "Enter unknown parameter: ";
    cin >> unexpected;
    if (unexpected == "h") {
        cout << "Enter ρ, P: ";
        cin >> ρ >> P;
        cout << "Analysis: h = P/ρg\nAnswer is: h = " << P/ρ*g << '\n';
    } else if (unexpected == "ro") {
        cout << "Enter P, h";
        cin >> P >> h;
        cout << "Analysis: ρ = P/gh\nAnswer is: ρ = " << P/g*h << '\n';
    } else if (unexpected == "P") {
        cout << "Enter ρ, h: ";
        cin >> ρ >> h;
        cout << "Analysis: P = ρgh\nAnswer is: P = " << ρ*g*h << '\n';
    } else if (unexpected == "g") {
        cout << "g is always 9.8 rounded to 10" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void gidravlical () {
    string F_input;
    float F1, S1, S2, h1, h2, F2;

    cout << "Enter unknown parameter: ";
    cin >> F_input;
    if (F_input == "F2") {
        cout << "Enter F1, S1, S2: ";
        cin >> F1 >> S1 >> S2;
        cout << "Analysis: F2 = F1・S1:S2\nAnswer is: F2 = " << F1*S1/S2 << "H" << '\n';
    } else if (F_input == "F1") {
        cout << "Enter F2, S2, S1: ";
        cin >> F2 >> S2 >> S1;
        cout << "Analysis: F1 = F2・S2:S1\nAnswer is: F1 = " << F2*S2/S1 << "H" << '\n';
    } else if (F_input == "S1") {
        cout << "Enter F1, F2, S2: ";
        cin >> F1 >> F2 >> S2;
        cout << "Analysis: S1 = F2・S2:F1\nAnswer is: S1 = " << F2*S2/F1 << "м2" << '\n';
    } else if (F_input == "S2") {
        cout << "Enter F1, F2, S1: ";
        cin >> F1 >> F2 >> S1;
        cout << "Enter F2: ";
        cout << "Analysis: S2 = F1・S1:F2\nAnswer is: S2 = " << F1*S1/F2 << "м2" << '\n';
    } else if (F_input == "h1") {
        cout << "Enter F1, h2, F2: ";
        cin >> F1 >> h2 >> F2;
        cout << "Analysis: h1 = F2・h2:F1\nAnswer is: h1 = " << F2*h2/F1 << "м" << '\n';
    } else if (F_input == "h2") {
        cout << "Enter F1, F2, h1: ";
        cin >> F1 >> F2 >> h1;
        cout << "Analysis: h2 = F1・h1:F2\nAnwer is: h2 = " << F1*h1/F2 << "м" << '\n';
    } else {
        cout << "5o5" << '\n';
    }
}

//Define a func of Communicating Vessels;
void Communicating_Vessels () {
    string unknown;
    float h2, p2, h1, p1;

    cout << "Enter unknown parameter: ";
    cin >> unknown;
    if (unknown == "p1") {
        cout << "Enter h2, p2, h1: ";
        cin >> h2 >> p2 >> h1;
        cout << "Analysis: p1 = h2・p2:h1\nAnswer is: p1 = " << h2*p2/h1 << '\n';
    } else if (unknown == "p2") {
        cout << "Enter p1, h1, h2: ";
        cin >> p1 >> h1 >> h2;
        cout << "Analysis: p2 = p1・h1:h2\nAnswer is: p2 = " << p1*h1/h2 << '\n';
    } else if (unknown == "h2") {
        cout << "Enter p1, p2, h1: ";
        cin >> p1 >> p2 >> h1;
        cout << "Analysis: h2 = p1・h1:p2\nAnswer is: h2 = " << p1*h1/h2 << '\n';
    } else if (unknown == "h1") {
        cout << "Enter p1, p2, h2: ";
        cin >> p1 >> p2 >> h2;
        cout << "Analysis: h1 = p2・h2:p1\nAnswer is: h1 = " << p2*h2/p1 << '\n';
    } else {
        cout << "Something get wrong" << '\n';
    }
}

void archimed () {
    string Unknown;
    float p, Fa, V;

    cout << "Enter unknown parameter: ";
    cin >> Unknown;
    if (Unknown == "p") {
        cout << "Enter Fa(H): ";
        cin >> Fa;
        cout << "Enter V(м3): ";
        cin >> V;
        cout << "Analysis: p = Fa:gV\nAnswer is: p = " << Fa/10*V << "кг/м3" << '\n';
    } else if (Unknown == "Fa") {
        cout << "Enter p(кг/м3): ";
        cin >> p;
        cout << "Enter V(м3): ";
        cin >> V;
        cout << "Analysis: Fa = ρgV\nAnswer is: Fa = " << p*10*V << "H" << '\n';
    } else if (Unknown == "V") {
        cout << "Enter Fa(H): ";
        cin >> Fa;
        cout << "Enter p(кг/м3): ";
        cin >> p;
        cout << "Analysis: V = Fa:ρg\nAnswer is: V = " << Fa/p*10 << "м3" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void potential_energy() {
    string unknown;
    float m, h, Ep;
    cout << "Enter unknown parameter: ";
    cin >> unknown;
    if (unknown == "Ep") {
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Enter h(м): ";
        cin >> h;
        cout << "Analysis: Ep = mgh\nAnswer is Ep = " << m*10*h << "[Дж]" << '\n';
    } else if (unknown == "m") {
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Enter h(м): ";
        cin >> h;
        cout << "Analysis: m = Ep/gh\nAnswer is m = " << Ep/10*h << '\n';
    } else if (unknown == "h") {
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Analysis: h = Ep/mg\nAnswer is h = " << Ep/m*10 << '\n';
    } else {
        cout << "Sorry" << '\n';
    }

}

void elastic_deform() {
    string unknown;
    float k, x, Ep;
    cout << "Enter unknown parameter: ";
    cin >> unknown;
    if (unknown == "Ep")
    {
        cout << "Enter k(H/м): ";
        cin >> k;
        cout << "Enter △x(см): ";
        cin >> x;
        cout << "Analysis: Ep = k△x^2/2\nAnswer is Ep = " << (k*pow(x, 2))/2 << "[Дж]" << '\n';
    } else if (unknown == "k")
    {
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Enter △x(см): ";
        cin >> x;
        cout << "Analysis: k = 2・Ep/△x^2\nAnswer is k = " << 2*Ep/pow(x, 2) << "[H/м]" << '\n';
    } else if (unknown == "x")
    {
        cout << "Enter Ep(Дж): ";
        cin >> Ep;
        cout << "Enter k(H/м): ";
        cin >> k;
        cout << "Analysis: △x = √2・Ep/k\nAnswer is △x = " << sqrt(2*Ep/k) << "[см]" << '\n';
    } else
    {
        cout << "you made a mistake in one parameter" << '\n';
    }
}

void kinetic_energy() {
    string not_given;
    float m, V, Ek;
    cout << "Enter unknown parameter: ";
    cin >> not_given;
    if (not_given == "Ek")
    {
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Enter V(м/с): ";
        cin >> V;
        cout << "Analysis: Ek = m・V^2/2\nAnswer is Ek = " << (m*pow(V, 2))/2 << "[Дж]" << '\n';
    } else if (not_given == "m")
    {
        cout << "Enter Ek(Дж): ";
        cin >> Ek;
        cout << "Enter V(м/с): ";
        cin >> V;
        cout << "Analysis: m = 2・Ek/V^2\nAnswer is m = " << 2*Ek/pow(V, 2) << "[кг]" << '\n';
    } else if (not_given == "V")
    {
        cout << "Enter Ek(Дж): ";
        cin >> Ek;
        cout << "Enter m(кг): ";
        cin >> m;
        cout << "Analysis: V = 2・Ek/m\nAnswer is V = " << sqrt(2*Ek/m) << "[м/c]" << '\n';
    } else
    {
        cout << "There is a mistake" << '\n';
    }
}

void law_of_energy_conservation() {
    string unknown, yes_or_no;
    float Ek, Ep, Em, V, h, m, g;
    cout << "Enter unknown parameter: ";
    cin >> unknown;
    if (unknown == "Em")
    {
        cout << "Do you know Ek and Ep?(y/n): ";
        cin >> yes_or_no;
        if (yes_or_no == "y")
        {
            cout << "Enter Ek(Дж): ";
            cin >> Ek;
            cout << "Enter Ep(Дж): ";
            cin >> Ep;
            cout << "Analysis: Em = Ek + Ep\nAnwer is Em = " << Ek + Ep << "[Дж]" << '\n';
        } else if (yes_or_no == "n")
        {
            cout << "There is kinetic energy" << '\n';
            kinetic_energy();
            cout << '\n' << "There is potential energy" << '\n';
            potential_energy();
        }
    } else if (unknown == "V")
    {
        cout << "Enter h(м): ";
        cin >> h;
        cout << "Enter g: ";
        cin >> g;
        cout << "Analysis: √2gh\nAnwer is V = " << sqrt(2*g*h) << "[м/с]" << '\n';
    } else if (unknown == "h")
    {
        cout << "Enter V(м/с): ";
        cin >> V;
        cout << "Enter g: ";
        cin >> g;
        cout << "Analysis: h = V^2/2g\nAnswer is h = " << pow(V, 2)/2*g << "[м]" << '\n';
    } else
    {
        cout << "There is a mistake" << '\n';
    }
}