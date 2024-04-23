#include "GameEngine.h"
#include <iostream>

GameEngine::GameEngine() : isRunning(false) {
    // Initialisation de SDL2
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return;
    }

    // Création de la fenêtre
    window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
    if (window == NULL) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        return;
    }
    SDL_WarpMouseInWindow(NULL, 640/2, 480/2);

}

GameEngine::~GameEngine() {
    // Nettoyage et fermeture de SDL2
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void GameEngine::start() {
    isRunning = true;
    while (isRunning) {
        inputEngine.processInput(isRunning);
        //update();
        //render();
    }
}



void GameEngine::update() {
    // TODO: Update game objects
    std::cout << "Updating game...\n";
}

void GameEngine::render() {
    // TODO: Render game objects to screen
    std::cout << "Rendering game...\n";
}

void GameEngine::stop() {
    isRunning = false;
}