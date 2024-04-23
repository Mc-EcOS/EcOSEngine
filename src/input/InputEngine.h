#ifndef INPUT_ENGINE_H
#define INPUT_ENGINE_H

class InputEngine {
public:
    InputEngine();
    ~InputEngine();
    void processInput(bool& isRunning);
};

#endif // INPUT_ENGINE_H