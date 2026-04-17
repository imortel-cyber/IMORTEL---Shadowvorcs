<div align="center">

```
 ██████████████████████████████████████████████████████████████████████████████
 █                                                                            █
 █    ██╗███╗   ███╗ ██████╗ ██████╗ ████████╗███████╗██╗                   █
 █    ██║████╗ ████║██╔═══██╗██╔══██╗╚══██╔══╝██╔════╝██║                   █
 █    ██║██╔████╔██║██║   ██║██████╔╝   ██║   █████╗  ██║                   █
 █    ██║██║╚██╔╝██║██║   ██║██╔══██╗   ██║   ██╔══╝  ██║                   █
 █    ██║██║ ╚═╝ ██║╚██████╔╝██║  ██║   ██║   ███████╗███████╗              █
 █    ╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝╚══════╝              █
 █                                                                            █
 █         ·  P R O J E T   S H A D O W V O R C S   v 1 . 0  ·              █
 █                                                                            █
 █   ┌──────────────────────────────────────────────────────────────────┐    █
 █   │  AUTH   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  [ 100% ] ✓   │    █
 █   │  LOAD   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  [ 100% ] ✓   │    █
 █   │  EXEC   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  [ 100% ] ✓   │    █
 █   └──────────────────────────────────────────────────────────────────┘    █
 █                                                                            █
 █              > ACCÈS AUTORISÉ  //  BIENVENUE DANS LE SYSTÈME              █
 █              > OPÉRATEUR : I M O R T E L  // FR                           █
 █                                                                            █
 ██████████████████████████████████████████████████████████████████████████████
```

<br/>

