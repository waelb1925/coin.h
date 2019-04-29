#ifndef COIN
#define COIN

typedef struct{
	SDL_Surface *image;
	SDL_Rect pos;
    	
}coin;
void init_coin(coin *c);
void affiche_coin(coin *c,SDL_Surface *screen);
#endif

