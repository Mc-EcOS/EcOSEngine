#include "GameEngine.h"
#include <iostream>
#include <SDL.h>

GameEngine::GameEngine() : isRunning(false) {}

void GameEngine::start() {
    // Initialisation du SDL...

    isRunning = true;
    while (isRunning) {
        processInput();
        update();
        render();
    }

    // Nettoyage du SDL...
}

void GameEngine::processInput() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            stop();
        } else if (event.type == SDL_KEYDOWN) {
            switch (event.key.keysym.sym) {
                case SDLK_UP:
                    std::cout << "Up arrow key pressed\n";
                    break;
                case SDLK_DOWN:
                    std::cout << "Down arrow key pressed\n";
                    break;
                case SDLK_LEFT:
                    std::cout << "Left arrow key pressed\n";
                    break;
                case SDLK_RIGHT:
                    std::cout << "Right arrow key pressed\n";
                    break;
                default:
                    std::cout << "Other key pressed: " << SDL_GetKeyName(event.key.keysym.sym) << "\n";
                    break;
            }
        }
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