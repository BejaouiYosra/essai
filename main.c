#include <stdio.h>   // Inclusion de la bibliothèque pour les fonctions d'entrée/sortie, comme printf et scanf.
#include <ctype.h>   // Inclusion de la bibliothèque pour les fonctions de manipulation de caractères (isdigit).

int main() {   // Déclaration de la fonction principale (point d'entrée du programme).
    
    // Définition des lignes de texte contenant les données à traiter.
    // Chaque ligne correspond à une chaîne de caractères.
    char *lines[] = {  
        "ckmb52fldxkseven3fkjgcbzmnr7",      // Première ligne de texte
        "gckhqpb6twoqnjxqplthree2fourkspnsnzxlz1",  // Deuxième ligne de texte
        "2onetwocrgbqm7",                     // Troisième ligne de texte
        "frkh2nineqmqxrvdsevenfive",         // Quatrième ligne de texte
        "four9two",                           // Cinquième ligne de texte
        "six7sixqrdfive3twonehsk",            // Sixième ligne de texte
        "xkvsone2",                           // Septième ligne de texte
        "one65",                              // Huitième ligne de texte
        "rggxsff1seven",                      // Neuvième ligne de texte
        "djbcgrrtqdshpqqzj43rgcr",           // Dixième ligne de texte
        "br89fivetwoqggnxjfourtl3",          // Onzième ligne de texte
        "zoneight47five5sixjxd74",           // Douzième ligne de texte
        "4five1",                             // Treizième ligne de texte
        "5seveneighteightzzbnzsvdjnkvndsxlttfour",  // Quatorzième ligne de texte
        "htdcmsl12ninethreepkqtdlvtl",       // Quinzième ligne de texte
        "twocghtvtdlfchfqnjhrfour19",        // Seizième ligne de texte
        "rptwofiveonecvlldmppxtrvj3",        // Dix-septième ligne de texte
        "6gqsvsqpzxj",                       // Dix-huitième ligne de texte
        "5twomgkzsvg",                       // Dix-neuvième ligne de texte
        "4ninedflntfsn1",                    // Vingtième ligne de texte
        "4threethree",                       // Vingt et unième ligne de texte
        "43two6eight9"                       // Vingt-deuxième ligne de texte
    };

    // Variable pour stocker la somme totale des valeurs d'étalonnage
    int sum = 0;

    // Calcul du nombre de lignes en divisant la taille totale du tableau par la taille d'une ligne.
    int num_lines = sizeof(lines) / sizeof(lines[0]);

    // Début de la boucle pour parcourir chaque ligne
    for (int i = 0; i < num_lines; i++) {
        // Déclaration de la variable qui va contenir chaque ligne individuelle.
        char *line = lines[i];
        
        // Initialisation des variables pour stocker le premier et le dernier chiffre trouvé dans la ligne.
        int first_digit = -1, last_digit = -1;

        // Boucle pour parcourir chaque caractère de la ligne actuelle
        for (int j = 0; line[j] != '\0'; j++) {
            // Si le caractère est un chiffre (fonction isdigit)
            if (isdigit(line[j])) {
                // Si c'est le premier chiffre, on le garde
                if (first_digit == -1) {
                    first_digit = line[j] - '0'; // Conversion du caractère en chiffre (par exemple, '5' -> 5)
                }
                // Mettre à jour le dernier chiffre trouvé
                last_digit = line[j] - '0';  // Conversion du caractère en chiffre
            }
        }

        // Si un premier et un dernier chiffre ont été trouvés, on combine pour créer la valeur d'étalonnage
        if (first_digit != -1 && last_digit != -1) {
            int calibration_value = first_digit * 10 + last_digit; // Création du nombre à deux chiffres
            sum += calibration_value; // Ajout de cette valeur à la somme totale
        }
    }

    // Affichage de la somme finale des valeurs d'étalonnage
    printf("La somme de toutes les valeurs d'étalonnage est : %d\n", sum);

    return 0;  // Fin du programme avec un code de retour 0 pour indiquer une exécution réussie.
}
