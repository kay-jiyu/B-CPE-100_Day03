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

📂 Task Breakdown
Task	Icon	Function	Description
T01	🔡	my_print_alpha	Alphabet complet de 'a' vers 'z'.
T02	🔄	my_print_revalpha	Alphabet inversé de 'z' vers 'a'.
T03	🔢	my_print_digits	Suite numérique de '0' vers '9'.
T04	⚖️	my_isneg	Test de signe : Affiche 'N' (Negative) ou 'P' (Positive).
T05	🧩	my_print_comb	Trios de chiffres uniques (012, 013... 789).
T06	🖇️	my_print_comb2	Duo de nombres à deux chiffres (00 01... 98 99).
T07	📟	my_put_nbr	Affiche n'importe quel entier (même l'INT_MIN).
T09	♾️	my_print_combn	Combinaisons dynamiques pour un n donné.
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
