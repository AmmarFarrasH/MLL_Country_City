#ifndef MLL_H_INCLUDED
#define MLL_H_INCLUDED

struct Negara {
    string nama;
};

struct Kota {
    string nama;
};

typedef struct elmNegara *adrNegara;
typedef struct elmKota *adrkota;

struct elmNegara {
    negara info;
    adrNegara next;
    adrNegara prev;
    adrkota firstKota;
};

struct elmKota {
    Kota info;
    adrKota next;
    adrkota prev;
};

struct ListNegara {
    adrNegara first;
    adrNegara last;
};

#endif // MLL_H_INCLUDED
