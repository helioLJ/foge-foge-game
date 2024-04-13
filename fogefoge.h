#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd'

void move(char direcao);
int acabou();
int ehdirecao(char direcao);
int praondefantasmavai(int xatual, int yatual, int* xdestino, int* ydestino);