#ifndef PLAYER_H
#define PLAYER_H

#include "Common.h"
#include "Area2D.hpp"

class Player: Area2D
{
    GODOT_CLASS(Level,Node2D)
    public:
        Level();
        virtual ~Level();
    static void _register_methods();
    void _init();
    int Speed = 400;
    protected:

    private:
    VECTOR2 _screenSize;
};

#endif // PLAYER_H
