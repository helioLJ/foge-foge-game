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
void encontramapa(Mapa* m, Posicao* p, char c);