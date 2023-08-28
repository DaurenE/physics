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

        cout << "Введите тип задачи:\nВведите 'stop' для остановки\nПлотность:0, механическая_работа:1, инерция:2\nсредняя_скорость:3, мощность:4, сила тяжести:5,\nсила трения:6, сила упругости:7, \nДавление:8, Давление в жидкостях и газах:9,\nперевод в СИ:10, Гидравличесская машина:11, ";
        cout << "Сообщающиеся сосуды:12,\nсила Архимеда:13, плотность сплава:14, Потенциальная энергия:15,\nКинетичесская энергия:16, Упругая деформация:17, Закон сохранения энергии:18:\n";
        cin >> main_task;

        if (main_task == "stop") {
            break;
        }

        switch (stoi(main_task)) {
            case 0:
                cout << "Ваш выбор: 'плотность'" << '\n';
                density();
                break;
            case 1:
                cout << "Ваш выбор: 'механическая_работа'" << '\n';
                mechanical_work();
                break;
            case 2:
                cout << "Ваш выбор: 'инерция'" << '\n';
                inertia();
                break;
            case 3:
                cout << "Ваш выбор: 'средняя_скорость'" << '\n';
                average_speed();
                break;
            case 4:
                cout << "Ваш выбор: 'мощность'" << '\n';
                power();
                break;
            case 5:
                cout << "Ваш выбор: 'сила тяжести'" << '\n';
                gravity();
                break;
            case 6:
                cout << "Ваш выбор: 'сила трения'" << '\n';
                friction_force();
                break;
            case 7:
                cout << "Ваш выбор: сила 'упругости'" << '\n';
                elastic_force();
                break;
            case 8:
                cout << "Ваш выбор: 'Давление'" << '\n';
                pressure();
                break;
            case 9:
                cout << "Ваш выбор: 'Давление в жидкостях и газах'" << '\n';
                pressure_in_liquds();
                break;
            case 10:
                cout << "Ваш выбор: 'перевод в СИ'" << '\n';
                SI_categories();
                break;
            case 11:
                cout << "Ваш выбор: 'Гидравлическая машина'" << '\n';
                gidravlical();
                break;
            case 12:
                cout << "Ваш выбор: 'Сообщающиеся сосуды'" << '\n';
                Communicating_Vessels();
                break;
            case 13:
                cout << "Ваш выбор: 'сила Архимеда'" << '\n';
                archimed();
                break;
            case 14:
                cout << "Ваш выбор: 'плотность сплава'" << '\n';
                Density_splava();
                break;
            case 15:
                cout << "Ваш выбор: 'Потенциальная энергия'" << '\n';
                potential_energy();
                break;
            case 16:
                cout << "Ваш выбор: 'Кинетическая энергия'" << '\n';
                kinetic_energy();
                break;
            case 17:
                cout << "Ваш выбор: 'Упругая деформация'" << '\n';
                elastic_deform();
                break;
            case 18:
                cout << "Ваш выбор: 'Закон сохранения энергии'" << '\n';
                law_of_energy_conservation();
                break;
            default:
                cout << "Неверный выбор. Пожалуйста введите верную опцию." << '\n';
                break;
        }   
        cout << "\n" << '\n';

    }
    return 0;
}

