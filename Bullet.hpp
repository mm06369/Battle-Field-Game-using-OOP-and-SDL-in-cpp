#include "Unit.hpp"

class Bullet: public Unit{
    SDL_Rect src, mover;
    public:
    Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov);

    void draw();
    
};