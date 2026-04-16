<!-- IMORTEL — README.md -->
<!-- ============================================================ -->
<!--   ██╗███╗   ███╗ ██████╗ ██████╗ ████████╗███████╗██╗       -->
<!--   ██║████╗ ████║██╔═══██╗██╔══██╗╚══██╔══╝██╔════╝██║       -->
<!--   ██║██╔████╔██║██║   ██║██████╔╝   ██║   █████╗  ██║       -->
<!--   ██║██║╚██╔╝██║██║   ██║██╔══██╗   ██║   ██╔══╝  ██║       -->
<!--   ██║██║ ╚═╝ ██║╚██████╔╝██║  ██║   ██║   ███████╗███████╗  -->
<!--   ╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝╚══════╝  -->
<!-- ============================================================ -->

<div align="center">

```
██████╗ ███████╗  ██████╗██╗   ██╗██████╗ ███████╗██╗  ██╗
██╔══██╗██╔════╝ ██╔════╝╚██╗ ██╔╝██╔══██╗██╔════╝╚██╗██╔╝
██║  ██║█████╗   ██║      ╚████╔╝ ██████╔╝█████╗   ╚███╔╝ 
██║  ██║██╔══╝   ██║       ╚██╔╝  ██╔═══╝ ██╔══╝   ██╔██╗ 
██████╔╝███████╗ ╚██████╗   ██║   ██║     ███████╗██╔╝ ██╗
╚═════╝ ╚══════╝  ╚═════╝   ╚═╝   ╚═╝     ╚══════╝╚═╝  ╚═╝

        [ S Y S T E M   I N F I L T R A T I O N   v1.0 ]
        [ A U T H O R : I M O R T E L  |  L Y O N , F R ]
```

<br/>

