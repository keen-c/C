# Guide de Programmation en C

## Imports
Syntaxe : `#include <x.h>`

## Principal
- Avoir une fonction `main` est obligatoire ! Le programme commence à s'exécuter à la première ligne de la fonction `main`.

## Variables
Déclarer une variable `int` sans l'initialiser lui donne une valeur résiduelle laissée par un ancien programme lorsque l'espace est alloué par défaut, en fonction de leurs bits.

## Constants
### `#define`
- Utilisé par le préprocesseur pour des remplacements textuels.
- Ne respecte pas les règles de portée du langage C, ce qui peut parfois entraîner des erreurs difficiles à déboguer.
- Ne consomme pas d’espace mémoire.

### `const`
- Variable constante qui respecte les règles de portée.
- Offre un type de sécurité (le compilateur peut vérifier les types).
- Peut parfois consommer de l’espace mémoire pour stocker la valeur constante.

## C'est quoi les bits ?
- Un bit est soit une valeur de 1 soit de 0.
- Conçu pour stocker et exécuter des instructions en multiple bits.
- Un ensemble de 8 bits = un octet.
- **bi**nary digi**t** (ex. : `01011110` = 1 octet, `1101001` = 1 quartet ou byte).

## Calcul des bits
Chaque bit peut être 0 ou 1. Pour n bits, il y a \(2^n\) combinaisons possibles.
Par exemple : Pour 16 bits, il y a \(2^{16} = 65 536\) combinaisons possibles, réparties entre des valeurs positives et négatives.

### Représentation des Entiers de 16 Bits
- **Non Signée** : Valeurs de 0 à 65 535.
- **Complément à Deux** : Valeurs de -32 768 à 32 767.

### Pourquoi ces limites ?
En complément à deux :
- Le bit le plus significatif (le premier) est utilisé pour indiquer le signe (0 pour positif, 1 pour négatif).
- Cela donne une plage de -32 768 (1000 0000 0000 0000) à 32 767 (0111 1111 1111 1111).

## Les Bus de Données et d’Adresses

### Bus de Données
- **Fonction** : Transporter les données entre le processeur, la mémoire et d’autres composants.
- **Largeur** : Dans un système de 32 bits, le bus de données est large de 32 bits, permettant de transférer 32 bits (4 octets) de données en une seule fois.
- **Avantage** : Permet des transferts rapides et efficaces de grandes quantités de données.

### Bus d’Adresses
- **Fonction** : Transporter les adresses mémoire, indiquant où les données doivent être lues ou écrites.
- **Largeur** : Dans un système de 32 bits, le bus d’adresses est large de 32 bits, permettant d’adresser jusqu’à \(2^{32}\) emplacements mémoire, soit 4 294 967 296 adresses distinctes (4 Go de mémoire).

### Importance des Bus
1. **Vitesse** : Un bus de données plus large (comme 32 bits) permet de transférer plus de données à la fois, augmentant la vitesse de traitement.
2. **Capacité Mémoire** : Un bus d’adresses de 32 bits permet d’accéder à une plus grande quantité de mémoire, jusqu’à 4 Go.

### Illustration

Imaginons que nous voulons transférer la valeur binaire `10101010101010101010101010101010` :

- **Bus de 32 bits** : Cette valeur entière de 32 bits peut être transférée en une seule opération.
- **Bus de 16 bits** : La même valeur devrait être transférée en deux opérations distinctes.
- **Bus de 8 bits** : La valeur devrait être transférée en quatre opérations.

En résumé, comprendre les bits, les bus de données et d’adresses aide à mieux appréhender le fonctionnement et les capacités des ordinateurs, optimisant ainsi leur utilisation en programmation.


## Ce qui se passe en mémoire

1. **Réservation de mémoire** :
   - Lorsque tu déclares une variable, l'ordinateur réserve un espace mémoire pour cette variable. Par exemple, pour un `int` de 16 bits, il réserve 16 bits (2 octets).
   
2. **Valeur résiduelle** :
   - La mémoire réservée contient ce qui était précédemment stocké à cet emplacement.
   - Si les données précédentes sont plus grandes que 16 bits, seules les 16 premiers bits seront utilisés pour la variable.

3. **Exemple** :
   - Supposons que la mémoire contienne `1101 0110 0010 1111 1010 1101 0110 1110` (32 bits).
   - Pour une variable `int` de 16 bits, elle prendra les 16 premiers bits : `1101 0110 0010 1111`.

### Importance de l'initialisation
Pour éviter les valeurs indéterminées, il est toujours recommandé d'initialiser les variables lors de leur déclaration. Par exemple :

```c
int value = 0; // Initialisation à 0
```