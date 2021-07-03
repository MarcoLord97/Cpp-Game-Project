#ifndef LEVEL_H
#define LEVEL_H
#include "Common.h"
#include <Node2D.hpp>

class Level : Node2D
{
    GODOT_CLASS(Level,Node2D)
    public:
        Level();
        virtual ~Level();
    static void _register_methods();
    void _init();

    protected:

    private:
};

#endif // LEVEL_H
