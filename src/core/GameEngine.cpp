#include "GameEngine.h"
#include <iostream>

GameEngine::GameEngine() : isRunning(false) {}

void GameEngine::start() {
    isRunning = true;
    while (isRunning) {
        processInput();
        update();
        render();
    }
}

void GameEngine::processInput() {
    // TODO: Handle user input
    std::cout << "Processing input...\n";
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