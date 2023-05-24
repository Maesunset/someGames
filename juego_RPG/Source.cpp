#include <iostream>
#include<vector>
using namespace std;
void ataque(string nombre, int vida, int ataque, int defensa);
class enemy
{
public:
    string nombre;
    int vida;
    int ataque;
    int defensa;
};
class player
{
public:
    int vida;
    int ataque;
    int defensa;
    vector<string> inventory[10];
};

int main()
{
    //Declarado de enemigos
    enemy esbirro;
    esbirro.nombre = "esbirro";
    esbirro.vida = 2;
    esbirro.ataque = 1;
    esbirro.defensa = 1;
    enemy barbaro;
    barbaro.nombre = "barbaro";
    barbaro.vida = 5;
    barbaro.ataque = 2;
    barbaro.defensa = 5;
    enemy arquero;
    arquero.nombre = "arquero";
    arquero.vida = 2;
    arquero.ataque = 5;
    arquero.defensa = 2;
    enemy valquiria;
    valquiria.nombre = "valquiria";
    valquiria.vida = 8;
    valquiria.ataque = 5;
    valquiria.defensa = 5;
    enemy oni;
    oni.nombre = "oni";
    oni.vida = 8;
    oni.ataque = 8;
    oni.defensa = 8;
    //declarado del boss
    enemy boss;
    boss.nombre = "dragon";
    boss.vida = 15;
    boss.ataque = 15;
    boss.defensa = 15;
}
// ataque
void ataque(string nombre, int vida, int ataque, int defensa)
{
    cout << nombre << endl;
    cout << "vida: " << vida << endl;
    cout << " ataque: " << ataque << endl;
    cout << " defensa: " << defensa << endl;

}