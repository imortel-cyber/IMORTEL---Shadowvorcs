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
 █         ·  S Y S T E M   I N F I L T R A T I O N   v 1 . 0  ·            █
 █                                                                            █
 █   ┌──────────────────────────────────────────────────────────────────┐    █
 █   │  AUTH   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  [ 100% ] ✓   │    █
 █   │  LOAD   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  [ 100% ] ✓   │    █
 █   │  EXEC   ▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓  [ 100% ] ✓   │    █
 █   └──────────────────────────────────────────────────────────────────┘    █
 █                                                                            █
 █              > ACCÈS AUTORISÉ  //  BIENVENUE DANS LE SYSTÈME              █
 █              > OPÉRATEUR : I M O R T E L  //  LYON, FR                    █
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
  │   01  ──  PRÉSENTATION DU PROJET                               │
  │   02  ──  APERÇU & SCREENSHOT                                  │
  │   03  ──  ARCHITECTURE DU PROJET                               │
  │   04  ──  TÉLÉCHARGEMENTS                                      │
  │   05  ──  ENVIRONNEMENT & INSTALLATION                         │
  │   06  ──  COMPILATION — GUIDE COMPLET                          │
  │   07  ──  ANALYSE DÉTAILLÉE DU CODE C++                        │
  │   08  ──  BIBLIOTHÈQUES WINDOWS UTILISÉES                      │
  │   09  ──  AUTEUR                                               │
  │                                                                 │
  └─────────────────────────────────────────────────────────────────┘
```

---

## 01 — PRÉSENTATION DU PROJET

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

**IMORTEL** est une application **Windows native** développée en **C++ pur** utilisant l'API Win32 de Microsoft. Zéro framework, zéro surcouche — uniquement du code système bas niveau.

Le projet couvre :

- Programmation **Win32 API** — fenêtres, messages, événements
- Rendu graphique via **GDI32** — formes, texte, bitmaps
- Interaction **Shell32** — `ShellExecute`, gestion fichiers système
- Audio **WinMM** — sons, timers multimédias
- Architecture **COM / OLE** — `ole32`, `oleaut32`
- Planification système via **TaskSchd** (version 2)
- Compilation **g++ MinGW** — linkage statique et dynamique

> Projet réalisé dans le cadre du **BTS SIO SISR** — progression vers le **Bac+3 AIS (Administrateur d'Infrastructures Sécurisées)**, septembre 2026.

---

## 02 — APERÇU & SCREENSHOT

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
  │        ║     █   [ IMORTEL  v 1 . 0 ]    █     ║           │
  │        ║     █                            █     ║           │
  │        ║     █   > SYSTÈME  OPÉRATIONNEL  █     ║           │
  │        ║     █   > AUTEUR   : IMORTEL     █     ║           │
  │        ║     █   > STATUT  : ACTIF  ✓    █     ║           │
  │        ║     █                            █     ║           │
  │        ║     ██████████████████████████████     ║           │
  │        ║                                        ║           │
  │        ╚════════════════════════════════════════╝           │
  │                                                              │
  └──────────────────────────────────────────────────────────────┘
```

</div>

> Remplace le schéma ASCII par le vrai screenshot une fois le projet compilé :

![Preview](imortel.png)

---

## 03 — ARCHITECTURE DU PROJET

```
  ┌─────────────────────────────────────────────────────────────────────┐
  │                                                                     │
  │   📁  IMORTEL/                                                      │
  │   │                                                                 │
  │   ├── 📄  imortel.cpp     ←  Code source principal  (C++ Win32)    │
  │   ├── 💻  imortel.exe     ←  Exécutable compilé  (Windows x86/x64) │
  │   ├── 🖼️   imortel.png     ←  Screenshot de l'application           │
  │   ├── 🎨  imortel.ico     ←  Icône de l'application (.ico)         │
  │   ├── 📦  imortel.rar     ←  Archive complète du projet (WinRAR)   │
  │   ├── 📄  imortel.pdf     ←  Documentation technique               │
  │   └── 📖  README.md       ←  Ce fichier                            │
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
| `imortel.pdf` | DOC | Documentation technique PDF | [⬇ Télécharger](./imortel.pdf) |
| `imortel.png` | IMAGE | Screenshot de l'interface | [👁 Voir](./imortel.png) |
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

Dans **VS Code → Terminal → Nouveau Terminal** :

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

> Utilise cette version pour cibler une machine **x86 32 bits** ou produire un **exécutable universel** sans dépendances DLL C++ runtime.

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

> Utilise cette version si ton code utilise `taskschd.h` pour créer des **tâches planifiées Windows** via l'interface COM `ITaskService`.

### Résultat attendu

```powershell
PS C:\Users\TonNom\Desktop\IMORTEL> g++ -o imortel.exe imortel.cpp -m32 -luser32 -lgdi32 -lshell32 -lwinmm -lole32 -loleaut32 -static

