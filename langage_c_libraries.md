# La langage C

[<== Retour](../langage_c.md)

## Les librairies

- **[Windows]** - `<assert.h>` - Contient la macro assert, utilisée pour aider à détecter des incohérences de données et d'autres types de bogues dans les versions de débogage d'un programme.
- **[Windows]** - `<complex.h>` - Pour manipuler les nombres complexes (introduit par C99).
- **[Windows]** - `<conio.h>` - Pour détecter et une touche enfoncée et agir sur la un console. - [Plus ici](https://boowiki.info/art/bibliotheque-standard-c/conio-h.html)
- **[Windows]** - `<ctype.h>` - Fonctions utilisées pour classifier rapidement les caractères, ou pour convertir entre majuscules et minuscules de manière indépendante du système de codage des caractères (character set) utilisé (ASCII, ISO/CEI 8859-1, EBCDIC, etc.).
- **[Windows]** - `<errno.h>` - Ensemble (ou le plus souvent sous-ensemble) des codes d'erreurs renvoyés par les fonctions de la bibliothèque standard au travers de la variable errno.
- **[Windows]** - `<fenv.h>` - Pour contrôler l'environnement en virgule flottante (floating-point) (introduit par C99).
- **[Windows]** - `<float.h>` - Contient des constantes qui spécifient les propriétés des nombres en virgule flottante qui dépendent de l'implémentation, telles que la différence minimale entre deux nombres en virgule flottante différents (xxx_EPSILON), le nombre maximum de chiffres de précision (xxx_DIG) et l'intervalle des nombres pouvant être représentés (xxx_MIN, xxx_MAX).
- **[Windows]** - `<inttypes.h>` - Pour des conversions précises entre types entiers (introduit par C99).
- **[Windows]** - `<iso646.h>` - Pour programmer avec le jeu de caractères ISO 646 (introduit par Amd.1).
- **[Windows]** - `<limits.h>` - Contient des constantes qui spécifient les propriétés des types entiers qui dépendent de l'implémentation, comme les intervalles des nombres pouvant être représentés (xxx_MIN, xxx_MAX).
- **[Windows]** - `<locale.h>` - Pour s'adapter aux différentes conventions culturelles.
- **[Windows]** - `<math.h>` - Pour calculer des fonctions mathématiques courantes. C99 a ajouté de nombreuses fonctions mathématiques, en particulier pour converger avec la norme CEI 559 dite aussi IEEE 754.
- **[Windows]** - `<setjmp.h>` - Pour exécuter des instructions goto non locales (sortes d'exceptions).
- **[Windows]** - `<signal.h>` - Pour contrôler les signaux (conditions exceptionnelles demandant un traitement immédiat, par exemple signal de l'utilisateur).
- **[Windows]** - `<stdarg.h>` - Pour créer des fonctions avec un nombre variable d'arguments.
- **[Windows]** - `<stdbool.h>` - Pour avoir une sorte de type booléen (introduit par C99).
- **[Windows]** - `<stddef.h>` - Définit plusieurs types et macros utiles, comme NULL.
- **[Windows]** - `<stdint.h>` - Définit divers types d'entiers, c'est un sous-ensemble de inttypes.h (introduit par C99).
- **[Windows]** - `<stdio.h>` - Fournit les capacités centrales d'entrée/sortie du langage C, comme la fonction printf.
- **[Windows]** - `<stdlib.h>` - Pour exécuter diverses opérations dont la conversion, la génération de nombres pseudo-aléatoires, l'allocation de mémoire, le contrôle de processus, la gestion de l'environnement et des signaux, la recherche et le tri.
- **[Windows]** - `<string.h>` - Pour manipuler les chaînes de caractères.
- **[Windows]** - `<tgmath.h>` - Pour des opérations mathématiques sur des types génériques (introduit par C99).
- **[Windows]** - `<threads.h>` - Implémente la gestion de threads comme un standard de la libc (introduit par C11)
- **[Windows]** - `<time.h>` - Pour convertir entre différents formats de date et d'heure.
- **[Windows]** - `<wchar.h>` - Pour manipuler les caractères larges (wide char), nécessaire pour supporter un grand nombre de langues et singulièrement Unicode (introduit par Amd.1).
- **[Windows]** - `<wctype.h>` - Pour classifier les caractères larges (introduit par Amd.1).