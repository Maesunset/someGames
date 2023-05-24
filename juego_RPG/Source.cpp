#include <iostream>
#include<vector>
using namespace std;
class enemy
{
public:
    string nombre;
    int life ;
    int attack ;
    int armour ;
};
class player
{
public:
    string nombre;
    int life = 0;
    int attack = 0;
    int armour = 0;
    vector<string> inventory[10];
};
void battle(enemy defender, player& player1);
void showMap(int map);
void attack();
void defend();
void dash();
void useItem();
void randomItem();
int main()
{
    //Declarado de enemigos
    enemy esbirro;
    esbirro.nombre = "esbirro";
    esbirro.life = 2;
    esbirro.attack = 1;
    esbirro.armour = 1;
    enemy barbaro;
    barbaro.nombre = "barbaro";
    barbaro.life = 5;
    barbaro.attack = 2;
    barbaro.armour = 5;
    enemy arquero;
    arquero.nombre = "arquero";
    arquero.life = 2;
    arquero.attack  = 5;
    arquero.armour = 2;
    enemy valquiria;
    valquiria.nombre = "valquiria";
    valquiria.life = 8;
    valquiria.attack = 5;
    valquiria.armour = 5;
    enemy oni;
    oni.nombre = "oni";
    oni.life = 8;
    oni.attack = 8;
    oni.armour = 8;
    //declarado del boss
    enemy boss;
    boss.nombre = "dragon";
    boss.life = 15;
    boss.attack = 15;
    boss.armour = 15;
    //declarado del player
    player Player1;
    Player1.life = 10;
    Player1.attack = 5;
    Player1.armour = 10;
    //declarado de variables
    int map = 0;
    showMap(map);
    battle(esbirro, Player1);
    return 0;
}
//show map progress
void showMap(int map)
{
    cout << "advance in map " << map << " of 10" << endl;
    for (int i = 0; i <= 10; i++)
    {
        if (i < map)
        {
            cout << " -";
        }
        else if (i == map)
        {
            cout << " x";
        }
        else
        {
            cout << " -";
        }
    }
    cout << endl;
}
// battlestart
void battle(enemy defender, player &player1 )
{
    cout << defender.nombre << endl;
    cout << "vida: " << defender.life << endl;
    cout << " ataque: " << defender.attack << endl;
    cout << " defensa: " << defender.armour << endl;
    cout << "player = " << player1.attack;
}
// player use atack
void attack() 
{

}
// player use defend
void defend() 
{

}
// player use dash
void dash()
{

}
// player use item
void useItem()
{

}
// random item generador after win a battle
void randomItem()
{

}