# Aucune sortie = compilation réussie ✓

PS C:\Users\TonNom\Desktop\IMORTEL> dir

    imortel.cpp
    imortel.exe    ← généré ici
    imortel.ico
    imortel.png
    README.md
```

---

## 07 — ANALYSE DÉTAILLÉE DU CODE C++

<div align="center">

```
  ╔══════════════════════════════════════════════════════════════════╗
  ║              > CODE SOURCE  //  imortel.cpp                      ║
  ║              > DÉCOMPOSITION COMPLÈTE SECTION PAR SECTION        ║
  ╚══════════════════════════════════════════════════════════════════╝
```

</div>

> 📌 **Cette section sera complétée progressivement** au fur et à mesure que le code source est finalisé.

### Structure générale

```
  imortel.cpp
  │
  ├── [01]  INCLUDES & HEADERS       ── Déclaration des bibliothèques
  ├── [02]  CONSTANTES & MACROS      ── Définitions globales
  ├── [03]  DÉCLARATIONS GLOBALES    ── Variables et handles
  ├── [04]  WinMain()                ── Point d'entrée du programme
  ├── [05]  Création de la fenêtre   ── RegisterClassEx + CreateWindowEx
  ├── [06]  Boucle de messages       ── GetMessage / DispatchMessage
  └── [07]  WindowProc()             ── Gestionnaire d'événements Win32
