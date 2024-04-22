#include "GameEngine.h"
#include <iostream>
#include <SDL2/SDL.h>

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
}

GameEngine::~GameEngine() {
    // Nettoyage et fermeture de SDL2
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void GameEngine::start() {
    isRunning = true;
    while (isRunning) {
        processInput();
        //update();
        //render();
    }
}

void GameEngine::processInput() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            stop();
            std::cout << "Nothing\n";
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