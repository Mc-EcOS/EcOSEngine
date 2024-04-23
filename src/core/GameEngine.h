#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H
#include <SDL2/SDL.h>
#include "../input/InputEngine.h"

class GameEngine {
private:
    bool isRunning;
    SDL_Window* window;
    InputEngine inputEngine;

public:
    GameEngine();
    ~GameEngine();
    void start();
    void processInput();
    void update();
    void render();
    void stop();

};

#endif // GAME_ENGINE_H