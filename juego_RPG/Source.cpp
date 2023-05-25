#include <iostream>
#include<vector>
#include<time.h>  
#include<stdlib.h>
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
void attack(enemy& defender, player& player1);
void defend(enemy& defender, player& player1);
void dash(enemy& defender, player& player1);
void useItem(player& player1);
void randomItem(player& player1);
int main()
{
    //Declarado de enemigos
    enemy esbirro;
    esbirro.nombre = "esbirro";
    esbirro.life = 2;
    esbirro.attack = 1;
    esbirro.armour = 2;
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

    //inicio juego
    cout << "Hola..." << endl;
    cout << "Despierta, Despierta" << endl;
    system("pause");
    cout << "hola, cual es tu nombre" << endl;
    cin >> Player1.nombre;
    cout << "Con que " << Player1.nombre << " mi nombre es lux y sere tu gia " << endl;
    cout << "Este mundo esta en ruinas, desde hace muchos inviernos un gran dragon ataco" << endl;
    cout << "Destruyo todo a su paso... " << endl;
    system("pause");
    cout << "Te das la vuelta y corres" << endl;
    cout << "lux te intercepta rapidamente y te dice:  " << endl;
    system("pause");
    cout << "Tu me puedes ayudar solo ocupas ir a su castillo y pelear contra sus secuases" << endl;
    cout << "Es facil, solo ten esta espada y haz lo tuyo, te llevare  al castillo" << endl;
    cout << "Apareces en la entrada del castillo" << endl;
    system("pause");
    cout << "mira un esbirro, ve y pelea" << endl;
    system("pause");
    battle(esbirro, Player1);
    system("cls");
    cout << "felicidades " << Player1.nombre << " ganaste tu primer pelea" << endl;
    do
    {
        system("pause");
        randomItem(Player1);
        srand((unsigned)time(NULL));
        int random = (rand() % 5) + 1;
        bool exit = false;
        cout << "avanzaste al siguiente cuarto" << endl;
        cout << "este es tu progreso en el mapa" << endl;
        showMap(map);
        switch (random)
        {
        case 1:
            cout << "al entrar al cuarto te encuentras a un esbirro esperandote" << endl;
            system("pause");
            battle(esbirro, Player1);
            if (Player1.life > 0)
            {
                cout << "que buena pelea " << Player1.nombre << " vamos tu puedes con mas" << endl;
                map++;
            }
            else
            {
                exit = true;
            }
            break;       
        case 2:
            cout << "al entrar al cuarto te encuentras a un barbaro esperandote" << endl;
            system("pause");
            battle(barbaro, Player1);
            if (Player1.life > 0)
            {
                cout << "que buena pelea " << Player1.nombre << " vamos tu puedes con mas" << endl;
                map++;
            }
            else
            {
                exit = true;
            }
            break;        
        case 3:
            cout << "al entrar al cuarto te encuentras a un arquero esperandote" << endl;
            system("pause");
            battle(arquero, Player1);
            if (Player1.life > 0)
            {
                cout << "que buena pelea " << Player1.nombre << " vamos tu puedes con mas" << endl;
                map++;
            }
            else
            {
                exit = true;
            }
            break;        
        case 4:
            cout << "al entrar al cuarto te encuentras a una valquiria esperandote" << endl;
            system("pause");
            battle(valquiria, Player1);
            if (Player1.life>0)
            {
                cout << "que buena pelea " << Player1.nombre << " vamos tu puedes con mas" << endl;
                map++;
            }
            else 
            {
                exit = true;
            }
            break;        
        case 5:
            cout << "al entrar al cuarto te encuentras a un gran oni esperandote" << endl;
            system("pause");
            battle(oni, Player1);
            if (Player1.life > 0)
            {
                cout << "que buena pelea " << Player1.nombre << " vamos tu puedes con mas" << endl;
                map++;
            }
            else
            {
                exit = true;
            }
            break;        
        }
        if (map==10)
        {
            randomItem(Player1);
            cout << "entraste al cuarto del gran dragron de ojos azules" << endl;
            cout << "el imponente dragon te mira al entrar y te dice" << endl;
            cout << "ESTAS LISTO PARA UN VERDADERO RETO" << endl;
            system("pause");
            battle(boss, Player1);
            if (Player1.life < 0)
            {
                cout << "lo hiciste liveraste estas tierras de su malvado tirano" << endl;
                exit = true;
            }
        }
    } while (exit);
    if (Player1.life<0)
    {
        cout << "lux te mira con desprecio mientras dice" << endl;
        cout << "esperaba mas de ti " << Player1.nombre << endl;
    }
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
    int playerChoice;
    bool exit = false;
    do
    {
        playerChoice = 0;
        system("cls");
        cout << "enemigo " << defender.nombre << endl;
        cout << "vida: " << defender.life << endl;
        cout << "ataque: " << defender.attack << endl;
        cout << "defensa: " << defender.armour << endl;
        cout << "tus stats:" << endl;
        cout << "Vida:"<<player1.life<<endl;
        cout << "Ataque:"<<player1.attack<<endl;
        cout << "Defensa:"<<player1.armour<<endl;
        cout << "que deseas hacer" << endl;
        cout << "1) atacar" << endl;
        cout << "2) defender" << endl;
        cout << "3) esquivar" << endl;
        cout << "4) usar items" << endl;
        cin >> playerChoice;
        switch (playerChoice)
        {
            //case ataque
        case 1:
            attack(defender, player1);
            break;
            //case defender
        case 2:
            defend(defender, player1);
            break;
            //case esquivar
        case 3:
            dash(defender, player1);
            break;
            //case usar items
        case 4:
            useItem(player1);
            break;
            //case respuesta incorrecta
        default:
            cout << "no supiste que hacer y en lo que pensabas te golpeo " << endl;
            if (player1.armour > 0)
            {
                player1.armour -= defender.attack;
            }
            else
            {
                player1.life -= defender.attack;
            }
            break;
        }
        if (defender.life<=0)
        {
            cout << "bien hecho le ganaste al " << defender.nombre << endl;
            exit = true;
        }
        else if (player1.life<=0)
        {
            cout << "oh no te ha ganado un simple" << defender.nombre << endl;
            exit = true;
        }
    system("pause");
    } while (!exit);
}
// player use atack
void attack(enemy &defender,player &player1) 
{
    srand((unsigned)time(NULL));
    int random = (rand() % 3)+1,aux;
    switch (random)
    {
     //attack x attack
    case 1:
        cout << "EL " << defender.nombre << " decide atacar tambien, tienen un duelo de ataque" << endl;
        //el enemigo tiene mas ataque que tu
        if (defender.attack>player1.attack)
        {
            cout << "oh no el " << defender.nombre << " tiene mas ataque, te ha ganado" << endl;
            system("pause");
            //el player tiene mas que 0 de armadura
            if (player1.armour>0)
            {
                aux = defender.attack - player1.attack;
                cout << "haz recibido " << aux << " de damage en armadura" << endl;
                player1.armour -= aux;
                //hace que el jugador no pueda tener menos que 0 de armadura
                if (player1.armour<0)
                {
                    cout << "cuidado ya no te queda armadura" << endl;
                    player1.armour = 0;
                }
            }
            //el player no tiene armadura
            else 
            {
                //ataca directo a los puntos de vida del jugador
                aux = defender.attack - player1.attack;
                cout << "Es un ataque directo de " << aux << " en tu vida" << endl;
                player1.life -= aux;
            }
        }
        //tienes mas damage que el enemigo
        else
        {
            cout << "felicidades " << player1.nombre << " tienes mas ataque que " << defender.nombre << " le has ganado" << endl;
            system("pause");
            //el enemigo tiene mas que 0 de armadura
            if (defender.armour>0)
            {
                aux = player1.attack - defender.attack;
                cout << "Bien hecho le haz hecho " << aux << " de damage" << endl;
                defender.armour -= aux;
                //hace que la armadura del enemigo no baje de 0
                if (defender.armour<0)
                {
                    defender.armour = 0;
                }
            }
            //al enemigo ya no le queda armadura
            else
            {
                aux = player1.attack - defender.attack;
                cout << "le haz hecho damage directo en su vida, le haz quitado " << aux << " de vida" << endl;
                defender.life -= aux;
            }
        }
        break;
    // attack x defend
    case 2:
        cout << "El " << defender.nombre << " decide defender, reduce el damage recibido y te regresa un poco" << endl;
        //damage en el jugador
        //si el player tiene armadura
        if (player1.armour>0)
        {
            player1.armour -= (player1.attack * .25);
            cout << "te haz hecho " << player1.attack * .25 << " de damage en tu armadura " << endl;
            //asi no puedes tener menos que 0 de armadura
            if (player1.armour<0)
            {
                player1.armour = 0;
            }
        }
        //si ya no tiene armadura
        else 
        {
            player1.life -= (player1.attack * .25);
            cout << "te haz hecho " << player1.attack * .25 << " de damage en tu vida " << endl;
        }
        //damage en el enemigo
        //si el enemigo tiene armadura
        if (defender.armour > 0)
        {
            defender.armour -= (player1.attack * .50);
            cout << "Le haz hecho " << player1.attack * .50 << " de damage en su armadura " << endl;
            //asi no puede tener menos de 0 de armadura
            if (defender.armour < 0)
            {
                defender.armour = 0;
            }
        }
        //si ya no tiene armadura
        else
        {
            defender.life -= (player1.attack * .50);
            cout << "le haz hecho " << player1.attack * .50 << " de damage en su vida " << endl;
        }
        break;
    //attack x dash
    case 3:
        cout << "El " << defender.nombre << " decide esquivar, te haz caido al atacar" << endl;
        if (player1.armour>0)
        {
            aux = player1.attack * .5;
            cout << "recibiste " << aux << " de damage en tus puntos de armadura" << endl;
            player1.armour -= aux;
            if (player1.armour < 0) 
            {
                player1.armour = 0;
            }
        }
        else
        {
            aux = player1.attack * .5;
            cout << "recibiste " << aux << " de damage en tus puntos de vida" << endl;
            player1.life -= aux;
        }
        break;
    }
}
// player use defend
void defend(enemy& defender, player& player1)
{
    srand((unsigned)time(NULL));
    int random = (rand() % 3) + 1, aux;
    switch (random)
    {
    //defender x atacar
    case 1:
        cout << " al defender el " << defender.nombre << " decide atacar" << endl;
        cout << " al defender recibes la mitad de damage y le regresas un porsentaje" << endl;
        // damge al enemigo
        //solo si el enemigo tiene armadura
        if (defender.armour>0)
        {
            defender.armour -= (defender.attack * .25);
            cout << "al pegarte se hizo " << (defender.attack * .25) << " de damage en su armadura" << endl;
            if (defender.armour<0)
            {
                defender.armour = 0;
            }
        }
        // si el enemigo no tiene armadura
        else
        {
            defender.life -= (defender.attack * .25);
            cout << "al pegarte se hizo " << (defender.attack * .25) << " de damage en su vida" << endl;
        }
        //damage al player
        //solo si el player tiene armadura
        if (player1.armour>0)
        {
            player1.armour -= (defender.attack * .5);
            cout << "con su golpe te hizo " << (defender.attack * .5) << " de damage en tu armadura" << endl;
            if (player1.armour<0)
            {
                player1.armour = 0;
            }
        }
        //solo si el player  no tine armadura
        else
        {
            player1.life -= (defender.attack * .5);
            cout << "con su golpe te hizo " << (defender.attack * .5) << " de damage en tu vida" << endl;
        }
        break;
    //defender x defender
    case 2:
        cout << "parece una batalla de metapods, ambos obtienen armadura" << endl;
        player1.armour += 2;
        cout << player1.nombre << " armadura +2" << endl;
        defender.armour += 2;
        cout << defender.nombre << " armadura + 2" << endl;
        break;
    // defender x dash
    case 3:
        cout << "al agacharte a defender el " << defender.nombre << " se cae y se hace damage solo" << endl;
        //si el enemigo tiene armadura
        if (defender.armour>0)
        {
            defender.armour -= (defender.attack * .5);
            cout << "el " << defender.nombre << " se hizo " << defender.attack * .5 << " de damage en su armadura" << endl;
            if (defender.armour<0)  
            {
                defender.armour = 0;
            }
        }
        // si el enemigo no tiene armadura
        else
        {
            defender.life -= (defender.attack * .5);
            cout << "el " << defender.nombre << " se hizo " << defender.attack * .5 << " de damage en su vida" << endl;
        }
        break;
    }
}
// player use dash
void dash(enemy& defender, player& player1)
{
    srand((unsigned)time(NULL));
    int random = (rand() % 3) + 1, aux;
    switch (random)
    {
        // dash x attack
    case 1:
        if (defender.armour>0)
        {
            cout << "al esquivar el enemigo se tropiesa y se hace " << defender.attack * 5 << "de damage en su armadura" << endl;
            defender.armour -= (defender.attack * .5);
            if (defender.armour<0)
            {
                defender.armour = 0;
            }
        }
        else
        {
            cout << "al esquivar el enemigo se tropiesa y se hace " << defender.attack * 5 << "de damage en su vida" << endl;
            defender.life -= (defender.attack * .5);
        }
        break;
        //dash x defend
    case 2:
        cout << "cuando esquivas el se agacha, te caes y te haces " << player1.attack * .5 <<" de damage" << endl;
        if (player1.armour > 0)
        {
            player1.armour -= (player1.attack * .5);
            if (player1.armour < 0)
            {
                player1.armour = 0;
            }
        }
        else
        {
            player1.life -= (player1.attack * .5);
        }
        break;
        // dash x dash
    case 3:
        cout << "Chocaron entre si al intentar esquivar al mismo lugar, los dos se hacen dos de damage" << endl;
        if (player1.armour > 0)
        {
            player1.armour -= 2;
            if (player1.armour < 0)
            {
                player1.armour = 0;
            }
        }
        else
        {
            player1.life -= 2;
        }        
        if (defender.armour > 0)
        {
            defender.armour -= 2;
            if (defender.armour < 0)
            {
                defender.armour = 0;
            }
        }
        else
        {
            defender.life -= 2;
        }
        break;
    }
}
// player use item
void useItem(player &player1)
{

}
// random item generador after win a battle
void randomItem(player& player1)
{
    srand((unsigned)time(NULL));
    int random = (rand() % 3) + 1, aux;
    switch (random)
    {
    case 1:
        cout << "en los pasillos te encontraste con una daga" << endl;
        if (player1.inventory->size() < 10)
        {
            player1.inventory->push_back("DAGA");
        }
        else
        {
            cout << " no te queda mas espacio en el inventario" << endl;
        }
        break;
    case 2:
        cout << "en los pasillos te encontraste con una pocion" << endl;
        if (player1.inventory->size() < 10)
        {
            player1.inventory->push_back("POCION");
        }
        else
        {
            cout << " no te queda mas espacio en el inventario" << endl;
        }
        break;
    case 3:
        cout << "en los pasillos te encontraste con una armadura" << endl;
        if (player1.inventory->size() < 10)
        {
            player1.inventory->push_back("ARMADURA");
        }
        else
        {
            cout << " no te queda mas espacio en el inventario" << endl;
        }
        break;
    }
}