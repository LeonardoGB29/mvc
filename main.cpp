#include <cstdlib>
#include <ctime>
#include "Model.h"
#include "View.h"

int main() {

    View ventana(1800, 900, "JUEGO");
    Model controlador;

    while (ventana.isOpen()) {
        ventana.processEvents();
        ventana.clear();
        ventana.display();
    }

    return 0;
}