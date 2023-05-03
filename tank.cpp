

#include "Tank.hpp"
#include "Unit.hpp"

Tank::Tank(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend,ast), mover(mov){
    src = {0,0,507,152};
}

void Tank::draw(){
    Unit::draw(src,mover);
    mover.x+=2;
}