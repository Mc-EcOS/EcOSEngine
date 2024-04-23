#include "InputEngine.h"
#include <SDL2/SDL.h>
#include <iostream>

InputEngine::InputEngine() {
    // Initialisation de la gestion des inputs ici si nécessaire
}

InputEngine::~InputEngine() {
    // Nettoyage de la gestion des inputs ici si nécessaire
}

void InputEngine::processInput(bool& isRunning) {
    SDL_Event event;
    int mouseX, mouseY;

    // Initialise la position de la souris au centre de l'écran
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
            case SDL_QUIT:
                isRunning = false;
                break;
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym) {
                    case SDLK_UP:
                        // Gestion de la touche "flèche vers le haut"
                        std::cout << "Up arrow key pressed\n";
                        break;
                    case SDLK_DOWN:
                        // Gestion de la touche "flèche vers le bas"
                        std::cout << "Down arrow key pressed\n";
                        break;
                    case SDLK_LEFT:
                        // Gestion de la touche "flèche vers le bas"
                        std::cout << "Left arrow key pressed\n";
                        break;
                    case SDLK_RIGHT:
                        std::cout << "Right arrow key pressed\n";
                        // Gestion de la touche "flèche vers le bas"
                        break;

                    // Ajoutez ici la gestion d'autres touches
                    default:
                        std::cout << "Other key pressed: " << SDL_GetKeyName(event.key.keysym.sym) << "\n";
                        break;
                    
                }
                break;
            case SDL_MOUSEMOTION:
                SDL_GetMouseState(&mouseX, &mouseY);
                // Utilisez mouseX et mouseY pour gérer les mouvements de la souris
                std::cout << "Mouse position: (" << mouseX << ", " << mouseY << ")\n";

                break;
        }
    }
}