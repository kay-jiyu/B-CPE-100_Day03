B-CPE-100 : Piscine de C - Jour 03. Apprentissage des bases du langage C : boucles, conditions, manipulation de types int et char en utilisant uniquement la fonction my_putchar. L'accent est mis sur la logique algorithmique (combinaisons) et le respect strict de la Coding Style Epitech.
📖 Présentation du Jour

🎯 Objectives

Le Day 03 est un rite de passage. Il ne s'agit pas juste de coder, mais d'apprendre à penser "bas niveau". L'objectif est de reproduire des comportements complexes (comme l'affichage de nombres ou de combinaisons) en n'utilisant qu'une seule primitive : my_putchar.
📜 Rules of Engagement

    [!IMPORTANT] Le non-respect de ces règles entraîne un Zero immédiat par l'Autograder.

    🚫 Forbidden Zone : Pas de printf, pas de scanf, pas de tableaux [], pas de strings "".

    🛡️ Clean Repo : Pas de fichiers temporaires (*~, #*#), pas de binaires, pas d'objets .o.

    ⚓ No Main : Ne jamais inclure de fonction main() dans vos fichiers de rendu.

    📦 Delivery : Le dossier doit être parfaitement structuré selon les consignes CPool_Day03_$YEAR.

🛠️ The Toolkit

Pour ce projet, nous forgeons nos propres outils :

    🔨 Language : C Pur

    🔧 Function : my_putchar(char c) (La seule autorisée)

    📐 Style : Epitech Coding Style (L'excellence ou rien)

Voici une version augmentée et visuelle de ton README.md. J'ai utilisé des emojis (stickers) pour rendre le tout plus lisible et professionnel, tout en respectant l'esprit "Epitech".
💻 C Pool Day 03 - First C Programming

<p align="center"> <img src="https://img.shields.io/badge/Language-C-blue.svg" alt="C"> <img src="https://img.shields.io/badge/Style-Epitech-red.svg" alt="Coding Style"> <img src="https://img.shields.io/badge/Project-Unix_&_C_Lab-lightgrey.svg" alt="Unix & C Lab"> </p>
📖 Présentation du Jour

Bienvenue dans le troisième jour de la Piscine. Aujourd'hui, on rentre dans le vif du sujet : la logique algorithmique. L'objectif est de maîtriser les boucles (while, for) et les conditions (if, else) en utilisant uniquement my_putchar.

    [!CAUTION] 🚫 Interdiction stricte : Tableaux (arrays), chaînes de caractères (strings) et fonctions de la libc (printf, etc.) sont bannis pour ce module !

🛠️ Contraintes Techniques

    Repository : CPool_Day03_202X

    Compilation : Doit compiler avec tous les fichiers .c du dossier.

    Fonction autorisée : Uniquement void my_putchar(char c);.

    Règle d'or : Ne jamais push son propre main.c ou my_putchar.c.

📂 Détails des Exercices
🔤 Alphabets et Chiffres

    Task 01 - my_print_alpha 🔡

        Affiche l'alphabet en minuscule de a à z.

    Task 02 - my_print_revalpha 🔀

        L'alphabet, mais à l'envers : de z à a.

    Task 03 - my_print_digits 🔢

        Affiche les chiffres de 0 à 9 dans l'ordre croissant.

⚖️ Logique de Base

    Task 04 - my_isneg ➕➖

        Affiche N si le nombre est négatif, P s'il est positif ou nul.

🧩 Algorithmes de Combinaisons

    Task 05 - my_print_comb 🎲

        Affiche toutes les combinaisons de 3 chiffres différents (ex: 012, 013...).

        Règle : Uniquement la plus petite combinaison possible (pas de 120 ou 210).

    Task 06 - my_print_comb2 👯

        Affiche les combinaisons de deux nombres de deux chiffres (ex: 00 01, 00 02...).

    Task 09 - my_print_combn 🧬

        La version ultime : affiche les combinaisons de n chiffres différents.

🖨️ Affichage de Nombres

    Task 07 - my_put_nbr 📟

        La fonction mythique. Doit être capable d'afficher n'importe quel int (même -2147483648).
🧪 Quality Control
🕵️ Coding Style Checker

Le code est passé au peigne fin pour garantir une lisibilité maximale :

    Indentation : Tabulations forcées.

    Fonctions : Maximum 20 lignes.

    Variables : Nommage explicite en snake_case.

🚦 Unit Testing

Chaque fonction possède son propre script de test dans le dossier /tests.
Bash

# Exemple pour compiler la Task 07 avec les tests :
gcc my_put_nbr.c tests/tests_my_put_nbr.c my_putchar.c -o unit_test
./unit_test

💡 Pro-Tips

    [!TIP] Pour my_put_nbr, attention au Modulo % et à la Division /. N'oubliez pas que le nombre -2147483648 ne peut pas être transformé en positif directement ! (Overflow).
