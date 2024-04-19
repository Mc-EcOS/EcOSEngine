#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

class GameEngine {
private:
    bool isRunning;

public:
    GameEngine();
    void start();
    void processInput();
    void update();
    void render();
    void stop();
};

#endif // GAME_ENGINE_H