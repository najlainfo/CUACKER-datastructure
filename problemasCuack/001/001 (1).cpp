#include <iostream>
using namespace std; 

int main(){

    int N; 
    cin>> N; 
    
    for(int i = 0; i < N; i++){
        int numero;
        cin>> numero;
        switch(numero){
            case 1:
                cout<<("Afirmativo.\n");
                break;
            case 2:
                cout<<("Negativo.\n");
                break;
            case 3:
                cout<<("Estoy de viaje en el extranjero.\n");
                break;
            case 4:
                cout<<("Muchas gracias a todos mis seguidores por vuestro apoyo.\n");
                break;
            case 5: 
                cout<<("Enhorabuena, campeones!\n");
                break;
            case 6:
                cout<<("Ver las novedades en mi pagina web.\n");
                break;
            case 7:
                cout<<("Estad atentos a la gran exclusiva del siglo.\n");
                break;
            case 8:
                cout<<("La inteligencia me persigue pero yo soy mas rapido.\n");
                break;
            case 9:
                cout<<("Si no puedes convencerlos, confundelos.\n");
                break;
            case 10:
                cout<<("La politica es el arte de crear problemas.\n");
                break;
            case 11:
                cout<<("Donde estan las llaves, matarile, rile, rile...\n");
                break;
            case 12:
                cout<<("Si no te gustan mis principios, puedo cambiarlos por otros.\n");
                break;
            case 13:
                cout<<("Un dia lei que fumar era malo y deje de fumar.\n");
                break;
            case 14:
                cout<<("Yo si se lo que es trabajar duro, de verdad, porque lo he visto por ahi.\n");
                break;
            case 15:
                cout<<("Hay que trabajar ocho horas y dormir ocho horas, pero no las mismas.\n");
                break;
            case 16:
                cout<<("Mi vida no es tan glamurosa como mi pagina web aparenta.\n");
                break;
            case 17:
                cout<<("Todo tiempo pasado fue anterior.\n");
                break;
            case 18:
                cout<<("El azucar no engorda... engorda el que se la toma.\n");
                break;
            case 19:
                cout<<("Solo los genios somos modestos.\n");
                break;
            case 20:
                cout<<("Nadie sabe escribir tambien como yo.\n");
                break;
            case 21:
                cout<<("Si le molesta el mas alla, pongase mas aca.\n");
                break;
            case 22:
                cout<<("Me gustaria ser valiente. Mi dentista asegura que no lo soy.\n");
                break;
            case 23:
                cout<<("Si el dinero pudiera hablar, me diria adios.\n");
                break;
            case 24:
                cout<<("Hoy me ha pasado una cosa tan increible que es mentira.\n");
                break;
            case 25:
                cout<<("Si no tienes nada que hacer, por favor no lo hagas en clase.\n");
                break;
            case 26:
                cout<<("Que nadie se vanaglorie de su justa y digna raza, que pudo ser un melon y salio una calabaza.\n");
                break;
            case 27:
                cout<<("Me despido hasta la proxima. Buen viaje!\n");
                break;
            case 28:
                cout<<("Cualquiera se puede equivocar, inclusivo yo.\n");
                break;
            case 29:
                cout<<("Estoy en Egipto. Nunca habia visto las piramides tan solas.\n");
                break;
            case 30:
                cout<<("El que quiera saber mas, que se vaya a Salamanca.\n");
                break;
        }
    }
}

