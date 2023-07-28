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
    cout << "Перевод в температуру:0, Теплота:1, Сила тока:2\nАгрегатное состояние жидкостей:3, Закон Кулона:4, Закон Джоуля Ленца:5\nЗакон отражения света:6, Закон преломления света:7, Оптическая сила линзы:8\n";
	while (true) {
		string choose;

		cout << "Введите номер задачи от 0 до 8 или напишите 'stop' для завершения:\n";
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
            case 2:
                cout << "'сила тока'\n";
                current_strength();
                break;
            case 3:
                cout << "'Агрегатное состояние жидкостей'\n";
                state_of_aggregation();
                break;
            case 4:
                cout << "'Закон Кулона'\n";
                Coulombs_law();
                break;
            case 5:
                cout << "'Закон Джоуля Ленца'\n";
                JouleLenz_law();
                break;
            case 6:
                cout << "'Закон отражения света'\n";
                Law_of_light_reflection();
                break;
            case 7:
                cout << "'Закон преломления света'\n";
                Law_of_refraction_of_light();
                break;
            case 8:
                cout << "'Оптическая сила линзы'\n";
                Optical_power_of_the_lens();
                break;
        }
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
