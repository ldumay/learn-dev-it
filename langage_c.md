# Langage C

## 1 - Les pré-requis - compilateur **GCC**

Pour pouvoir créer une programme un langage **C**, vous allez avoir besoin d'un compilateur afin de créer le ficier exécutable.

Normalement, un compilateur pour les programmes **C** est déjà présent avec **Windows**, **Linux** et **MacOS**.

N'hésitez pas à vérifier cela avant de vous lancer. 

### 1.1 - Vérifier et installer GCC sur Windows

#### 1.1.1 - Vérifier GCC

Pour mon cas, **GCC** n'est pas trouvable.

Pour savoir si vous vous trouvez dans le même cas que moi :

1. ouvrez simplement ou nouveau terminal/console
2. effectuez la commande : `ggc`

##### Si GCC est installé

```
C:\Users\dumay>gcc
gcc: fatal error: no input files
compilation terminated.
```

**GCC** est bien installé et vous affiche une erreur de compilation car aucun fichier n'a été préciser pour une compilation éventuelle. Dans ce cas, vous pouvez commencer à apprendre le langage **C**.

##### Si GCC n'est pas installé

```
C:\Users\ldumay>gcc
'gcc' n’est pas reconnu en tant que commande interne
ou externe, un programme exécutable ou un fichier de commandes.
```

Si vous obtenez la même erreur que celle-ci dessus, vous voilà dans la même posture que moi-même, et donc **GCC** n'est pas installé. Il est donc nécessaire de l'installé et l'ajouter au `PATH` de la console.

#### 1.1.2 - Installer GCC via MinGW

Pour installer **GCC**, il est existe un logiciel complet intégrant le compilateur `gcc.exe` que le recherche. Celui-ci est **MinGW**.

Né en 1998, le projet ralenti en 2005-2008 car la 1ère version ne supporte que les environnements d'exécution 32 bits. A cela, est né le une suite d'intégration des environnements d'exécution 64 bits.

Pour plus avoir plus d'informations sur le projet **MinGW**, wikipédia possède une page dédiée [ici](https://fr.wikipedia.org/wiki/MinGW).

- Pour 32bits - **MinGW** (ou **Mingw32 - Minimalist GNU for Windows**) - A native Windows port of the GNU Compiler Collection (GCC) : 
  - [Lien du site **officiel** du projet](https://osdn.net/projects/mingw/)
  - [Lien - mirroir **sourceforge.net**](https://sourceforge.net/projects/mingw/)
- Pour 64bits - **MinGW-w64** : 
  - [Lien du site officiel](https://www.mingw-w64.org/)

##### 1.1.3 - Liaison de GCC à la console

A la suite de l'installation de **Mingw32 ** sur mon environnement, j'ai comme adresse de dossier d'installation du logiciel : `C:\MinGW\bin`.

L'idée est donc d'ajouter cette adresse de dossier à **mes variables d'environnements**.

Pour ce faire, suivez la étapes ci-dessous.

![001](img/langage_c/001.png)

Dans votre barre de recherche Windows, écrivez **environnements**, ce qui devrais faire apparaitre **Modifier les variables d'environnement système** (ou **pour votre compte**) . 

Puis lancer le.

![002](img/langage_c/002.png)

Dans la fenêtre qui s'est ouverte, cliquer sur **variables d'environnement...** .

![003](img/langage_c/003.png)

Un nouvelle fenêtre s'ouvre. Sélectionner la variable **Path** dans la 1ère liste déroulante, puis cliquer sur **Modifier**.

![004](img/langage_c/004.png)

Une dernière fenêtre apparait. Ajouter ici votre adresse de dossier en cliquant sur **Nouveau**.

Vous pouvez maintenant fermer chaque fenêtre ouvertes en cliquant sur **OK** de chacune d'elle.

Fermer toutes les consoles ouvertes, puis ré-ouvrez une nouvelle console et effectuez enfin la commande `gcc`.

Vous devriez normalement avoir le résultat ci-dessous.

```
C:\Users\dumay>gcc
gcc: fatal error: no input files
compilation terminated.
```

Votre compilateur est maintenant prêt.

### 2 - Compilation de programme

Afin de compiler un programme **C** :

- Ouvrez une nouvelle console.
- Déplacer vous dans le dossier de votre projet, tel que `> cd /documents/mes_projets/` (ceci est un exemple).
- Effectuez la commande `gcc` avec l'option `-o` permettant de saisir un nom à votre fichier exécutable, tel que :

```
gcc -o <nom_du_fichier_exécutable>.exe <nom_du_fichier_principal_du_projet>.c
```

Exemple d'essai avec un projet de démo :

```
F:\LangageC\Test_1>gcc -o test.exe main.c
```

Résultat
```
.
├── main.c
└── test.exe
```

Vous savez maintenant compiler un programme **C** en tant que fichier executable.


---

Autres - en cours :

- https://pixees.fr/informatiquelycee/n_site/nsi_prem_langageC.html
- http://sdz.tdct.org/sdz/le-langage-c-1.html
- https://zestedesavoir.com/tutoriels/755/le-langage-c-1/