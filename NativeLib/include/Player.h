#ifndef PLAYER_H
#define PLAYER_H

#include "Common.h"
#include "Area2D.hpp"
#include <Input.hpp>

class Player: Area2D
{
    GODOT_CLASS(Player,Area2D)
    public:
        Player();
        virtual ~Player();
    static void _register_methods();
    void _init();
    int speed = 400;
    protected:

    private:
    VECTOR2 _screenSize;
};

#endif // PLAYER_H
