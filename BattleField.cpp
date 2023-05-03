#include "BattleField.hpp"
#include<iostream>
void BattleField::drawObjects(){
    // call draw functions of all the objects here
    //for(Bullet& b: bullets)
    //    b.draw();
    for (Tank& t: tanks)
        t.draw();
}

void BattleField::createObject(int x, int y){
    SDL_Rect mov = {x, y, 30, 10}; // let's make a rectangel on x, y of the size 30, 10

    Tank t1(gRenderer,assets,mov);
    tanks.push_back(t1);
    //Bullet b1(gRenderer, assets, mov);
    //bullets.push_back(b1);
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}

BattleField::BattleField(SDL_Renderer *renderer, SDL_Texture *asst):gRenderer(renderer), assets(asst){

}

void BattleField::fire(){
    cout<<"F key is pressed"<<endl;
    // provide code to fire all of the tanks.
}
