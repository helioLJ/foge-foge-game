struct Mapa {
    char** matriz;
    int linhas;
    int colunas;
};

typedef struct Mapa Mapa;

void liberamapa(Mapa* m);
void lemapa(Mapa* m);
void alocamapa(Mapa* m);
void imprimemapa(Mapa* m);
