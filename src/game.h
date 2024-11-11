//
// Created by mika on 11/11/24.
//

#ifndef GAME_H
#define GAME_H

enum GameState
{
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN,
};

class Game
{
public:
    GameState state;
    bool Keys[1024];
    unsigned int Width, Height;

    Game(unsigned int width, unsigned int height);
    ~Game();

    static void Init();
    static void ProcessInput(float dt);
    static void Update();
    static void Render();
};

#endif //GAME_H
