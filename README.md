# 🧩 CodeWars Task Runner & Tester

[![C++](https://img.shields.io/badge/C++-17-blue?style=flat-square&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![CMake](https://img.shields.io/badge/CMake-3.15+-064F8C?style=flat-square&logo=cmake&logoColor=white)](https://cmake.org/)
[![Google Test](https://img.shields.io/badge/Google%20Test-1.10+-4285F4?style=flat-square&logo=google&logoColor=white)](https://github.com/google/googletest)
[![CodeWars](https://img.shields.io/badge/CodeWars-B1361E?style=flat-square&logo=codewars&logoColor=white)](https://www.codewars.com/)

**Автоматизированная сборка и тестирование решений задач с CodeWars**  
Проект-шаблон для структурированного подхода к решению алгоритмических задач: чистая архитектура, unit-тестирование, универсальная система сборки.

---

## 📌 О проекте

Этот проект решает проблему разрозненного хранения решений задач с CodeWars. Каждая задача оформляется как отдельный модуль с:
- Исходным кодом решения
- Набором unit-тестов (Google Test)
- Автоматической интеграцией в общую систему сборки CMake

**Цель:** Нарабатывать навыки C++ и алгоритмов, сразу закрепляя их автоматическими тестами.

---

## 🛠 Технологии

| Компонент | Технология | Назначение |
|-----------|------------|------------|
| **Язык** | C++17 | Решение алгоритмических задач |
| **Сборка** | CMake (≥3.15) | Управление проектом и зависимостями |
| **Тестирование** | Google Test (GTest) | Автоматическая проверка решений |
| **Структура** | Модульная (каждая задача — отдельная цель) | Чистота и переиспользование |
| **IDE** | VS Code (настройки в `.vscode/`) | Унификация окружения |

---

## 📁 Структура проекта

---

## 🚀 Быстрый старт

### 1. Клонировать проект

```bash
git clone https://github.com/VladIsSlayer/CodeWarsFullAssembly.git
cd CodeWarsFullAssembly

mkdir build && cd build
cmake ..
cmake --build .
ctest