```

### [01] INCLUDES & HEADERS

```cpp
#include <windows.h>      // API Win32 principale — fenêtres, GDI, types fondamentaux
#include <shellapi.h>     // ShellExecute, SHGetSpecialFolderPath
#include <winuser.h>      // Constantes UI : WM_*, VK_*, MB_*, DialogBox
#include <mmsystem.h>     // PlaySound, timeGetTime, waveOut (lié avec -lwinmm)
#include <ole2.h>         // CoInitialize, CoCreateInstance, OLE Automation
#include <taskschd.h>     // ITaskService, ITaskFolder (version 2 seulement)
#include <comdef.h>       // _com_ptr_t, smart pointers COM, _bstr_t
```

> `windows.h` est le noyau — il inclut lui-même `wingdi.h`, `winbase.h`, `winnt.h` et définit tous les types fondamentaux Win32 : `HWND`, `HINSTANCE`, `DWORD`, `LPSTR`, `WPARAM`, `LPARAM`.

### [02] POINT D'ENTRÉE — `WinMain()`

```cpp
int WINAPI WinMain(
    HINSTANCE hInstance,      // Handle de l'instance courante du processus
    HINSTANCE hPrevInstance,  // Toujours NULL en Win32 moderne (obsolète)
    LPSTR     lpCmdLine,      // Arguments de la ligne de commande
    int       nCmdShow        // État initial : SW_SHOW, SW_HIDE, SW_MAXIMIZE...
) {
    CoInitialize(NULL);
    // ... corps du programme
    CoUninitialize();
    return 0;
}
```

| Paramètre | Type | Description |
|-----------|------|-------------|
| `hInstance` | `HINSTANCE` | Identifiant du processus — sert à charger des ressources (icônes, menus) |
| `hPrevInstance` | `HINSTANCE` | Toujours `NULL` depuis Win32 |
| `lpCmdLine` | `LPSTR` | Arguments passés au lancement de l'exe |
| `nCmdShow` | `int` | Constante `SW_*` définissant l'affichage initial de la fenêtre |

### [03] ENREGISTREMENT DE CLASSE — `RegisterClassEx()`

```cpp
WNDCLASSEX wc    = { 0 };
wc.cbSize        = sizeof(WNDCLASSEX);
wc.style         = CS_HREDRAW | CS_VREDRAW;
wc.lpfnWndProc   = WindowProc;
wc.hInstance     = hInstance;
wc.hIcon         = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_IMORTEL));
wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
wc.lpszClassName = TEXT("ImortelClass");
RegisterClassEx(&wc);
```

| Champ | Rôle |
|-------|------|
| `cbSize` | Taille de la structure — obligatoire pour `RegisterClassEx` |
| `style` | `CS_HREDRAW` = redessine si largeur change / `CS_VREDRAW` = si hauteur change |
| `lpfnWndProc` | Callback — fonction qui reçoit tous les messages Windows |
| `hIcon` | Icône chargée depuis les ressources — utilise `imortel.ico` |
| `hbrBackground` | Couleur de fond — `COLOR_WINDOW+1` = blanc standard |
| `lpszClassName` | Nom unique de la classe, réutilisé dans `CreateWindowEx` |

### [04] CRÉATION DE FENÊTRE — `CreateWindowEx()`

```cpp
HWND hwnd = CreateWindowEx(
    WS_EX_CLIENTEDGE,
    TEXT("ImortelClass"),
    TEXT("IMORTEL — System v1.0"),
    WS_OVERLAPPEDWINDOW,
    CW_USEDEFAULT, CW_USEDEFAULT,
    800, 600,
    NULL, NULL, hInstance, NULL
);
ShowWindow(hwnd, nCmdShow);
UpdateWindow(hwnd);
```

### [05] BOUCLE DE MESSAGES — `GetMessage()`

```cpp
MSG msg = { 0 };
while (GetMessage(&msg, NULL, 0, 0)) {
    TranslateMessage(&msg);
    DispatchMessage(&msg);
}
return (int)msg.wParam;
```

```
  ┌─────────────────────────────────────────────────────┐
  │   [File d'attente Windows]                          │
  │          │                                          │
  │          ▼                                          │
  │   GetMessage()       ── récupère le prochain msg    │
  │          │                                          │
  │   TranslateMessage() ── traduit les touches clavier │
  │          │                                          │
  │   DispatchMessage()  ── route vers WindowProc()     │
  │          │                                          │
  │   [Répète en boucle jusqu'à WM_QUIT]                │
  └─────────────────────────────────────────────────────┘
```

### [06] GESTIONNAIRE D'ÉVÉNEMENTS — `WindowProc()`

```cpp
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {

        case WM_PAINT: {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hwnd, &ps);
            // ── rendu GDI ici ──
            EndPaint(hwnd, &ps);
            break;
        }

        case WM_KEYDOWN:
            // wParam = code de la touche (VK_ESCAPE, VK_RETURN...)
            break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
    return 0;
}
```

```
  ┌────────────────────┬───────────────────────────────────────────┐
  │  MESSAGE           │  DÉCLENCHÉ QUAND                          │
  ├────────────────────┼───────────────────────────────────────────┤
  │  WM_CREATE         │  La fenêtre vient d'être créée            │
  │  WM_PAINT          │  La fenêtre doit être redessinée          │
  │  WM_KEYDOWN        │  Touche du clavier enfoncée               │
  │  WM_LBUTTONDOWN    │  Clic gauche souris                       │
  │  WM_RBUTTONDOWN    │  Clic droit souris                        │
  │  WM_MOUSEMOVE      │  Déplacement du curseur                   │
  │  WM_TIMER          │  Timer SetTimer() écoulé                  │
  │  WM_SIZE           │  Fenêtre redimensionnée                   │
  │  WM_CLOSE          │  Croix de fermeture cliquée               │
  │  WM_DESTROY        │  Fenêtre détruite → PostQuitMessage(0)    │
  └────────────────────┴───────────────────────────────────────────┘
```

### [07] RENDU GDI — Dessin dans la fenêtre

```cpp
case WM_PAINT: {
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hwnd, &ps);

    HBRUSH hBlack = CreateSolidBrush(RGB(0, 0, 0));
    FillRect(hdc, &ps.rcPaint, hBlack);
    DeleteObject(hBlack);

    SetTextColor(hdc, RGB(220, 20, 20));
    SetBkMode(hdc, TRANSPARENT);

    HFONT hFont = CreateFont(24, 0, 0, 0, FW_BOLD, FALSE, FALSE, FALSE,
                             DEFAULT_CHARSET, OUT_DEFAULT_PRECIS,
                             CLIP_DEFAULT_PRECIS, CLEARTYPE_QUALITY,
                             DEFAULT_PITCH, TEXT("Courier New"));
    SelectObject(hdc, hFont);
    TextOut(hdc, 50, 50, TEXT("IMORTEL — SYSTEM v1.0"), 21);

    DeleteObject(hFont);
    EndPaint(hwnd, &ps);
    break;
}
```

| Fonction GDI | Rôle |
|-------------|------|
| `BeginPaint` | Initialise le HDC (contexte de dessin) |
| `CreateSolidBrush` | Crée un pinceau de couleur unie RGB |
| `FillRect` | Remplit un rectangle avec un pinceau |
| `SetTextColor` | Définit la couleur du texte — `RGB(r, g, b)` |
| `SetBkMode(TRANSPARENT)` | Fond du texte transparent |
| `CreateFont` | Crée une police personnalisée (taille, poids, famille) |
| `SelectObject` | Sélectionne la police dans le HDC courant |
| `TextOut` | Affiche une chaîne à la position `(x, y)` |
| `DeleteObject` | ⚠️ Obligatoire — libère les ressources GDI créées |
| `EndPaint` | Libère le HDC |

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
