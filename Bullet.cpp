#include "Bullet.hpp"    
#include "Unit.hpp"

    Bullet::Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
        src = {616, 201, 302, 96};
    }

    void Bullet::draw(){
        Unit::draw(src, mover);
        mover.x+=2;
    }