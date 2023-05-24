#include <iostream>
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
    barbaro.ataque = 3;
    barbaro.defensa = 5;

}

// ataque
void ataque(string nombre, int vida, int ataque, int defensa)
{
    cout << nombre << endl;
    cout << "vida: " << vida << endl;
    cout << " ataque: " << ataque << endl;
    cout << " defensa: " << defensa << endl;

}