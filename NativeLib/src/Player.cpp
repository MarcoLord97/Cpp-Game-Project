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
register_method("_ready", &Player::_ready);
register_method("_process", &Player::_process);

register_property("speed", &Player::speed, 400)
}
void Player::_init()
{
}
void Player::_ready(){
_screenSize = GetViewport().Size;
}
void Player::_process(float delta){

VECTOR2 velocity = new VECTOR2();

if(input->is_action_pressed("ui_right")){
velocity.x +=1;
}
if(input->is_action_pressed("ui_left")){
velocity.x +=-1;
}
if(Input::is_action_pressed("ui_down")){
velocity.y += 1;
}
if(Input::is_action_pressed("ui_up")){
velocity.y += -1;
}
//TODO: finish process
}
