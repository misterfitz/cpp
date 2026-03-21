# Intro

On a journey re-learning C++.

Starting with *Programming Principals and Practices Using C++ 3rd edition.pdf*.

## Project layout

- **Single executable**: sources live at the repo root (`main.cpp`, `chapter_*.cpp`, `chapters.h`). **CMake** is the source of truth for which files are compiled (`CMakeLists.txt`).
- There is **no** `src/` tree in use; if you see a stray `src/main.cpp` in an old clone, it was a duplicate of `main.cpp` and is not referenced by CMake.

## Prerequisites

- **CMake** 3.30 or newer (see `cmake_minimum_required` in `CMakeLists.txt`).
- A **C++20** compiler (GCC, Clang, or MSVC depending on OS).

### Ubuntu / Debian

```bash
sudo apt update
sudo apt install cmake build-essential gdb
```

### macOS

Install Xcode Command Line Tools (compiler, debugger). CMake via [Homebrew](https://brew.sh/) if needed:

```bash
xcode-select --install
brew install cmake
```

### Windows

Install [Visual Studio Build Tools](https://visualstudio.microsoft.com/downloads/) (Desktop development with C++) or full Visual Studio, and [CMake](https://cmake.org/download/) if it is not already on your PATH.

## Build (command line)

From the repository root:

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Debug -S .
cmake --build build --parallel
./build/ProgrammingPrinciplesPractice
```

Release build:

```bash
cmake -B build-release -DCMAKE_BUILD_TYPE=Release -S .
cmake --build build-release --parallel
```

On **Windows** with a multi-config generator (e.g. Visual Studio), use:

```bat
cmake -B build -S .
cmake --build build --config Release
```

## Debug in VS Code (Ubuntu / Linux)

1. Install extensions: **C/C++** (Microsoft), and optionally **CMake Tools**.
2. **Terminal → Run Build Task** (or Ctrl+Shift+B): runs **CMake: Build** from `.vscode/tasks.json` (configure + build into `build/`).
3. **Run and Debug**: choose **Debug (GDB, Linux)**, then F5. Requires `gdb` installed (`miDebuggerPath` is `/usr/bin/gdb`).

## Debug in VS Code (macOS)

Use **Debug (LLDB, macOS)** so the debugger matches the system toolchain. The same **CMake: Build** task produces the binary at `build/ProgrammingPrinciplesPractice`.

If you use **Debug (GDB, Linux)** on macOS, GDB is often missing or awkward; prefer the LLDB configuration.

## CI (GitHub Actions)

Workflow: [.github/workflows/cmake-multi-platform.yml](.github/workflows/cmake-multi-platform.yml). It builds **Release** on **Ubuntu** (GCC and Clang), **Windows** (MSVC), and **macOS** (Clang). The **Test** step runs `ctest` in the build directory; this project does not define CTest tests yet, so that step is effectively a no-op until tests are added.

## Occasional contributor checklist

1. Pull latest, open the repo root in VS Code.
2. Run the default build task once (or the CMake commands above).
3. Pick the launch configuration that matches your OS (GDB vs LLDB).
4. Push to `main` or open a PR; CI mirrors the same CMake configure/build steps.
