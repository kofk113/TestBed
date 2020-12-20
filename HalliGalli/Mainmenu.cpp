#include "game.h"
#include <stdlib.h>

int main() {
   
    system("clear");
    system("mode con cols=108 lines=40 | title Halli Galli");
    system("color e9"); // e or f is best
    Menu();

    while (true) {
        switch (getch()) {
        case 's':
            game();
            Menu();
            break;
        case 'q':
            return 0;
        }
    }
}
