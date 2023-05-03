
#include "Unit.hpp"

class Tank: public Unit{
    SDL_Rect src, mover;
    public:
    Tank(SDL_Renderer* rend, SDL_Texture* ast,SDL_Rect mov);

    void draw();

};



// Make composition of TankBody and TankTurret objects in Tank class