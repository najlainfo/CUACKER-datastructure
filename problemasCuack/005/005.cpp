    #include <iostream>
#include <string>
using namespace std;

class Fecha {
public:
    int d, m, a, h, min, s;
    void leer() {
        char c;
        cin >> d >> c >> m >> c >> a; // para leer fecha del dia -> dia/mes/año
        cin >> h >> c >> min >> c >> s; // para leer el tiempo  -> hora/minuto/segundos
    }
    void mostrar() const {
        cout << d << '/' << m << '/' << a << ' ';
        if (h < 10) cout << '0';
        cout << h << ':';
        if (min < 10) cout << '0';
        cout << min << ':';
        if (s < 10) cout << '0';
        cout << s;
    }
};

const string mensajesPref[30] = {
    "Afirmativo.",
    "Negativo.",
    "Estoy de viaje en el extranjero.",
    "Muchas gracias a todos mis seguidores por vuestro apoyo.",
    "Enhorabuena, campeones!",
    "Ver las novedades en mi pagina web.",
    "Estad atentos a la gran exclusiva del siglo.",
    "La inteligencia me persigue pero yo soy mas rapido.",
    "Si no puedes convencerlos, confundelos.",
    "La politica es el arte de crear problemas.",
    "Donde estan las llaves, matarile, rile, rile...",
    "Si no te gustan mis principios, puedo cambiarlos por otros.",
    "Un dia lei que fumar era malo y deje de fumar.",
    "Yo si se lo que es trabajar duro, de verdad, porque lo he visto por ahi.",
    "Hay que trabajar ocho horas y dormir ocho horas, pero no las mismas.",
    "Mi vida no es tan glamurosa como mi pagina web aparenta.",
    "Todo tiempo pasado fue anterior.",
    "El azucar no engorda... engorda el que se la toma.",
    "Solo los genios somos modestos.",
    "Nadie sabe escribir tambien como yo.",
    "Si le molesta el mas alla, pongase mas aca.",
    "Me gustaria ser valiente. Mi dentista asegura que no lo soy.",
    "Si el dinero pudiera hablar, me diria adios.",
    "Hoy me ha pasado una cosa tan increible que es mentira.",
    "Si no tienes nada que hacer, por favor no lo hagas en clase.",
    "Que nadie se vanaglorie de su justa y digna raza, que pudo ser un melon y salio una calabaza.",
    "Me despido hasta la proxima. Buen viaje!",
    "Cualquiera se puede equivocar, inclusivo yo.",
    "Estoy en Egipto. Nunca habia visto las piramides tan solas.",
    "El que quiera saber mas, que se vaya a Salamanca."
};

class Cuac {
public:
    string usuario;
    Fecha fecha;
    string texto;

    void leer(const string& tipo) {
        cin >> usuario;
        fecha.leer();
        cin.ignore(); 

        if (tipo == "pcuac") {
            int num;
            cin >> num;
            cin.ignore(); 
            if (num >= 1 && num <= 30) texto = mensajesPref[num - 1]; // como es [] siempre empieza en 0 entonces si es 30 es posicion 29
            else texto = "Mensaje desconocido"; // por si se sale del numero establecido (un mensjaje de error)
        } else if (tipo == "mcuac") {
            getline(cin, texto);
        }
    }

    void mostrar() const { // cambiado para que solo se encargue de mostrar el contenido del cuac // punto de idea de IA porque nosotras haciamos actual.mostrar(contador), por lo que habia veces donde la entrada hacia solapaciones y luego imprimia de mas mas luego en el total, por lo que cambiamos a actual.mostrar()
        cout << usuario << ' ';
        fecha.mostrar();
        cout << '\n' << "   " << texto << '\n';
    }
};
 //powerpoint
int contador = 0;
Cuac actual;


void procesar_pcuac(){
    actual.leer("pcuac");
    contador++;
    cout << contador << " cuac"<<endl;
}
void procesar_mcuac(){
    actual.leer("mcuac");
    contador++; 
    cout << contador << " cuac"<<endl;
}
void procesar_last(){
    int n; // un numero de 0 a 2 elevado a 30
    cin >> n;
    cout << "last " << n << endl; 
    cout << "1. ";
    actual.mostrar();
    cout << "Total: "<< 1 << " cuac" << endl;
}
void procesar_follow() {
    string nombre; //aparece el nombre de usuario
    cin >> nombre;
    cout << "follow " << nombre << endl;
    cout << "1. ";
    actual.mostrar();
    cout << "Total: "<< 1 << " cuac" << endl;
}
void procesar_date() {
    Fecha f1, f2; //fecha minimo f1 y fecha maxima f2
    f1.leer();
    f2.leer();
    cout << "date ";
    f1.mostrar();
    cout << ' ';
    f2.mostrar();
    cout << endl;
    cout << "1. ";
    actual.mostrar();
    cout << "Total: "<< 1 << " cuac" << endl;
}
void procesar_tag() {
    string etiqueta; //la etiqueta a buscar
    cin >> etiqueta;
    cout << "tag " << etiqueta << endl;
    cout << "1. ";
    actual.mostrar();
    cout << "Total: "<< 1 << " cuac" << endl;
}
void procesar_exit() { //de momento no hace nada 
}
void Interprete (string comando) // primera parte hasta el last del power point
{
   if (comando=="pcuac") procesar_pcuac();
   else if (comando=="mcuac") procesar_mcuac();
   else if (comando=="last") procesar_last();
   else if (comando=="follow") procesar_follow();
   else if (comando=="date") procesar_date();
   else if (comando=="tag") procesar_tag();
   else if (comando=="exit") procesar_exit();
   
}

int main(void){ //Sacado del powerpoint
    string comando;
   while (cin >> comando && comando!="exit")
      Interprete(comando);

}
    
