#ifndef _FONCTIONS_H_
#define _FONCTIONS_H_




typedef struct ennemi
{

SDL_Surface *sprite ;


SDL_Rect posSprite[2][6];

int ligne ;
int col ;

SDL_Rect positionennemi ;

int direction ;



}ennemi;
  
               



ennemi initialisation_ennemi(ennemi e);

void afficher(ennemi e ,SDL_Surface *ecran) ;

void deplacement_aleatoire(ennemi *e);

void animer_ennemi(ennemi *e ) ;

void maj_ennemi (ennemi *e) ;

int collision_bb(ennemi e , SDL_Rect poshero ) ;






#endif

