#include "Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}
void Player::_register_methods()
{
}
void Player::_init()
{
}
override void Player::_Ready(){
_screenSize = GetViewport().Size;
}
override void Player::_Process(float delta){

VECTOR2 velocity = new VECTOR2();

if(Input::is_action_pressed("ui_right")){
velocity.x +=1;
}
if(Input::is_action_pressed("ui_left")){
velocity.x +=-1;
}
if(Input::is_action_pressed("ui_down")){
velocity.y += 1;
}
if(Input::is_action_pressed("ui_up")){
velocity.y += -1;
}
//TODO: finish process
 animatedSprite = (Anima)get_node()
}
