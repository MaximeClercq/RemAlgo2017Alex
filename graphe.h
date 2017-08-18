// Structure pour stocker la matrice d’adjacence d'un graphe,
// constituée de deux champs : un entier 'taille' et un tableau dynamique
// 'mat' carré à 2 dimensions d'entiers
struct Matrice ...
// Structure constituée d'un entier 'voisin'
// et d'un pointeur 'suivant' sur un Noeud
struct Noeud ...
// structure pour stocker le tableau de listes d’adjacence d'un graphe,
// constituée de deux champs : un entier 'taille' et un tableau dynamique
// 'aretes' à 1 dimension de listes de Noeud
struct Graphe ...
// Structure constituée de deux champs :
// un booléen 'marque' et un entier 'precedent'
struct Etape ...
// Fonction qui convertit une matrice d’adjacence d’un graphe
// en un tableau de listes
Graphe conversion(Matrice adj);
// Fonction qui ajoute une arête entre deux sommets (s1,s2)
// d’un graphe g sous forme de tableau de listes
void inserer(Graphe* g,int s1,int s2);
// Fonction qui supprime une arête entre deux sommets (s1,s2)
// d’un graphe g sous forme de tableau de listes
void supprimer(Graphe* g,int s1,int s2);
// Fonction pour calculer les plus courts chemins entre le sommet s
// et les autres sommets d'un graphe g sous forme de tableau de listes,
// qui retourne un tableau (marques et précédences)
Etape* dijkstra(Graphe g,int s);