void mechanical_work() {
    float A, N, t, F, V;
    string unknown;

    cout << "Введите неизвестный параметр (A, N, t): " << '\n';
    cin >> unknown;
    if (unknown == "A") {
        cout << "Введите N, t: ";
        cin >> N >> t;
        cout << "A = " << N/t << "[Дж]" << '\n';
    } else if (unknown == "N") {
        cout << "Введите A, t: ";
        cin >> A >> t;
        cout << "N = " << A/t << "[Вт]" << '\n';
    } else if (unknown == "t") {
        cout << "Введите A, N: ";
        cin >> A >> N;
        cout << "t = " << N/A << "[сек]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}
// Define function for solving density
void density() {
    float ro, m, v;
    string formula;

    cout << "Введите неизвестный параметр (p, m, v): " << '\n';
    cin >> formula;

    if (formula == "p") {
        cout << "Введите m(кг), v(м3): ";
        cin >> m >> v;
        cout << "p = " << m/v << "[кг/м3]" << '\n';
    } else if (formula == "m") {
        cout << "Введите p(кг/м3), v(м3): ";
        cin >> ro, v;
        cout << "m = " << ro*v << "[кг]" << '\n';
    } else if (formula == "v") {
        cout << "Введите m, ρ: ";
        cin >> m >> ro;
        cout << "v = " << m/ro << "[м3]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void Density_splava () {
    float m1, m2, v1, v2;
    cout << "Введите m1(кг): ";
    cin >> m1;
    cout << "Введите m2(кг): ";
    cin >> m2;
    cout << "Введите v1(м3): ";
    cin >> v1;
    cout << "Введите v2(м3): ";
    cin >> v2;
    cout << "Анализ: ρсп = (m1 + m2):(v1 + v2)\nОтвет: ρсп = " << (m1 + m2)/(v1 + v2) << "[кг/м3]" << '\n';
}

void inertia () {
    string formula;
    float m1, m2, v1, v2;

    cout << "Введите неизвестный параметр (m1, m2, v1, v2): ";
    cin >> formula;

    if (formula == "m1") {
        cout << "Введите m2, v1, v2: " << '\n';
        cin >> m2 >> v1 >> v2;
        cout << "Анализ: m1 = m2*v2:v1\n";
        cout << "Ответ: m1 = " << m2*v2/v1 << '\n';
    } else if (formula == "m2") {
        cout << "Введите m1, v1, v2: " << '\n';
        cin >> m1 >> v1 >> v2;
        cout << "Анализ: m2 = m1*v1:v2\n";
        cout << "Ответ: m2 = " << m1*v1/v2 << '\n';
    } else if (formula == "v1") {
        cout << "Введите m2, v2, m1: " << '\n';
        cin >> m2 >> v2 >> m1;
        cout << "Анализ: v1 = m2*v2:m1\n";
        cout << "Ответ: v1 = " << m2*v2/m1 << '\n';
    } else if (formula == "v2") {
        cout << "Введите m1, v1, m2: " << '\n';
        cin >> m1 >> v1 >> m2;
        cout << "Анализ: v2 = m1*v1:m2\n";
        cout << "Ответ: v2 = " << m1*v1/m2 << '\n';
    } else {
        cout << "Error" << '\n';
    }

}

void average_speed () {
    float S1, S2, V1, V2, t1, t2;

    cout << "Введите S1(м): " << '\n';
    cin >> S1;
    cout << "Введите S2(м): " << '\n';
    cin >> S2;
    if (S1 == S2) {
        cout << "Введите V1(м/с) V2(м/с): " << '\n';
        cin >> V1 >> V2;
        cout << "Анализ: 2・V1・V2 : V1 + V2" << '\n';
        cout << "Vср = " << 2*V1*V2 / (V1+V2) << '\n';
    } else if (S1 != S2) {
        cout << "Введите t1(сек) t2(сек): " << '\n';
        cin >> t1 >> t2;
        cout << "Анализ: S1 + S2/t1 + t2" << '\n';
        cout << "Ответ: " << (S1+S2)/(t1+t2) << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void power () {
    string formula;
    float A, t, N, F, V;
    cout << "Введите неизвестный параметр (N, A, t, V, F): ";
    cin >> formula;
    if (formula == "N") {
        cout << "Введите A(Дж), t(сек): " << '\n';
        cin >> A >> t;
        cout << "Анализ: N = A / t" << '\n';
        cout << "Ответ:\nN = " << A / t << "[Вт]" << '\n';
    } else if (formula == "A") {
        cout << "Введите N(Вт), t(сек): " << '\n';
        cin >> N >> t;
        cout << "Анализ: A = N・t\nОтвет: A = " << N*t << "[Дж]" << '\n';
    } else if (formula == "t") {
        cout << "Введите N(Вт), A(Дж): " << '\n';
        cin >> N >> A;
        cout << "Анализ: t = A/N\nОтвет: t = " << A/N << "[сек]" << '\n';
    } else if (formula == "V") {
        cout << "Введите F(Н), N(Вт): " << '\n';
        cin >> F, N;
        cout << "Анализ: V = N/F\nОтвет: V = " << N/F << "[м/с]" << '\n';
    } else if (formula == "F") {
        cout << "Введите N(Вт), V(м/с): " << '\n';
        cin >> N >> V;
        cout << "Анализ: F = N/V\nОтвет: F = " << N/V << "[H]" << '\n';
    } else {
        cout << "*Error*" << '\n';
    }
}

void gravity () {
    string formula;
    float m, F, g;

    cout << "Значения в H / кг:\n Меркурий 3,7\n Венера 8,9\n Земля 9,8\n Марс 3,7\n Юпитер 24,9\n Сатурн 10,6\n Уран 8,7\n Нептун 11,6\n Солнце 274\n Луна 1,6" << '\n';
    cout << "Введите неизвестный параметр (F, m, g)" << '\n';
    cin >> formula;
    if (formula == "F") {
        cout << "Введите m(кг) g(м/с2): ";
        cin >> m >> g;
        cout << "Анализ: F = mg\nОтвет: F = " << m*g << "[H]" << '\n';
    } else if (formula == "m") {
        cout << "Введите F(H) g(м/с2): " << '\n';
        cin >> F >> g;
        cout << "Анализ: m = F:g\nОтвет: m = " << F/g << "[кг]" << '\n';
    } else if (formula == "g") {
        cout << "Введите F , m: ";
        cin >> F >> m;
        cout << "Анализ: m = F:g\nОтвет: m = " << F/m << "[м/с2]" << '\n';
    } else {
        cout << "Error\n";
    }
}

void friction_force () {
    string formula;
    float F, u, N;

    cout << "Введите неизвестный параметр (F, μ, N)" << '\n';
    cin >> formula;
    if (formula == "F") {
        cout << "Введите μ, N: " << '\n';
        cin >> u >> N;
        cout << "Анализ: F = μ*N\nОтвет: F = " << u*N << "[H]" << '\n';
    } else if (formula == "u") {
        cout << "Введите F, N: " << '\n';
        cin >> F >> N;
        float res = F/N;
        if (res > 1 || res < 0) {
            cout << "⌀\nНет решений так как μ должен быть меньшес1 и больше 0\n0 < μ < 1" << '\n';
        } else if (res == 1) {
            cout << "Невозможно в реальности" << '\n';
        } else {
            cout << "Анализ: μ = F/N\nОтвет: μ = " << F/N << '\n';
        }
    } else if (formula == "N") {
        cout << "Введите F, μ: " << '\n';
        cin >> F >> u;
        cout << "Анализ: N = F/μ\nОтвет: N = " << F/u << "[H]" << '\n';
    } else {
        cout << "Error" << '\n';
    }

}

void elastic_force () {
    string formula;
    float F, k, x;

    cout << "Введите неизвестный параметр (F, k, △x)" << '\n';
    cin >> formula;
    if (formula == "F") {
        cout << "Введите k(H/м), △x(см): ";
        cin >> k >> x;
        cout << "Анализ: F = k△x\nОтвет: F = " << k*x << "[H]" << '\n';
    } else if (formula == "k") {
        cout << "Введите F, △x: ";
        cin >> F >> x;
        cout << "Анализ: k = F/△x\nОтвет: k = " << F/x << "[Н/м]" << '\n';
    } else if (formula == "x") {
        cout << "Введите F, k: ";
        cin >> F >> k;
        cout << "Анализ: x = F/k\nОтвет: x = " << F/k << "[s]" << '\n';
    } else {
        cout << "Error" << '\n';
    }

}


void pressure () {
    string formula;
    float p, F, S;
    cout << "Введите неизвестный параметр (p, F, S): " << '\n';
    cin >> formula;
    if (formula == "p") {
        cout << "Введите F(H), S: " << '\n';
        cin >> F >> S;
        cout << "Анализ: p = F/S\nОтвет: p = " << F/S << "[Па]" << '\n';
    } else if (formula == "F") {
        cout << "Введите ρ(Па), S: " << '\n';
        cin >> p >> S;
        cout << "Анализ: F = p・S\nОтвет: F = " << p*S << "[Н]" << '\n';
    } else if (formula == "S") {
        cout << "Введите F(H), ρ: " << '\n';
        cin >> F >> p;
        cout << "Анализ: S = F:p\nОтвет: S = " << F/p << "[м2]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void length () {
    string SI;
    float km, m, cm, mm;
    cout << "Введите из чего во что хотите перевести:\nкм в м | 001\nм в км | 002\nм в см | 003\nсм в м | 004\nсм в км | 005\nкм в см | 006\nмм в м | 007\nм в мм | 008";
    cin >> SI;
    if (SI == "001") {
        cout << "Введите длину в километрах: ";
        cin >> km;
        float length_kilometers_m = km*1000;
        cout << "Ответ: " << length_kilometers_m << "[м]" << '\n';
    } else if (SI == "002") {
        cout << "Введите длину в метрах";
        cin >> m;
        float length_meters_km = m/1000;
        cout << "Ответ: " << length_meters_km << "[км]" << '\n';
    } else if (SI == "003") {
        cout << "Введите длину в метрах" << '\n';
        cin >> m;
        float length_meters_cm = m*100;
        cout << "Ответ: "<< length_meters_cm << "[cм]" << '\n';
    } else if (SI == "004") {
        cout << "Введите длину в cm" << '\n';
        cin >> cm;
        float length_centemeters_m = cm / 100;
        cout << "Ответ: " << length_centemeters_m << "[м]" << '\n';
    } else if (SI == "005") {
        cout << "Введите длину в cm: ";
        cin >> cm;
        float length_centemeters_km = cm / 100000;
        cout << "Ответ: " << length_centemeters_km << "[км]" << '\n';
    } else if (SI == "006") {
        cout << "Введите длину в km: ";
        cin >> km;
        float length_kilometers_cm = km * 100000;
        cout << "Ответ: " << length_kilometers_cm << "[см]" << '\n';
    } else if (SI == "007") {
        cout << "Введите длину в mm: ";
        float mm;
        cin >> mm;
        float length_mm_m = mm / 100000;
        cout << "Ответ: " << length_mm_m << "[м]" << '\n';
    } else if (SI == "008") {
        cout << "Введите длину в метрах";
        cin >> m;
        float length_m_mm = m * 1000;
        cout << "Ответ: " << length_m_mm << "[мм]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}


void time () {
    string SI_time;
    float seconds, minutes, hours;
    
    cout << "Введите из чего во что хотите перевести:\nсек в мин | 001\nмин в сек | 002\nч в мин | 003\nмин в ч | 004\nсек в ч | 005\nч в сек | 006";
    cin >> SI_time;
    if (SI_time == "001") {
        cout << "Введите время в секундах: ";
        cin >> seconds;
        float time_sec_min = seconds / 60;
        cout << "Ответ: " << time_sec_min << "[мин]" << '\n';
    } else if (SI_time == "002") {
        cout << "Введите время в минутах: ";
        cin >> minutes;
        float time_min_sec = minutes * 60;
        cout << "Ответ: " << time_min_sec << "[сек]" << '\n';
    } else if (SI_time == "004") {
        cout << "Введите время в минутах: ";
        cin >> minutes;
        float time_min_hour = minutes / 60;
        cout << "Ответ: " << time_min_hour << "[ч]" << '\n';
    } else if (SI_time == "003") {
        cout << "Введите время в часах: ";
        cin >> hours;
        float time_hour_min = hours * 60;
        cout << "Ответ: " << time_hour_min << "[мин]" << '\n';
    } else if (SI_time == "005") {
        cout << "Введите время в секундах: ";
        cin >> seconds;
        float time_sec_hour = seconds / 3600;
        cout << "Ответ: " << time_sec_hour << "[ч]" << '\n';
    } else if (SI_time == "006") {
        cout << "Введите время в часах: ";
        cin >> hours;
        float time_hour_sec = hours * 3600;
        cout << "Ответ: " << time_hour_sec << "[сек]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}
//Define a mass function;
void mass () {
    string SI_mass;
    float kg, gramms;
    
    cout << "Введите из чего во что хотите перевести:\nг в кг | 001\nкг в г | 002\n";
    cin >> SI_mass;
    if (SI_mass == "001") {
        cout << "Введите массу в граммах: ";
        cin >> gramms;
        float mass_g_kg = gramms / 1000;
        cout << "Ответ: " << mass_g_kg<< "[кг]" << '\n';
    } else if (SI_mass == "002") {
        cout << "Введите массу в кг: ";
        cin >> kg;
        float mass_kg_g = kg * 1000;
        cout << "Ответ: " << mass_kg_g << "[г]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

//Define a speed function;
void speed () {
    string SI_speed;
    float kmph, mps;

    cout << "Введите из чего во что хотите перевести:\nкм/ч в м/с | 001\nм/с в км/ч | 002";
    cin >> SI_speed;
    if (SI_speed == "001") {
        cout << "Введите скорость в км/ч: ";
        cin >> kmph;
        float speed_kmph_mps = kmph / 3.6;
        cout << "Ответ: " << speed_kmph_mps << "[м/с]" << '\n';
    } else if (SI_speed == "002") {
        cout << "Введите скорость в м/с: ";
        cin >> mps;
        float speed_mps_kmph = mps * 3.6;
        cout << "Ответ: " << speed_mps_kmph << "[км/ч]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

//Define a volume function;
void volume () {
    string SI_volume;
    float cm3, m3;
    cout << "Введите из чего во что хотите перевести:\nсм3 в м3 | 001\nм3 в см3 | 002";
    cin >> SI_volume;
    if (SI_volume == "001") {
        cout << "Введите объём в cm^3: ";
        cin >> cm3;
        float volume_cm3_m3 = cm3 / 1000000;
        cout << "Ответ: " << volume_cm3_m3 << "[м3]" << '\n';
    } else if (SI_volume == "002") {
        cout <<"Введите объём в m^3: ";
        cin >> m3;
        float volume_m3_cm3 = m3 * 1000000;
        cout << "Ответ: " << volume_m3_cm3 << "[см3]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void SI_categories () {
    string SI, categories;
    float km, m, cm;
    
    cout << "Что вы хотите перевести (длина:1, время:2, масса:3, скорость:4, объём:5)\n";
    cin >> categories;

//Cheking inputs;
    if (categories == "1") {
        length();
    } else if (categories == "2") {
        time();
    } else if (categories == "3") {
        mass();
    } else if (categories == "4") {
        speed();
    } else if (categories == "5") {
        volume();
    }


}

void pressure_in_liquds () {
    string unexpected;
    float ρ, g, P, h;
    cout << "Введите неизвестный параметр (h, g, P, ro(ρ)): ";
    cin >> unexpected;
    if (unexpected == "h") {
        cout << "Введите ρ, P, g: ";
        cin >> ρ >> P >> g;
        cout << "Анализ: h = P/ρg\nОтвет: h = " << P/ρ*g << "[м]" << '\n';
    } else if (unexpected == "ro") {
        cout << "Введите P, h";
        cin >> P >> h >> g;
        cout << "Анализ: ρ = P/gh\nОтвет: ρ = " << P/g*h << "[кг/м3]" << '\n';
    } else if (unexpected == "P") {
        cout << "Введите ρ, h, g: ";
        cin >> ρ >> h >> g;
        cout << "Анализ: P = ρgh\nОтвет: P = " << ρ*g*h << "[Па]" << '\n';
    } else if (unexpected == "g") {
        cout << "Введите ρ, P, h: ";
        cin >> ρ >> P >> h;
        cout << "Anays: g = P/ρh\nОтвет: " << P/ρ*h << "[м/с2]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void gidravlical () {
    string F_input;
    float F1, S1, S2, h1, h2, F2;

    cout << "Введите неизвестный параметр (F1, F2, S1, S2, h1, h2): ";
    cin >> F_input;
    if (F_input == "F2") {
        cout << "Введите F1, S1, S2: ";
        cin >> F1 >> S1 >> S2;
        cout << "Анализ: F2 = F1・S1:S2\nОтвет: F2 = " << F1*S1/S2 << "[H]" << '\n';
    } else if (F_input == "F1") {
        cout << "Введите F2, S2, S1: ";
        cin >> F2 >> S2 >> S1;
        cout << "Анализ: F1 = F2・S2:S1\nОтвет: F1 = " << F2*S2/S1 << "[H]" << '\n';
    } else if (F_input == "S1") {
        cout << "Введите F1, F2, S2: ";
        cin >> F1 >> F2 >> S2;
        cout << "Анализ: S1 = F2・S2:F1\nОтвет: S1 = " << F2*S2/F1 << "[м2]" << '\n';
    } else if (F_input == "S2") {
        cout << "Введите F1, F2, S1: ";
        cin >> F1 >> F2 >> S1;
        cout << "Введите F2: ";
        cout << "Анализ: S2 = F1・S1:F2\nОтвет: S2 = " << F1*S1/F2 << "[м2]" << '\n';
    } else if (F_input == "h1") {
        cout << "Введите F1, h2, F2: ";
        cin >> F1 >> h2 >> F2;
        cout << "Анализ: h1 = F2・h2:F1\nОтвет: h1 = " << F2*h2/F1 << "[м]" << '\n';
    } else if (F_input == "h2") {
        cout << "Введите F1, F2, h1: ";
        cin >> F1 >> F2 >> h1;
        cout << "Анализ: h2 = F1・h1:F2\nAnwer: h2 = " << F1*h1/F2 << "[м]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

//Define a func of Communicating Vessels;
void Communicating_Vessels () {
    string unknown;
    float h2, p2, h1, p1;

    cout << "Введите неизвестный параметр (p1, h1, p2, h2): ";
    cin >> unknown;
    if (unknown == "p1") {
        cout << "Введите h2, p2, h1: ";
        cin >> h2 >> p2 >> h1;
        cout << "Анализ: p1 = h2・p2:h1\nОтвет: p1 = " << h2*p2/h1 << "[кг/м3]" << '\n';
    } else if (unknown == "p2") {
        cout << "Введите p1, h1, h2: ";
        cin >> p1 >> h1 >> h2;
        cout << "Анализ: p2 = p1・h1:h2\nОтвет: p2 = " << p1*h1/h2 << "[кг/м3]" << '\n';
    } else if (unknown == "h2") {
        cout << "Введите p1, p2, h1: ";
        cin >> p1 >> p2 >> h1;
        cout << "Анализ: h2 = p1・h1:p2\nОтвет: h2 = " << p1*h1/h2 << "[м]" << '\n';
    } else if (unknown == "h1") {
        cout << "Введите p1, p2, h2: ";
        cin >> p1 >> p2 >> h2;
        cout << "Анализ: h1 = p2・h2:p1\nОтвет: h1 = " << p2*h2/p1 << "[м]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void archimed () {
    string unknown;
    float p, Fa, V;

    cout << "Ускорение свободногго падения (g) ~ 10\nВведите неизвестный параметр (p, FA, V): ";
    cin >> unknown;
    if (unknown == "p") {
        cout << "Введите Fa(H) V(м3): ";
        cin >> Fa >> V;
        cout << "Анализ: p = Fa:gV\nОтвет: p = " << Fa/10*V << "[кг/м3]" << '\n';
    } else if (unknown == "Fa") {
        cout << "Введите p(кг/м3) V(м3): ";
        cin >> p >> V;
        cout << "Анализ: Fa = ρgV\nОтвет: Fa = " << p*10*V << "[H]" << '\n';
    } else if (unknown == "V") {
        cout << "Введите Fa(H) p(кг/м3): ";
        cin >> Fa >> p;
        cout << "Анализ: V = Fa:ρg\nОтвет: V = " << Fa/p*10 << "[м3]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void potential_energy() {
    string unknown;
    float m, h, Ep;
    cout << "Введите неизвестный параметр (m, h, Ep): ";
    cin >> unknown;
    if (unknown == "Ep") {
        cout << "Введите m(кг) h(м): ";
        cin >> m >> h;
        cout << "Анализ: Ep = mgh\nОтвет Ep = " << m*10*h << "[Дж]" << '\n';
    } else if (unknown == "m") {
        cout << "Введите Ep(Дж) h(м): ";
        cin >> Ep >> h;
        cout << "Анализ: m = Ep/gh\nОтвет m = " << Ep/10*h << '\n';
    } else if (unknown == "h") {
        cout << "Введите m(кг) Ep(Дж): ";
        cin >> m >> Ep;
        cout << "Анализ: h = Ep/mg\nОтвет h = " << Ep/m*10 << '\n';
    } else {
        cout << "Error" << '\n';
    }

}

void elastic_deform() {
    string unknown;
    float k, x, Ep;
    cout << "Введите неизвестный параметр (k, △x, Ep): ";
    cin >> unknown;
    if (unknown == "Ep") {
        cout << "Введите k(H/м) △x(см): ";
        cin >> k >> x;
        cout << "Анализ: Ep = k△x^2/2\nОтвет Ep = " << (k*pow(x, 2))/2 << "[Дж]" << '\n';
    } else if (unknown == "k") {
        cout << "Введите Ep(Дж) △x(см): ";
        cin >> Ep >> x;
        cout << "Анализ: k = 2・Ep/△x^2\nОтвет k = " << 2*Ep/pow(x, 2) << "[H/м]" << '\n';
    } else if (unknown == "x") {
        cout << "Введите Ep(Дж) k(H/м): ";
        cin >> Ep >> k;
        cout << "Анализ: △x = √2・Ep/k\nОтвет △x = " << sqrt(2*Ep/k) << "[см]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void kinetic_energy() {
    string unknown;
    float m, V, Ek;
    cout << "Введите неизвестный параметр (m, V, Ek): ";
    cin >> unknown;
    if (unknown == "Ek") {
        cout << "Введите m(кг) V(м/с): ";
        cin >> m >> V;
        cout << "Анализ: Ek = m・V^2/2\nОтвет Ek = " << (m*pow(V, 2))/2 << "[Дж]" << '\n';
    } else if (unknown == "m") {
        cout << "Введите Ek(Дж) V(м/с): ";
        cin >> Ek >> V;
        cout << "Анализ: m = 2・Ek/V^2\nОтвет m = " << 2*Ek/pow(V, 2) << "[кг]" << '\n';
    } else if (unknown == "V") {
        cout << "Введите Ek(Дж) m(кг): ";
        cin >> Ek >> m;
        cout << "Анализ: V = 2・Ek/m\nОтвет V = " << sqrt(2*Ek/m) << "[м/c]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}

void law_of_energy_conservation() {
    string unknown, yes_or_no;
    float Ek, Ep, Em, V, h, m, g;
    cout << "Введите неизвестный параметр (Ek, Ep, Em, V, h, m, g): ";
    cin >> unknown;
    if (unknown == "Em") {
        cout << "Знаешь ли ты Еп и Ек?(y/n): ";
        cin >> yes_or_no;
        if (yes_or_no == "y" || yes_or_no == "Y") {
            cout << "Введите Ek(Дж): ";
            cin >> Ek;
            cout << "Введите Ep(Дж): ";
            cin >> Ep;
            cout << "Анализ: Em = Ek + Ep\nОтвет: Em = " << Ek + Ep << "[Дж]" << '\n';
        } else if (yes_or_no == "n" || yes_or_no == "N") {
            cout << "Кинетическая энергия" << '\n';
            kinetic_energy();
            cout << '\n' << "Потенциальная энергия" << '\n';
            potential_energy();
        }
    } else if (unknown == "V") {
        cout << "Введите h(м) g(м/с2): ";
        cin >> h >> g;
        cout << "Анализ: √2gh\nОтвет: V = " << sqrt(2*g*h) << "[м/с]" << '\n';
    } else if (unknown == "h") {
        cout << "Введите V(м/с) g(м/с2): ";
        cin >> V >> g;
        cout << "Анализ: h = V^2/2g\nОтвет h = " << pow(V, 2)/2*g << "[м]" << '\n';
    } else {
        cout << "Error" << '\n';
    }
}