![Language](https://img.shields.io/badge/LANGUAGE-C%2B%2B-red?style=for-the-badge&logo=cplusplus&logoColor=white&labelColor=0d0d0d)
![Platform](https://img.shields.io/badge/PLATFORM-WINDOWS-red?style=for-the-badge&logo=windows&logoColor=white&labelColor=0d0d0d)
![Build](https://img.shields.io/badge/BUILD-g%2B%2B%20MinGW-brightgreen?style=for-the-badge&logo=gnu&logoColor=white&labelColor=0d0d0d)
![Arch](https://img.shields.io/badge/ARCH-x86%20%7C%20x64-red?style=for-the-badge&labelColor=0d0d0d)
![Status](https://img.shields.io/badge/STATUS-OPERATIONAL-brightgreen?style=for-the-badge&labelColor=0d0d0d)
![Author](https://img.shields.io/badge/AUTHOR-IMORTEL-red?style=for-the-badge&labelColor=0d0d0d)
![License](https://img.shields.io/badge/LICENSE-MIT-gray?style=for-the-badge&labelColor=0d0d0d)

</div>

---

## 🗂️ TABLE DES MATIÈRES

```
  ┌─────────────────────────────────────────────────────────────────┐
  │                                                                 │
  │   01  ──  PRÉSENTATION DE SHADOWVORCS                           │
  │   02  ──  APERÇU DU PAYLOAD                                     │
  │   03  ──  ARCHITECTURE DU PROJET                                │
  │   04  ──  TÉLÉCHARGEMENTS                                       │
  │   05  ──  ENVIRONNEMENT & INSTALLATION                          │
  │   06  ──  COMPILATION — GUIDE COMPLET                           │
  │   07  ──  ANALYSE DÉTAILLÉE DU CODE C++                         │
  │   08  ──  BIBLIOTHÈQUES WINDOWS UTILISÉES                       │
  │   09  ──  AUTEUR                                                │
  │                                                                 │
  └─────────────────────────────────────────────────────────────────┘
```

---

## 01 — PRÉSENTATION DE SHADOWVORCS

<div align="center">

```
  ╔═══════════════════════════════════════════════════════════════════╗
  ║                                                                   ║
  ║   ██████╗ ██████╗  ██████╗      ██╗███████╗ ██████╗████████╗    ║
  ║   ██╔══██╗██╔══██╗██╔═══██╗     ██║██╔════╝██╔════╝╚══██╔══╝    ║
  ║   ██████╔╝██████╔╝██║   ██║     ██║█████╗  ██║        ██║       ║
  ║   ██╔═══╝ ██╔══██╗██║   ██║██   ██║██╔══╝  ██║        ██║       ║
  ║   ██║     ██║  ██║╚██████╔╝╚█████╔╝███████╗╚██████╗   ██║       ║
  ║   ╚═╝     ╚═╝  ╚═╝ ╚═════╝  ╚════╝ ╚══════╝ ╚═════╝   ╚═╝       ║
  ║                                                                   ║
  ║   Application Windows native — C++ pur  //  Win32 API            ║
  ║   Compilation : g++ MinGW  //  x86 & x64                         ║
  ║   Aucune dépendance externe — linkage statique disponible         ║
  ║                                                                   ║
  ╚═══════════════════════════════════════════════════════════════════╝
```

</div>

**SHADOWVORCS** un ransomware de type "locker" avec capacités de persistance et d'évasion de défenses. Il est conçu pour prendre le contrôle total d'un système Windows, désactiver ses protectionsest, (possible d'exiger une rançon si code modifié) **Windows native** développée en **C++ pur** utilisant l'API Win32 de Microsoft. Zéro framework, zéro surcouche — uniquement du code système bas niveau.

**Contournement de l'UAC (User Account Control)**

Le malware utilise une vulnérabilité COM spécifique (CMSTPLUA) pour contourner les mécanismes d'élévation de privilèges Windows. Cette technique permet d'exécuter des commandes avec des droits administratifs sans déclencher l'invite UAC standard, rendant l'infection plus discrète.

**Désactivation des protections système**

Une fois les privilèges élevés obtenus, le malware exécute des commandes PowerShell pour :

- Désactiver le contrôle de compte d'utilisateur (UAC)
- Désactiver la protection en temps réel de Windows Defender
- Collecter des informations de configuration réseau

**Blocage des interactions utilisateur**

Une fois activé, le malware intercepte toutes les entrées clavier, empêchant l'utilisateur d'utiliser son système ou de fermer l'application malveillante.

**Exécution de shellcode**

Le programme injecte et exécute du code machine directement en mémoire, ce qui lui permet d'éventuellement télécharger des charges utiles supplémentaires, établir des connexions réseau distantes ou voler des données.

⚠️**TECHNIQUE D'OBFUSCATION, D'EMBALLAGE ET DE STÉGANOGRAPHIE AVEC LE CARACTÈRE RLO**⚠️

**Étape 1** : Vous devez d'abord créer un fichier batch qui servira à exécuter les composants malveillants.
Créez un fichier texte nommé **lance.bat** (clic droit -> Nouveau -> Document texte, puis renommez-le) 
Dans ce fichier, insérez exactement ces deux lignes :
```bash
start "" "imortel.pdf" ou "imortel.png"
start "" "imortels.exe"
```
Ce fichier batch a pour rôle de :

Ouvrir le PDF/PNG (leurre) pour tromper l'utilisateur
Lancer silencieusement l'exécutable malveillant en arrière-plan ou premier plan

**Étape 2** : Création de l'archive SFX auto-extractible.
Sélectionnez les trois fichiers nécessaires :
- **imortel.pdf** ou **imortel.png** (leurre stéganographique)
- **imortel.exe** (le malware réel)
- **lance.bat** (le script de lancement)
Faites un clic droit -> "Ajouter à l'archive..."

Configurez l'archive comme suit :

Nom de l'archive : **Imortel.scr** (l'extension .scr est cruciale car elle s'exécute comme un .exe mais moins suspecte)
Cocher : "Créer une archive SFX" (auto-extractible)
Dans l'onglet "Avancé", cliquez sur "Options SFX..." et configurez ceci :
- **Champ "Exécuter après extraction"** : tapez lance.bat
- **Onglet "Modes"** : choisissez "Masquer tout" (Silent mode) pour exécuter sans interface visible
- **Onglet "Mise à jour"** : choisissez "Écraser tous les fichiers" pour éviter les conflits
- **Onglet "Texte et icône"** : parcourez et sélectionnez l'icône imortel.ico ou autre pour donner une apparence légitime

**Étape 3 : Obfuscation du nom de fichier avec RLO.**
Maintenant, appliquez la technique d'obfuscation avec le caractère Right-to-Left Override RTO (U+202E) :
- Renommez le fichier Imortel.scr en Shadowvofdp.scr
- Insérez le caractère RLO (U+202E) juste avant le "f" de "fdp"
- Le nom de fichier s'affichera alors comme : Shadowvorcs.pdf
- Même manipulation pour .png .jpg ou autre

---

**Fonctionnalités principales :**

- **Prise de contrôle système** - Élévation silencieuse des privilèges et désactivation des défenses
- **Blocage de l'accès** - Interface plein écran non fermable et blocage des entrées clavier
- **Extorsion financière** - Message de rançon avec redirection vers un site de paiement
- **Persistance** - Modifications système pour maintenir l'accès malgré les redémarrages
- **Furtivité** - Utilisation de techniques COM pour éviter la détection par les solutions antivirus

**Mode opératoire :** 

- Exécution initiale (probablement via phishing ou exploit)
- Contournement de l'UAC pour obtenir les droits administratifs
- Désactivation des protections système
- Affichage de l'interface de rançon
- Blocage complet des interactions utilisateur
- Exécution du shellcode pour des actions malveillantes additionnelles

> Programmation **Win32 API** - Rendu graphique via **GDI32** - Architecture **COM / OLE** - Planification système via **TaskSchd** - Compilation **g++ MinGW**

---

## 02 — APERÇU DU PAYLOAD

<div align="center">

```
  ┌──────────────────────────────────────────────────────────────┐
  │                                                              │
  │        ╔════════════════════════════════════════╗           │
  │        ║   IMORTEL — System v1.0         _ □ ✕ ║           │
  │        ╠════════════════════════════════════════╣           │
  │        ║                                        ║           │
  │        ║     ██████████████████████████████     ║           │
  │        ║     █                            █     ║           │
  │        ║    █   [ IMORTEL  v 1 . 0 ]       █     ║           │
  │        ║     █                            █     ║           │
  │        ║     █   > SYSTÈME  OPÉRATIONNEL  █     ║           │
  │        ║     █   > AUTEUR   : IMORTEL     █     ║           │
  │        ║    █   > STATUT  : ACTIF  ✓       █     ║           │
  │        ║     █                            █     ║           │
  │        ║     ██████████████████████████████     ║           │
  │        ║                                        ║           │
  │        ╚════════════════════════════════════════╝           │
  │                                                              │
  └──────────────────────────────────────────────────────────────┘
```

</div>

[![Demo — SHADOWVORCS](imortel.png)](https://files.catbox.moe/fuy95p.mp4)

---

## 03 — ARCHITECTURE DU PROJET

```
  ┌─────────────────────────────────────────────────────────────────────┐
  │                                                                     │
  │   📁  IMORTEL/                                                     │
  │   │                                                                 │
  │   ├── 📄  imortel.cpp     ←  Code source principal (C++ Win32)     │
  │   ├── 💻  imortel.exe     ←  Exécutable compilé (Windows x86/x64)  │
  │   ├── 🖼️  imortel.png     ←  Screenshot                            │
  │   ├── 🎨  imortel.ico     ←  Icône de l'application (.ico)         │
  │   ├── 📦  imortel.rar     ←  Archive complète du projet (WinRAR)   │
  │   ├── 📄  imortel.pdf     ←  Leurre stéganographique               │
  │   └── 📖  README.md       ←  Markdown                              │
  │                                                                     │
  └─────────────────────────────────────────────────────────────────────┘
```

---

## 04 — TÉLÉCHARGEMENTS

<div align="center">

```
  ╔══════════════════════════════════════════════════════════════════╗
  ║              > FICHIERS DISPONIBLES AU TÉLÉCHARGEMENT            ║
  ╚══════════════════════════════════════════════════════════════════╝
```

| Fichier | Type | Description | Lien |
|:--------|:----:|:------------|:----:|
| `imortel.cpp` | SOURCE | Code source complet C++ Win32 | [⬇ Télécharger](./imortel.cpp) |
| `imortel.exe` | BINARY | Exécutable Windows compilé | [⬇ Télécharger](./imortel.exe) |
| `imortel.rar` | ARCHIVE | Projet complet empaqueté | [⬇ Télécharger](./imortel.rar) |
| `imortel.pdf` | DOC | Leurre stéganographique PDF | [⬇ Télécharger](./imortel.pdf) |
| `imortel.png` | IMAGE | Screenshot | [👁 Voir](./imortel.png) |
| `imortel.ico` | ICON | Icône de l'application | [⬇ Télécharger](./imortel.ico) |

</div>

> ⚠️ L'exécutable est fourni à titre éducatif. Toujours exécuter dans un environnement isolé si tu ne connais pas la source.

---

## 05 — ENVIRONNEMENT & INSTALLATION

### Prérequis système

```
  ┌───────────────────────────────────────────────────────────┐
  │   OS          Windows 7 / 8 / 10 / 11  (32 ou 64 bits)   │
  │   Compilateur g++ (MinGW-w64)  ≥  8.0                    │
  │   IDE         Visual Studio Code  (recommandé)            │
  │   Shell       PowerShell  /  CMD  /  Git Bash             │
  └───────────────────────────────────────────────────────────┘
```

### Étape 1 — Installer MinGW-w64

Télécharge MinGW-w64 depuis [winlibs.com](https://winlibs.com) ou [MSYS2](https://www.msys2.org), extrais dans `C:\mingw64\`, puis ajoute au PATH :

```
Panneau de configuration
  └── Système
        └── Paramètres système avancés
              └── Variables d'environnement
                    └── PATH → Modifier → Nouveau
                          └── C:\mingw64\bin
```

Vérification dans le terminal :

```bash
g++ --version
```

Résultat attendu :

```
g++ (x86_64-posix-seh-rev0, Built by MinGW-Builds project) 13.x.x
```

### Étape 2 — Extensions VS Code recommandées

```
  C/C++                ── ms-vscode.cpptools
  C/C++ Extension Pack ── ms-vscode.cpptools-extension-pack
  Code Runner          ── formulahendry.code-runner
```

### Étape 3 — Se placer dans le bon répertoire

```powershell
cd C:\Users\TonNom\Desktop\IMORTEL
```

---

## 06 — COMPILATION — GUIDE COMPLET

<div align="center">

```
  ╔══════════════════════════════════════════════════════════════════╗
  ║                   > DEUX VARIANTES DE BUILD                      ║
  ╚══════════════════════════════════════════════════════════════════╝
```

</div>

### ✅ VERSION 1 — x32 · Linkage statique

```bash
g++ -o imortel.exe imortel.cpp -m32 -luser32 -lgdi32 -lshell32 -lwinmm -lole32 -loleaut32 -static
```

```
  ┌─────────────────────┬──────────────────────────────────────────────────────┐
  │  FLAG               │  RÔLE                                                │
  ├─────────────────────┼──────────────────────────────────────────────────────┤
  │  -o imortel.exe     │  Nom du fichier de sortie                            │
  │  imortel.cpp        │  Fichier source à compiler                           │
  │  -m32               │  Force la compilation en mode 32 bits (x86)          │
  │  -luser32           │  User32  — fenêtres, messages, clavier, souris       │
  │  -lgdi32            │  GDI32   — rendu graphique, formes, texte, bitmap    │
  │  -lshell32          │  Shell32 — ShellExecute, gestion fichiers, icônes    │
  │  -lwinmm            │  WinMM   — son, timers multimédias                   │
  │  -lole32            │  OLE32   — COM, interfaces objets                    │
  │  -loleaut32         │  OleAut32 — automatisation OLE, VARIANT, BSTR        │
  │  -static            │  Intègre les runtimes → exe standalone sans DLL      │
  └─────────────────────┴──────────────────────────────────────────────────────┘
```

### ✅ VERSION 2 — x64 · Task Scheduler

```bash
g++ imortel.cpp -o imortel.exe -luser32 -lgdi32 -lshell32 -lwinmm -lole32 -loleaut32 -ltaskschd
```

```
  ┌─────────────────────┬──────────────────────────────────────────────────────┐
  │  FLAG               │  RÔLE                                                │
  ├─────────────────────┼──────────────────────────────────────────────────────┤
  │  -ltaskschd         │  TaskSchd — Windows Task Scheduler via COM           │
  │                     │  (ITaskService, ITaskFolder, IRegisteredTask)        │
  │  (sans -m32)        │  Compilation en 64 bits (défaut MinGW-w64)           │
  │  (sans -static)     │  Linkage dynamique — exe plus léger                  │
  └─────────────────────┴──────────────────────────────────────────────────────┘
```

---

## 07 — ANALYSE DÉTAILLÉE DU CODE C++

<div align="center">

```
  ╔══════════════════════════════════════════════════════════════════════╗
  ║                                                                      ║
  ║              > CODE SOURCE  //  imortel.cpp                          ║
  ║              > DÉCOMPOSITION COMPLÈTE — SECTION PAR SECTION          ║
  ║              > [ REMPLACER CHAQUE BLOC PAR TON VRAI CODE ]           ║
  ║                                                                      ║
  ╚══════════════════════════════════════════════════════════════════════╝
```

</div>

### Structure générale

```
  imortel.cpp
  │
  ├── [BLOC 01]  INCLUDES & HEADERS
  ├── [BLOC 02]  CONSTANTES & MACROS
  ├── [BLOC 03]  DÉCLARATIONS GLOBALES
  ├── [BLOC 04]  WinMain() — point d'entrée
  ├── [BLOC 05]  RegisterClassEx() — enregistrement fenêtre
  ├── [BLOC 06]  CreateWindowEx() — création fenêtre
  ├── [BLOC 07]  GetMessage() — boucle de messages
  ├── [BLOC 08]  WindowProc() — gestionnaire d'événements
  ├── [BLOC 09]  GDI / Rendu graphique
  └── [BLOC 10]  Fonctions utilitaires / logique métier
```

---

### ▸ BLOC 01 — INCLUDES & HEADERS

> 📌 **Remplace le code ci-dessous par la vraie section `#include` de ton `imortel.cpp`**

```cpp
// ============================================================
//  BLOC 01 — INCLUDES & HEADERS
//  Déclare toutes les bibliothèques système utilisées
// ============================================================

#include <windows.h>      // API Win32 principale — fenêtres, GDI, types fondamentaux
#include <shellapi.h>     // ShellExecute, SHGetSpecialFolderPath
#include <winuser.h>      // Constantes UI : WM_*, VK_*, MB_*, DialogBox
#include <mmsystem.h>     // PlaySound, timeGetTime, waveOut
#include <ole2.h>         // CoInitialize, CoCreateInstance, OLE Automation
#include <taskschd.h>     // ITaskService, ITaskFolder (version 2 seulement)
#include <comdef.h>       // _com_ptr_t, smart pointers COM, _bstr_t
```

> **Explication à remplacer** — `windows.h` est le noyau de la WinAPI. Il inclut `wingdi.h`, `winbase.h`, `winnt.h` et définit tous les types fondamentaux : `HWND`, `HINSTANCE`, `DWORD`, `LPSTR`, `WPARAM`, `LPARAM`. Chaque `#include` supplémentaire déverrouille une couche spécifique du système Windows.

---

### ▸ BLOC 02 — CONSTANTES & MACROS

> 📌 **Remplace le code ci-dessous par tes vraies définitions de constantes**

```cpp
// ============================================================
//  BLOC 02 — CONSTANTES & MACROS
//  Centralise toutes les valeurs fixes du programme
// ============================================================

#define APP_NAME       TEXT("IMORTEL")
#define APP_VERSION    TEXT("v1.0")
#define WINDOW_WIDTH   800
#define WINDOW_HEIGHT  600
#define TIMER_ID       1
#define TIMER_INTERVAL 1000    // millisecondes

// Couleurs RGB personnalisées
#define COLOR_BG       RGB(0,   0,   0  )   // Fond noir
#define COLOR_RED      RGB(220, 20,  20 )   // Rouge signature IMORTEL
#define COLOR_WHITE    RGB(255, 255, 255)   // Texte clair
```

> **Explication à remplacer** — Les `#define` permettent de centraliser les valeurs fixes pour éviter les "magic numbers" dans le code. Modifier `WINDOW_WIDTH` ici suffit à changer toutes les occurrences. `RGB(r, g, b)` est une macro WinAPI qui encode les trois canaux couleur dans un entier 32 bits de type `COLORREF`.

---

### ▸ BLOC 03 — DÉCLARATIONS GLOBALES

> 📌 **Remplace le code ci-dessous par tes vraies variables globales**

```cpp
// ============================================================
//  BLOC 03 — DÉCLARATIONS GLOBALES
//  Variables et handles accessibles depuis toutes les fonctions
// ============================================================

HWND   g_hwnd       = NULL;    // Handle de la fenêtre principale
HINSTANCE g_hInst   = NULL;    // Instance du processus
BOOL   g_bRunning   = TRUE;    // Flag d'état — FALSE = arrêt propre
int    g_iCounter   = 0;       // Compteur exemple (timer, frames...)
TCHAR  g_szBuffer[256];        // Buffer texte réutilisable
```

> **Explication à remplacer** — Le préfixe `g_` est une convention C++ Win32 pour identifier les variables globales (scope = fichier entier). `HWND` est un "Handle to WiNDow" — un identifiant opaque que Windows utilise en interne pour référencer chaque fenêtre. `HINSTANCE` identifie le processus courant auprès du système.

---

### ▸ BLOC 04 — `WinMain()` — POINT D'ENTRÉE

> 📌 **Remplace le code ci-dessous par ton vrai `WinMain()`**

```cpp
// ============================================================
//  BLOC 04 — WinMain() — POINT D'ENTRÉE DU PROGRAMME
//  Équivalent de main() pour les applications Windows GUI
// ============================================================

int WINAPI WinMain(
    HINSTANCE hInstance,      // Handle de l'instance courante
    HINSTANCE hPrevInstance,  // Toujours NULL en Win32 moderne
    LPSTR     lpCmdLine,      // Arguments de la ligne de commande
    int       nCmdShow        // État initial : SW_SHOW, SW_HIDE...
) {
    g_hInst = hInstance;

    CoInitialize(NULL);          // Initialise COM (nécessaire pour OLE / TaskSchd)

    // ... enregistrement classe, création fenêtre, boucle messages

    CoUninitialize();            // Libère COM proprement
    return 0;
}
```

> **Explication à remplacer** — `WinMain` remplace `main()` dans les applications Windows sans console. `WINAPI` est une macro qui définit la convention d'appel `__stdcall` — obligatoire pour que Windows puisse invoquer la fonction correctement. `CoInitialize(NULL)` initialise le sous-système COM, requis dès qu'on utilise `ole32` ou `taskschd`.

---

### ▸ BLOC 05 — `RegisterClassEx()` — ENREGISTREMENT DE LA FENÊTRE

> 📌 **Remplace le code ci-dessous par ton vrai enregistrement de classe**

```cpp
// ============================================================
//  BLOC 05 — RegisterClassEx() — ENREGISTREMENT DE CLASSE
//  Définit le "modèle" de toutes les fenêtres de ce type
// ============================================================

WNDCLASSEX wc    = { 0 };
wc.cbSize        = sizeof(WNDCLASSEX);
wc.style         = CS_HREDRAW | CS_VREDRAW;
wc.lpfnWndProc   = WindowProc;
wc.hInstance     = hInstance;
wc.hIcon         = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_IMORTEL));
wc.hIconSm       = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_IMORTEL));
wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
wc.lpszClassName = TEXT("ImortelClass");

if (!RegisterClassEx(&wc)) {
    MessageBox(NULL, TEXT("Échec RegisterClassEx"), TEXT("Erreur"), MB_ICONERROR);
    return 1;
}
```

> **Explication à remplacer** — `WNDCLASSEX` est la structure qui décrit le comportement visuel et fonctionnel d'un type de fenêtre. `lpfnWndProc` est le champ le plus important : il pointe vers la fonction `WindowProc` qui recevra tous les messages Windows pour cette classe. `GetStockObject(BLACK_BRUSH)` utilise un pinceau système noir préexistant — plus efficace que d'en créer un avec `CreateSolidBrush`.

---

### ▸ BLOC 06 — `CreateWindowEx()` — CRÉATION DE LA FENÊTRE

> 📌 **Remplace le code ci-dessous par ton vrai `CreateWindowEx()`**

```cpp
// ============================================================
//  BLOC 06 — CreateWindowEx() — CRÉATION DE LA FENÊTRE
//  Instancie une fenêtre à partir de la classe enregistrée
// ============================================================

HWND hwnd = CreateWindowEx(
    WS_EX_CLIENTEDGE,               // Style étendu : bordure enfoncée
    TEXT("ImortelClass"),            // Classe enregistrée à l'étape 05
    TEXT("IMORTEL — System v1.0"),   // Titre affiché dans la barre
    WS_OVERLAPPEDWINDOW,             // Barre titre + bordures + min/max/close
    CW_USEDEFAULT, CW_USEDEFAULT,    // Position x, y auto
    WINDOW_WIDTH,                    // Largeur
    WINDOW_HEIGHT,                   // Hauteur
    NULL, NULL, hInstance, NULL
);

if (!hwnd) {
    MessageBox(NULL, TEXT("Échec CreateWindowEx"), TEXT("Erreur"), MB_ICONERROR);
    return 1;
}

ShowWindow(hwnd, nCmdShow);
UpdateWindow(hwnd);
g_hwnd = hwnd;
```

> **Explication à remplacer** — `CreateWindowEx` alloue en mémoire une nouvelle instance de fenêtre à partir de la classe "ImortelClass". Elle retourne un `HWND` (handle), qui sera utilisé dans toutes les opérations suivantes. `WS_OVERLAPPEDWINDOW` est le style composite standard : il combine `WS_CAPTION`, `WS_SYSMENU`, `WS_THICKFRAME`, `WS_MINIMIZEBOX` et `WS_MAXIMIZEBOX`.

---

### ▸ BLOC 07 — `GetMessage()` — BOUCLE DE MESSAGES

> 📌 **Remplace le code ci-dessous par ta vraie boucle de messages**

```cpp
// ============================================================
//  BLOC 07 — Boucle de messages — CŒUR DE L'APPLICATION
//  Windows est event-driven : tout passe par cette boucle
// ============================================================

MSG msg = { 0 };

while (GetMessage(&msg, NULL, 0, 0) > 0) {
    TranslateMessage(&msg);   // Convertit WM_KEYDOWN → WM_CHAR si applicable
    DispatchMessage(&msg);    // Envoie le message à WindowProc()
}

return (int)msg.wParam;       // Code de retour du processus
```

```
  ┌──────────────────────────────────────────────────────────────┐
  │                                                              │
  │   [OS Windows — File d'attente de messages]                 │
  │          │                                                   │
  │          ▼                                                   │
  │   GetMessage() ────── récupère le prochain message           │
  │          │            retourne FALSE sur WM_QUIT             │
  │          ▼                                                   │
  │   TranslateMessage() ─ traduit touches → caractères         │
  │          │                                                   │
  │          ▼                                                   │
  │   DispatchMessage() ── route vers WindowProc()               │
  │          │                                                   │
  │          └─────────────── [ boucle infinie ]                 │
  │                                                              │
  └──────────────────────────────────────────────────────────────┘
```

> **Explication à remplacer** — Cette boucle est le cœur de toute application Win32. `GetMessage` bloque jusqu'à ce qu'un message arrive dans la file du thread. Elle retourne `0` uniquement sur `WM_QUIT`, ce qui rompt la boucle et termine l'application proprement. `TranslateMessage` est requis pour que les appuis sur les touches de caractères génèrent des événements `WM_CHAR` en plus de `WM_KEYDOWN`.

---

### ▸ BLOC 08 — `WindowProc()` — GESTIONNAIRE D'ÉVÉNEMENTS

> 📌 **Remplace le code ci-dessous par ton vrai `WindowProc()`**

```cpp
// ============================================================
//  BLOC 08 — WindowProc() — GESTIONNAIRE D'ÉVÉNEMENTS
//  Reçoit et traite chaque message Windows pour la fenêtre
// ============================================================

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {

        case WM_CREATE:
            // Initialisation au moment de la création de la fenêtre
            // Ex : SetTimer(hwnd, TIMER_ID, TIMER_INTERVAL, NULL);
            return 0;

        case WM_TIMER:
            // Déclenché à chaque tick du timer
            // wParam == TIMER_ID pour identifier quel timer
            g_iCounter++;
            InvalidateRect(hwnd, NULL, TRUE);   // Force un redraw WM_PAINT
            return 0;

        case WM_KEYDOWN:
            if (wParam == VK_ESCAPE) PostQuitMessage(0);
            return 0;

        case WM_PAINT:
            // → voir BLOC 09
            return 0;

        case WM_DESTROY:
            KillTimer(hwnd, TIMER_ID);
            PostQuitMessage(0);
            return 0;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}
```

```
  ┌────────────────────┬───────────────────────────────────────────┐
  │  MESSAGE           │  DÉCLENCHÉ QUAND                          │
  ├────────────────────┼───────────────────────────────────────────┤
  │  WM_CREATE         │  La fenêtre vient d'être créée            │
  │  WM_PAINT          │  La fenêtre doit être redessinée          │
  │  WM_TIMER          │  Timer SetTimer() écoulé                  │
  │  WM_KEYDOWN        │  Touche du clavier enfoncée               │
  │  WM_LBUTTONDOWN    │  Clic gauche souris                       │
  │  WM_MOUSEMOVE      │  Déplacement du curseur                   │
  │  WM_SIZE           │  Fenêtre redimensionnée                   │
  │  WM_CLOSE          │  Croix de fermeture cliquée               │
  │  WM_DESTROY        │  Fenêtre détruite → PostQuitMessage(0)    │
  └────────────────────┴───────────────────────────────────────────┘
```

> **Explication à remplacer** — `WindowProc` est la callback centrale : Windows l'appelle automatiquement pour chaque événement. Le `switch(uMsg)` filtre les messages qui t'intéressent. Tout message non géré **doit** être passé à `DefWindowProc` — sinon le comportement par défaut (déplacer la fenêtre, redimensionner...) est cassé.

---

### ▸ BLOC 09 — GDI — RENDU GRAPHIQUE

> 📌 **Remplace le code ci-dessous par ton vrai rendu GDI dans `WM_PAINT`**

```cpp
// ============================================================
//  BLOC 09 — GDI — RENDU GRAPHIQUE
//  Tout le dessin se fait dans le handler WM_PAINT
// ============================================================

case WM_PAINT: {
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hwnd, &ps);

    // ── Fond noir ──────────────────────────────────────────
    HBRUSH hBrushBg = CreateSolidBrush(COLOR_BG);
    FillRect(hdc, &ps.rcPaint, hBrushBg);
    DeleteObject(hBrushBg);

    // ── Police Courier New, bold, 24px ─────────────────────
    HFONT hFont = CreateFont(
        24, 0, 0, 0,
        FW_BOLD,                  // Gras
        FALSE, FALSE, FALSE,
        DEFAULT_CHARSET,
        OUT_DEFAULT_PRECIS,
        CLIP_DEFAULT_PRECIS,
        CLEARTYPE_QUALITY,        // Anti-aliasing ClearType
        DEFAULT_PITCH,
        TEXT("Courier New")       // Police monospace — style terminal
    );
    HFONT hOldFont = (HFONT)SelectObject(hdc, hFont);

    // ── Texte rouge sur fond noir ───────────────────────────
    SetTextColor(hdc, COLOR_RED);
    SetBkMode(hdc, TRANSPARENT);

    TextOut(hdc, 50, 50, TEXT("IMORTEL — SYSTEM v1.0"), 21);

    // ── Nettoyage obligatoire des ressources GDI ───────────
    SelectObject(hdc, hOldFont);
    DeleteObject(hFont);

    EndPaint(hwnd, &ps);
    return 0;
}
```

| Fonction GDI | Rôle |
|-------------|------|
| `BeginPaint / EndPaint` | Délimite la zone de dessin — obligatoire en paire |
| `CreateSolidBrush` | Crée un pinceau couleur unie RGB |
| `FillRect` | Remplit un rectangle avec un pinceau |
| `CreateFont` | Crée une police avec taille, poids, famille, rendu |
| `SelectObject` | Active un objet GDI (police, pinceau, plume) dans le HDC |
| `SetTextColor` | Couleur du texte suivant — `COLORREF` = `RGB(r,g,b)` |
| `SetBkMode(TRANSPARENT)` | Fond du texte transparent (pas de rectangle blanc) |
| `TextOut` | Dessine une chaîne à la position `(x, y)` |
| `DeleteObject` | ⚠️ Libère la mémoire — fuite GDI si oublié |

> **Explication à remplacer** — Le `HDC` (Handle to Device Context) est un contexte de rendu abstrait — il peut cibler une fenêtre, une imprimante ou un bitmap en mémoire. `BeginPaint` valide la "dirty region" (zone invalide) et retourne un HDC prêt à l'emploi. Chaque objet GDI créé (`CreateSolidBrush`, `CreateFont`...) **doit** être libéré avec `DeleteObject` après usage, sous peine de fuites mémoire GDI accumulées.

---

### ▸ BLOC 10 — FONCTIONS UTILITAIRES

> 📌 **Remplace le code ci-dessous par tes vraies fonctions utilitaires**

```cpp
// ============================================================
//  BLOC 10 — FONCTIONS UTILITAIRES / LOGIQUE MÉTIER
//  Fonctions auxiliaires appelées depuis WindowProc ou WinMain
// ============================================================

// ── Ouvre un fichier avec l'application par défaut ──────────
void OpenFile(LPCTSTR szPath) {
    ShellExecute(
        NULL,           // Fenêtre parente
        TEXT("open"),   // Verbe : "open", "runas", "print"
        szPath,         // Chemin du fichier
        NULL,           // Paramètres (NULL = aucun)
        NULL,           // Répertoire de travail
        SW_SHOWNORMAL   // Mode d'affichage
    );
}

// ── Affiche une boîte de dialogue d'erreur ──────────────────
void ShowError(LPCTSTR szMsg) {
    MessageBox(
        g_hwnd,
        szMsg,
        TEXT("IMORTEL — Erreur"),
        MB_ICONERROR | MB_OK
    );
}

// ── Joue un son système ─────────────────────────────────────
void PlayBeep(DWORD dwFreq, DWORD dwDuration) {
    Beep(dwFreq, dwDuration);   // Fréquence Hz, durée ms
}
```

> **Explication à remplacer** — `ShellExecute` est la fonction la plus polyvalente de `shell32` : elle ouvre n'importe quel fichier avec l'application associée par Windows (comme un double-clic). Le verbe `"runas"` permet de demander une élévation UAC. `MessageBox` est la boîte de dialogue synchrone la plus simple — elle bloque le thread jusqu'à ce que l'utilisateur clique.

---

## 08 — BIBLIOTHÈQUES WINDOWS UTILISÉES

```
  ┌──────────────────────────────────────────────────────────────────────┐
  │   BIBLIOTHÈQUE       FLAG            RÔLE PRINCIPAL                  │
  │   ─────────────────────────────────────────────────────────────────  │
  │   User32.dll        -luser32        Fenêtres, messages, UI, clavier │
  │   Gdi32.dll         -lgdi32         Rendu graphique GDI              │
  │   Shell32.dll       -lshell32       ShellExecute, fichiers, icônes  │
  │   Winmm.dll         -lwinmm         Son, timers multimédias          │
  │   Ole32.dll         -lole32         COM, interfaces OLE              │
  │   OleAut32.dll      -loleaut32      Automatisation OLE, VARIANT      │
  │   TaskSchd.dll      -ltaskschd      Planificateur Windows (v2)       │
  └──────────────────────────────────────────────────────────────────────┘
```

---

## 09 — AUTEUR

<div align="center">

```
  ╔═══════════════════════════════════════════════════════════════════════╗
  ║                                                                       ║
  ║    ██████████████████████████████████████████████████████████████    ║
  ║    █                                                            █    ║
  ║    █    ██╗███╗   ███╗ ██████╗ ██████╗ ████████╗███████╗██╗   █    ║
  ║    █    ██║████╗ ████║██╔═══██╗██╔══██╗╚══██╔══╝██╔════╝██║   █    ║
  ║    █    ██║██╔████╔██║██║   ██║██████╔╝   ██║   █████╗  ██║   █    ║
  ║    █    ██║██║╚██╔╝██║██║   ██║██╔══██╗   ██║   ██╔══╝  ██║   █    ║
  ║    █    ██║██║ ╚═╝ ██║╚██████╔╝██║  ██║   ██║   ███████╗███████╗  █    ║
  ║    █    ╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝╚══════╝  █    ║
  ║    █                                                            █    ║
  ║    █    Marwan Alazzaoui  ──  BTS SIO SISR  ──  Lyon, France   █    ║
  ║    █    Objectif : Bac+3 AIS  //  Septembre 2026               █    ║
  ║    █                                                            █    ║
  ║    █    GitHub  :  github.com/TON_USERNAME                      █    ║
  ║    █    Email   :  ton@email.com                                █    ║
  ║    █                                                            █    ║
  ║    ██████████████████████████████████████████████████████████████    ║
  ║                                                                       ║
  ╚═══════════════════════════════════════════════════════════════════════╝
```

![BTS](https://img.shields.io/badge/BTS_SIO-SISR-red?style=for-the-badge&labelColor=0d0d0d)
![Cyber](https://img.shields.io/badge/CYBERSECURITY-OFFENSIVE_%7C_DEFENSIVE-red?style=for-the-badge&labelColor=0d0d0d)
![Target](https://img.shields.io/badge/TARGET-Bac%2B3_AIS_2026-brightgreen?style=for-the-badge&labelColor=0d0d0d)
![City](https://img.shields.io/badge/LOCATION-LYON_FR-gray?style=for-the-badge&labelColor=0d0d0d)

</div>

---

<div align="center">

```
  ██████████████████████████████████████████████████████████████████████████████
  █                                                                            █
  █              [ SESSION TERMINÉE  //  TRACE EFFACÉE ]                      █
  █              [ DÉCONNEXION  //  IMORTEL  //  LYON, FR ]                   █
  █                                                                            █
  █          "The quieter you become, the more you can hear."                  █
  █                                                                            █
  █                        · IMORTEL · 2025 ·                                 █
  █                                                                            █
  ██████████████████████████████████████████████████████████████████████████████
```

</div>

---

## 10 — SYSTÈME ACTIF

<div align="center">

```
 ███████╗██╗  ██╗ █████╗ ██████╗  ██████╗ ██╗    ██╗██╗   ██╗ ██████╗ ██████╗  ██████╗███████╗
 ██╔════╝██║  ██║██╔══██╗██╔══██╗██╔═══██╗██║    ██║██║   ██║██╔═══██╗██╔══██╗██╔════╝██╔════╝
 ███████╗███████║███████║██║  ██║██║   ██║██║ █╗ ██║██║   ██║██║   ██║██████╔╝██║     ███████╗
 ╚════██║██╔══██║██╔══██║██║  ██║██║   ██║██║███╗██║╚██╗ ██╔╝██║   ██║██╔══██╗██║     ╚════██║
 ███████║██║  ██║██║  ██║██████╔╝╚██████╔╝╚███╔███╔╝ ╚████╔╝ ╚██████╔╝██║  ██║╚██████╗███████║
 ╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝  ╚═════╝  ╚══╝╚══╝   ╚═══╝   ╚═════╝ ╚═╝  ╚═╝ ╚═════╝╚══════╝
```

```
  ┌──────────────────────────────────────────────────────────────────────────┐
  │                                                                          │
  │   > INITIALISATION DU SYSTÈME.............  [ ████████████████ ] ✓      │
  │   > CHARGEMENT DU NOYAU IMORTEL...........  [ ████████████████ ] ✓      │
  │   > AUTHENTIFICATION : SUCCÈS.............  [ ████████████████ ] ✓      │
  │   > CONNEXION ÉTABLIE — BIENVENUE.........  [ ████████████████ ] ✓      │
  │   > SHADOWVORCS // SIGNAL ACTIF...........  [ ████████████████ ] ✓      │
  │                                                                          │
  │   SYS  > ONLINE   │  AUTH  > GRANTED   │  TRACE  > EFFACÉE              │
  │   LOC  > LYON, FR │  OPR   > IMORTEL   │  SIGNAL > ██████               │
  │                                                                          │
  │                 · S I G N A L   D É T E C T É ·                         │
  │                                                                          │
  └──────────────────────────────────────────────────────────────────────────┘
```

</div>

---

## 11 — IDENTITÉ VISUELLE

<div align="center">

```
 ███████╗██╗  ██╗ █████╗ ██████╗  ██████╗ ██╗    ██╗██╗   ██╗ ██████╗ ██████╗  ██████╗███████╗
 ██╔════╝██║  ██║██╔══██╗██╔══██╗██╔═══██╗██║    ██║██║   ██║██╔═══██╗██╔══██╗██╔════╝██╔════╝
 ███████╗███████║███████║██║  ██║██║   ██║██║ █╗ ██║██║   ██║██║   ██║██████╔╝██║     ███████╗
 ╚════██║██╔══██║██╔══██║██║  ██║██║   ██║██║███╗██║╚██╗ ██╔╝██║   ██║██╔══██╗██║     ╚════██║
 ███████║██║  ██║██║  ██║██████╔╝╚██████╔╝╚███╔███╔╝ ╚████╔╝ ╚██████╔╝██║  ██║╚██████╗███████║
 ╚══════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝  ╚═════╝  ╚══╝╚══╝   ╚═══╝   ╚═════╝ ╚═╝  ╚═╝ ╚═════╝╚══════╝
```

```
    ██╗███╗   ███╗ ██████╗ ██████╗ ████████╗███████╗██╗
    ██║████╗ ████║██╔═══██╗██╔══██╗╚══██╔══╝██╔════╝██║
    ██║██╔████╔██║██║   ██║██████╔╝   ██║   █████╗  ██║
    ██║██║╚██╔╝██║██║   ██║██╔══██╗   ██║   ██╔══╝  ██║
    ██║██║ ╚═╝ ██║╚██████╔╝██║  ██║   ██║   ███████╗███████╗
    ╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝╚══════╝
```

```
  ┌──────────────────────────────────────────────────────┐
  │   IMORTEL  //  SIGNAL ACTIF  //  LYON, FR            │
  │   > SHADOWVORCS  ██████  ONLINE  ✓                   │
  └──────────────────────────────────────────────────────┘
```

[⬇ Télécharger imortel.png](./imortel.png)

</div>
