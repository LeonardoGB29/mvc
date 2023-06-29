#include <cstdlib>
#include <ctime>
#include "Model_Character.h"
#include "View.h"

int main() {

    View ventana(1800, 900, "JUEGO");

    while (ventana.isOpen()) {
        ventana.processEvents();
        ventana.clear();
        ventana.display();
    }

    return 0;
}