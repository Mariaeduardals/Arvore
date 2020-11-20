
typedef struct arvoreBusca ArvoreBusca;

ArvoreBusca * novaArvore();

ArvoreBusca *criar();

ArvoreBusca* inserir(ArvoreBusca* busca, int conteudo);

int busca(ArvoreBusca *busca, int conteudo);

void pre_ordem(ArvoreBusca *busca);

void em_ordem(ArvoreBusca *busca);

void pos_ordem(ArvoreBusca *busca);

void clear(ArvoreBusca *busca);

