/*Para que se forme un cuadrado: 
Punto A: (0, 0)
Punto B: (0, 2)
Punto C: (2, 2)
Punto D: (2, 0)*/

/*Para que se forme un rectángulo: 
Punto A: (0, 0)
Punto B: (0, 3)
Punto C: (4, 3)
Punto D: (4, 0)*/

/*Coordendas del ejercicio:
Punto A: (-1, -3)
Punto B: (-3, 3)
Punto C: (-1, 7)
Punto D: (1, -1)*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Definición de la estructura para representar un punto en el plano cartesiano.
struct Punto {
    double x, y; // Se declaran nuestros tipos de dato como doble flotante.
};

// Función para calcular la distancia entre dos puntos.
double distancia(Punto p1, Punto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Función para determinar si un conjunto de 4 puntos forma un cuadrado.
bool esCuadrado(Punto puntos[4]) {
    double distancias[6];

    // Calcula las distancias entre los puntos opuestos del cuadrado.
    distancias[0] = distancia(puntos[0], puntos[1]);
    distancias[1] = distancia(puntos[1], puntos[2]);
    distancias[2] = distancia(puntos[2], puntos[3]);
    distancias[3] = distancia(puntos[3], puntos[0]);
    
    // Calcula las diagonales.
    distancias[4] = distancia(puntos[0], puntos[2]);
    distancias[5] = distancia(puntos[1], puntos[3]);

    // Ordena las distancias para compararlas.
    sort(distancias, distancias + 6);

    // Comprueba si las distancias forman un cuadrado.
    if (distancias[0] == distancias[1] && 
        distancias[1] == distancias[2] && 
        distancias[2] == distancias[3] &&
        distancias[4] == distancias[5]) {
        cout << "Las distancias son iguales: " << distancias[0] << endl;
        cout << "Longitud de la diagonal: " << distancias[4] << endl;
        return true;
    }

    return false;
}

// Función para determinar si un conjunto de 4 puntos forma un rectángulo.
bool esRectangulo(Punto puntos[4]) {
    double distancias[6];

    // Calcula las distancias entre los puntos opuestos del rectángulo.
    distancias[0] = distancia(puntos[0], puntos[1]);
    distancias[1] = distancia(puntos[1], puntos[2]);
    distancias[2] = distancia(puntos[2], puntos[3]);
    distancias[3] = distancia(puntos[3], puntos[0]);
    
    // Calcula las diagonales.
    distancias[4] = distancia(puntos[0], puntos[2]);
    distancias[5] = distancia(puntos[1], puntos[3]);

    // Ordena las distancias para compararlas.
    sort(distancias, distancias + 6);

    // Comprueba si las distancias forman un rectángulo.
    if (distancias[0] == distancias[1] && 
        distancias[2] == distancias[3]) {
        cout << "Las distancias son iguales: " << distancias[0] << endl;
        cout << "Longitud de la diagonal: " << distancias[4] << endl;
        return true;
    }

    return false;
}

int main() {
    Punto puntos[4];

    // Solicita las coordenadas de los 4 puntos.
    for (int i = 0; i < 4; i++) {
        cout << "Ingrese la coordenada x del punto " << i + 1 << ": ";
        cin >> puntos[i].x;
        cout << "Ingrese la coordenada y del punto " << i + 1 << ": ";
        cin >> puntos[i].y;
    }

    // Imprime las ubicaciones de los puntos.
    cout << "Ubicación de los puntos:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Punto " << i + 1 << ": (" << puntos[i].x << ", " << puntos[i].y << ")" << endl;
    }

    // Verifica si los puntos forman un cuadrado o un rectángulo.
    if (esCuadrado(puntos)) {
        cout << "Los puntos forman un cuadrado." << endl;
    } else if (esRectangulo(puntos)) {
        cout << "Los puntos forman un rectángulo." << endl;
    } else {
        cout << "Los puntos no forman un cuadrado ni un rectángulo." << endl;
        cout << "La figura es un cuadrángulo." << endl;
    }

    return 0;
}
