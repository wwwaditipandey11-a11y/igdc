#include <stdio.h>
#include "game.h"

int main(void) {
    printf("=== IGDC Gaming Project ===\n\n");
    
    // Initialize game
    game_init();
    printf("Game initialized!\n");
    
    // Game loop would go here
    printf("Starting game...\n");
    
    // Cleanup
    game_cleanup();
    printf("Game ended.\n");
    
    return 0;
}
