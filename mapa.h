#define HEROI '@'
#define FANTASMA 'F'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'

struct Mapa {
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct Mapa Mapa;

struct Posicao {
    int x;
    int y;
};

typedef struct Posicao Posicao;

void liberamapa(Mapa* m);
void lemapa(Mapa* m);
void alocamapa(Mapa* m);
void imprimemapa(Mapa* m);
int encontramapa(Mapa* m, Posicao* p, char c);
int ehvalida(Mapa* m, int x, int y);
int ehvazia(Mapa* m, int x, int y);
int ehparede(Mapa* m, int x, int y);
int ehpersonagem(Mapa* m, char personagem, int x, int y);
void andanomapa(Mapa* m, int xorigem, int yorigem, int xdestino, int ydestino);
void copiamapa(Mapa* destino, Mapa* origem);
int podeandar(Mapa* m, char personagem, int x, int y);