<!-- BADGES -->
![Language](https://img.shields.io/badge/LANGUAGE-C%2B%2B-red?style=for-the-badge&logo=cplusplus&logoColor=white&labelColor=0d0d0d)
![Platform](https://img.shields.io/badge/PLATFORM-WINDOWS%20x86%2Fx64-red?style=for-the-badge&logo=windows&logoColor=white&labelColor=0d0d0d)
![Build](https://img.shields.io/badge/BUILD-g%2B%2B%20MinGW-brightgreen?style=for-the-badge&logo=gnu&logoColor=white&labelColor=0d0d0d)
![Status](https://img.shields.io/badge/STATUS-OPERATIONAL-red?style=for-the-badge&labelColor=0d0d0d)
![License](https://img.shields.io/badge/LICENSE-MIT-gray?style=for-the-badge&labelColor=0d0d0d)
![Author](https://img.shields.io/badge/AUTHOR-IMORTEL-red?style=for-the-badge&labelColor=0d0d0d)

<br/>

```
╔══════════════════════════════════════════════════════════════╗
║  > CONNEXION ÉTABLIE...                                      ║
║  > AUTHENTIFICATION : [████████████████████] 100%           ║
║  > ACCÈS AUTORISÉ — BIENVENUE DANS LE SYSTÈME               ║
║  > LOCALISATION : LYON, FRANCE // CIBLE : INCONNU           ║
╚══════════════════════════════════════════════════════════════╝
```

</div>

---

## 🗂️ TABLE DES MATIÈRES

```
01 ── PRÉSENTATION DU PROJET
02 ── DÉMO & APERÇU
03 ── ARCHITECTURE DU PROJET
04 ── TÉLÉCHARGEMENTS
05 ── ENVIRONNEMENT & DÉPENDANCES
06 ── COMPILATION — GUIDE COMPLET
07 ── ANALYSE DÉTAILLÉE DU CODE C++
08 ── BIBLIOTHÈQUES WINDOWS UTILISÉES
09 ── AUTEUR
```

---

## 01 — PRÉSENTATION DU PROJET

<div align="center">

```
┌─────────────────────────────────────────────────────────────┐
│                                                             │
│   IMORTEL.CPP — APPLICATION WINDOWS EN C++ PUR             │
│   Compilation cross : x86 / x64                            │
│   Win32 API natif — aucune dépendance externe               │
│                                                             │
└─────────────────────────────────────────────────────────────┘
```

</div>

**IMORTEL** est une application Windows développée en **C++ natif** utilisant l'API Win32 de Microsoft. Le projet illustre la maîtrise de :

- La programmation système Windows bas niveau (`WinAPI`)
- La gestion des fenêtres, des événements et du GDI (rendu graphique)
- L'interaction avec le shell Windows (`ShellExecute`, `ShellAPI`)
- La compilation avec **g++ / MinGW** en mode 32 et 64 bits
- Le linkage statique pour produire un exécutable standalone

> Ce projet est réalisé dans un cadre **pédagogique et personnel**, dans le cadre du cursus **BTS SIO SISR** et de la progression vers le **Bac+3 AIS (Administrateur d'Infrastructures Sécurisées)**.

---

## 02 — DÉMO & APERÇU

<div align="center">

```
╔═══════════════════════════════════════╗
║   IMORTEL.EXE — INTERFACE             ║
║                                       ║
║   ██████████████████████████████      ║
║   █                              █    ║
║   █    [ IMORTEL SYSTEM v1.0 ]   █    ║
║   █                              █    ║
║   █    ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓    █    ║
║   █                              █    ║
║   ██████████████████████████████      ║
╚═══════════════════════════════════════╝
```

</div>

> 📌 Remplace cette section par une capture d'écran réelle de ton app : `![Preview](imortel.png)`

![Preview](imortel.png)

---

## 03 — ARCHITECTURE DU PROJET

```
📁 IMORTEL/
│
├── 📄 imortel.cpp          ← Code source principal (C++ Win32)
├── 💻 imortel.exe          ← Exécutable compilé (Windows x86/x64)
├── 🖼️  imortel.png          ← Aperçu / screenshot de l'application
├── 🎨 imortel.ico          ← Icône de l'application
├── 📦 imortel.rar          ← Archive du projet complet (WinRAR)
├── 📄 imortel.pdf          ← Documentation technique détaillée
└── 📖 README.md            ← Ce fichier
```

---

## 04 — TÉLÉCHARGEMENTS

<div align="center">

| Fichier | Description | Lien |
|--------|-------------|------|
| `imortel.cpp` | Code source complet C++ | [⬇ Télécharger](./imortel.cpp) |
| `imortel.exe` | Exécutable Windows compilé | [⬇ Télécharger](./imortel.exe) |
| `imortel.rar` | Archive complète du projet | [⬇ Télécharger](./imortel.rar) |
| `imortel.pdf` | Documentation PDF technique | [⬇ Télécharger](./imortel.pdf) |
| `imortel.png` | Aperçu de l'interface | [⬇ Voir](./imortel.png) |
| `imortel.ico` | Icône de l'application | [⬇ Télécharger](./imortel.ico) |

</div>

> ⚠️ **Avertissement** : L'exécutable est fourni à des fins éducatives. Toujours analyser un `.exe` dans un environnement isolé avant exécution.

---

## 05 — ENVIRONNEMENT & DÉPENDANCES

### Système requis

```
OS       : Windows 7 / 8 / 10 / 11 (32 ou 64 bits)
Compiler : g++ (MinGW-w64) ≥ 8.0
IDE      : Visual Studio Code (recommandé)
Shell    : PowerShell / CMD / Git Bash
```

### Installation de l'environnement dans VS Code

#### Étape 1 — Installer MinGW-w64

1. Télécharger **MinGW-w64** depuis [winlibs.com](https://winlibs.com/) ou [MSYS2](https://www.msys2.org/)
2. Extraire dans `C:\mingw64\`
3. Ajouter `C:\mingw64\bin` à la variable d'environnement **PATH** :
   ```
   Panneau de configuration → Système → Variables d'environnement → PATH → Modifier → Nouveau
   Ajouter : C:\mingw64\bin
   ```
4. Vérifier dans un terminal :
   ```bash
   g++ --version
   ```
   Résultat attendu :
   ```
   g++ (x86_64-posix-seh-rev0, Built by MinGW-Builds project) 13.x.x
   ```

#### Étape 2 — Extensions VS Code recommandées

```
C/C++ (Microsoft)           — ms-vscode.cpptools
C/C++ Extension Pack        — ms-vscode.cpptools-extension-pack
Code Runner                 — formulahendry.code-runner
```

#### Étape 3 — Ouvrir le bon répertoire dans le terminal

```powershell
# Dans VS Code → Terminal → Nouveau Terminal
# Naviguer jusqu'au dossier du projet :
cd C:\Users\TonNom\Desktop\IMORTEL
```

---

## 06 — COMPILATION — GUIDE COMPLET

### Commandes de compilation

Il existe deux variantes selon les fonctionnalités utilisées. Copie-colle la commande correspondante **directement dans le terminal VS Code** depuis le répertoire du projet.

---

#### ✅ VERSION 1 — Compilation standard x32 avec linkage statique

```bash
g++ -o imortel.exe imortel.cpp -m32 -luser32 -lgdi32 -lshell32 -lwinmm -lole32 -loleaut32 -static
```

**Détail de chaque flag :**

| Flag | Rôle |
|------|------|
| `-o imortel.exe` | Spécifie le nom du fichier de sortie |
| `imortel.cpp` | Fichier source à compiler |
| `-m32` | Force la compilation en mode **32 bits** (x86) |
| `-luser32` | Lie la bibliothèque User32 (fenêtres, messages, clavier/souris) |
| `-lgdi32` | Lie GDI32 (rendu graphique : formes, texte, bitmap) |
| `-lshell32` | Lie Shell32 (ShellExecute, gestion fichiers, icônes) |
| `-lwinmm` | Lie WinMM (Windows Multimedia : son, timers) |
| `-lole32` | Lie OLE32 (COM, objets, interfaces) |
| `-loleaut32` | Lie OleAut32 (automatisation OLE, VARIANT, BSTR) |
| `-static` | **Linkage statique** : intègre les runtimes dans l'exe (pas de DLL manquante) |

> 💡 **Quand utiliser cette version ?** Quand tu cibles une machine 32 bits ou veux un exe universel sans dépendances DLL C++ runtime.

---

#### ✅ VERSION 2 — Compilation avec planificateur de tâches Windows

```bash
g++ imortel.cpp -o imortel.exe -luser32 -lgdi32 -lshell32 -lwinmm -lole32 -loleaut32 -ltaskschd
```

**Différence clé :**

| Flag | Rôle |
|------|------|
| `-ltaskschd` | Lie **TaskSchd** (Windows Task Scheduler) : permet de créer/gérer des tâches planifiées via l'API COM `ITaskScheduler`) |
| *(pas de `-m32`)* | Compilation en **64 bits** (défaut de MinGW-w64) |
| *(pas de `-static`)* | Linkage dynamique : plus léger, mais requiert les DLLs sur la machine cible |

> 💡 **Quand utiliser cette version ?** Quand ton code utilise le planificateur de tâches Windows (`taskschd.h`, `ITaskService`, `ITaskFolder`) pour programmer des exécutions automatiques.

---

### Résultat attendu après compilation

```
> g++ -o imortel.exe imortel.cpp -m32 -luser32 -lgdi32 -lshell32 -lwinmm -lole32 -loleaut32 -static

(aucune sortie = succès)

> ls
imortel.cpp   imortel.exe   imortel.ico   imortel.png   README.md
```

---

## 07 — ANALYSE DÉTAILLÉE DU CODE C++

> 📌 **Note** : Remplace les sections ci-dessous par ton code réel une fois collé. La structure d'explication est déjà en place.

### Structure générale du fichier `imortel.cpp`

```
imortel.cpp
│
├── [01] INCLUDES & HEADERS         — Déclaration des bibliothèques
├── [02] CONSTANTES & MACROS        — Définitions globales
├── [03] DÉCLARATIONS GLOBALES      — Variables et handles
├── [04] WinMain()                  — Point d'entrée du programme
├── [05] Création de la fenêtre     — RegisterClass + CreateWindow
├── [06] Boucle de messages         — GetMessage / DispatchMessage
└── [07] WindowProc()               — Gestionnaire d'événements
```

---

### [01] INCLUDES & HEADERS

```cpp
#include <windows.h>      // API Win32 principale (fenêtres, messages, GDI)
#include <shellapi.h>     // ShellExecute, SHGetSpecialFolderPath
#include <winuser.h>      // Constantes UI : WM_*, VK_*, MB_*
#include <mmsystem.h>     // PlaySound, timeGetTime, waveOut
#include <ole2.h>         // CoInitialize, OLE Automation
#include <taskschd.h>     // ITaskService (version 2 seulement)
#include <comdef.h>       // _com_ptr_t, smart pointers COM
```

**Pourquoi `#include <windows.h>` en premier ?**
Ce header est le noyau de la WinAPI. Il inclut lui-même `wingdi.h`, `winbase.h`, `winnt.h` et définit les types fondamentaux : `HWND`, `HINSTANCE`, `DWORD`, `LPSTR`, `WPARAM`, `LPARAM`.

---

### [02] POINT D'ENTRÉE — `WinMain()`

```cpp
// Remplace ton WinMain ici — exemple de structure :
int WINAPI WinMain(
    HINSTANCE hInstance,      // Handle de l'instance courante
    HINSTANCE hPrevInstance,  // Toujours NULL en Win32 moderne
    LPSTR     lpCmdLine,      // Arguments de la ligne de commande
    int       nCmdShow        // État initial de la fenêtre (SW_SHOW, SW_HIDE...)
) {
    // ... corps du programme
}
```

**Explication des paramètres :**

| Paramètre | Type | Description |
|-----------|------|-------------|
| `hInstance` | `HINSTANCE` | Identifiant unique du processus — sert à charger des ressources (icônes, menus) |
| `hPrevInstance` | `HINSTANCE` | Obsolète depuis Win32, toujours `NULL` |
| `lpCmdLine` | `LPSTR` | Chaîne des arguments passés au lancement |
| `nCmdShow` | `int` | Constante `SW_*` : `SW_SHOW`, `SW_HIDE`, `SW_MAXIMIZE`... |

---

### [03] ENREGISTREMENT DE CLASSE — `RegisterClassEx()`

```cpp
WNDCLASSEX wc = { 0 };
wc.cbSize        = sizeof(WNDCLASSEX);
wc.style         = CS_HREDRAW | CS_VREDRAW;  // Redessine si redimensionné
wc.lpfnWndProc   = WindowProc;               // Pointeur vers le gestionnaire d'événements
wc.hInstance     = hInstance;
wc.hIcon         = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_IMORTEL));
wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
wc.lpszClassName = TEXT("ImortelClass");

RegisterClassEx(&wc);
```

**Champ par champ :**

| Champ | Rôle |
|-------|------|
| `cbSize` | Taille de la structure — obligatoire pour `RegisterClassEx` |
| `style` | Comportement de la fenêtre : `CS_HREDRAW` = redessine sur resize horizontal |
| `lpfnWndProc` | **Callback** : fonction qui recevra tous les messages Windows (WM_PAINT, WM_CLOSE...) |
| `hIcon` | Icône du programme (chargée depuis les ressources ou un fichier `.ico`) |
| `hbrBackground` | Couleur de fond : `COLOR_WINDOW+1` = blanc standard |
| `lpszClassName` | Nom unique de la classe — utilisé dans `CreateWindowEx` |

---

### [04] CRÉATION DE FENÊTRE — `CreateWindowEx()`

```cpp
HWND hwnd = CreateWindowEx(
    WS_EX_CLIENTEDGE,              // Style étendu : bordure avec ombre
    TEXT("ImortelClass"),          // Nom de classe enregistré
    TEXT("IMORTEL — System v1.0"), // Titre de la barre
    WS_OVERLAPPEDWINDOW,           // Style : barre titre + bordures + min/max
    CW_USEDEFAULT, CW_USEDEFAULT,  // Position x, y (auto)
    800, 600,                      // Largeur, hauteur en pixels
    NULL,                          // Pas de fenêtre parente
    NULL,                          // Pas de menu
    hInstance,
    NULL
);

ShowWindow(hwnd, nCmdShow);
UpdateWindow(hwnd);
```

---

### [05] BOUCLE DE MESSAGES — `GetMessage()`

```cpp
MSG msg = { 0 };
while (GetMessage(&msg, NULL, 0, 0)) {
    TranslateMessage(&msg);   // Convertit WM_KEYDOWN en WM_CHAR si applicable
    DispatchMessage(&msg);    // Envoie le message à WindowProc
}
return (int)msg.wParam;
```

**Fonctionnement :**

```
[File d'attente Windows]
        │
        ▼
  GetMessage()  ─── récupère le prochain message
        │
  TranslateMessage()  ─── traduit les touches clavier
        │
  DispatchMessage()   ─── appelle WindowProc avec le message
        │
  [Répète]  ─── jusqu'à WM_QUIT
```

---

### [06] GESTIONNAIRE D'ÉVÉNEMENTS — `WindowProc()`

```cpp
LRESULT CALLBACK WindowProc(
    HWND   hwnd,    // Handle de la fenêtre concernée
    UINT   uMsg,    // Identifiant du message (WM_PAINT, WM_CLOSE...)
    WPARAM wParam,  // Paramètre 1 du message (dépend du message)
    LPARAM lParam   // Paramètre 2 du message (dépend du message)
) {
    switch (uMsg) {

        case WM_PAINT: {
            // Code de rendu graphique GDI
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            // ... dessin
            EndPaint(hwnd, &ps);
            break;
        }

        case WM_DESTROY:
            PostQuitMessage(0);   // Envoie WM_QUIT → termine la boucle
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}
```

**Messages Windows les plus courants :**

| Message | Déclenché quand |
|---------|----------------|
| `WM_CREATE` | La fenêtre vient d'être créée |
| `WM_PAINT` | La fenêtre doit être redessinée |
| `WM_KEYDOWN` | Touche enfoncée |
| `WM_LBUTTONDOWN` | Clic gauche souris |
| `WM_CLOSE` | L'utilisateur clique sur la croix |
| `WM_DESTROY` | La fenêtre est détruite — appeler `PostQuitMessage` |
| `WM_TIMER` | Un timer configuré via `SetTimer` s'est déclenché |
| `WM_SIZE` | La fenêtre a été redimensionnée |

---

### [07] RENDU GDI — Dessin dans la fenêtre

```cpp
// Exemple de rendu texte + rectangle dans WM_PAINT :
case WM_PAINT: {
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hwnd, &ps);

    // Fond noir
    HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 0));
    FillRect(hdc, &ps.rcPaint, hBrush);
    DeleteObject(hBrush);

    // Texte rouge
    SetTextColor(hdc, RGB(255, 0, 0));
    SetBkMode(hdc, TRANSPARENT);
    TextOut(hdc, 50, 50, TEXT("IMORTEL"), 7);

    EndPaint(hwnd, &ps);
    break;
}
```

| Fonction GDI | Rôle |
|-------------|------|
| `BeginPaint` | Initialise le contexte de dessin (HDC) |
| `CreateSolidBrush` | Crée un pinceau de couleur unie |
| `FillRect` | Remplit un rectangle avec un pinceau |
| `SetTextColor` | Définit la couleur du texte (RGB) |
| `SetBkMode(TRANSPARENT)` | Fond du texte transparent |
| `TextOut` | Affiche une chaîne à la position (x, y) |
| `EndPaint` | Libère le HDC |
| `DeleteObject` | Libère les ressources GDI créées |

---

## 08 — BIBLIOTHÈQUES WINDOWS UTILISÉES

```
┌──────────────────────────────────────────────────────────────┐
│  BIBLIOTHÈQUE        │  FLAG        │  USAGE                  │
├──────────────────────┼──────────────┼─────────────────────────┤
│  User32.dll          │  -luser32    │  Fenêtres, messages UI   │
│  Gdi32.dll           │  -lgdi32     │  Rendu graphique GDI     │
│  Shell32.dll         │  -lshell32   │  ShellExecute, fichiers  │
│  Winmm.dll           │  -lwinmm     │  Son, timers multimedia  │
│  Ole32.dll           │  -lole32     │  COM, interfaces OLE     │
│  OleAut32.dll        │  -loleaut32  │  Automatisation OLE      │
│  TaskSchd.dll (v2)   │  -ltaskschd  │  Planificateur tâches    │
└──────────────────────┴──────────────┴─────────────────────────┘
```

---

## 09 — AUTEUR

<div align="center">

```
╔══════════════════════════════════════════════════════╗
║                                                      ║
║   ██╗███╗   ███╗ ██████╗ ██████╗ ████████╗███████╗  ║
║   ██║████╗ ████║██╔═══██╗██╔══██╗╚══██╔══╝██╔════╝  ║
║   ██║██╔████╔██║██║   ██║██████╔╝   ██║   █████╗    ║
║   ██║██║╚██╔╝██║██║   ██║██╔══██╗   ██║   ██╔══╝    ║
║   ██║██║ ╚═╝ ██║╚██████╔╝██║  ██║   ██║   ███████╗  ║
║   ╚═╝╚═╝     ╚═╝ ╚═════╝ ╚═╝  ╚═╝   ╚═╝   ╚══════╝  ║
║                                                      ║
║   Marwan Alazzaoui — BTS SIO SISR                    ║
║   Lyon, France                                       ║
║   Objectif : Bac+3 AIS — sept. 2026                  ║
║                                                      ║
║   GitHub  : github.com/TON_USERNAME                  ║
║   Email   : ton@email.com                            ║
╚══════════════════════════════════════════════════════╝
```

![Profile](https://img.shields.io/badge/BTS_SIO-SISR-red?style=for-the-badge&labelColor=0d0d0d)
![Cyber](https://img.shields.io/badge/CYBERSECURITY-OFFENSIVE%20%7C%20DEFENSIVE-red?style=for-the-badge&labelColor=0d0d0d)
![Target](https://img.shields.io/badge/TARGET-Bac%2B3%20AIS%202026-brightgreen?style=for-the-badge&labelColor=0d0d0d)

</div>

---

<div align="center">

```
[ SYSTÈME DÉCONNECTÉ ]
[ SESSION TERMINÉE — TRACE EFFACÉE ]
[ IMORTEL — 2025 ]
```

*"The quieter you become, the more you can hear."*

</div>
