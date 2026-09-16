#ifndef GAME_H
#define GAME_H

/**
 * Initialize the game
 */
void game_init(void);

/**
 * Update game logic
 */
void game_update(void);

/**
 * Render the game
 */
void game_render(void);

/**
 * Cleanup and shutdown
 */
void game_cleanup(void);

#endif // GAME_H
