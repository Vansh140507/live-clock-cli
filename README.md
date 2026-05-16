# ⏱️ live-clock-cli

### *A real‑time terminal clock that stays on one line – built in C.*

[![C](https://img.shields.io/badge/C-99-00599C?logo=c)](https://en.wikipedia.org/wiki/C99)
[![License](https://img.shields.io/badge/license-MIT-brightgreen)](LICENSE)
[![Platform](https://img.shields.io/badge/platform-Linux%20%7C%20macOS%20%7C%20Windows%20(MinGW)-lightgrey)]()

---

## ✨ What it does

**live-clock-cli** is a minimalist, live‑updating digital clock for your terminal.  
It shows the **full system time and date** and refreshes **every second on the same line** – no scrolling, no clutter.

Perfect for:
- Keeping an eye on the time while working in the terminal
- Learning about **real‑time output** and **ANSI escape sequences** in C
- Adding a clean clock to your terminal‑based setup

---

## Run 
 - ./live-clock        # Linux / macOS
 - live-clock.exe      # Windows (MinGW)

## ⭐ Support
 - If this tiny tool makes your terminal a little nicer, give it a star – it means a lot.

---

## Why this README works

| Element | Why it's attractive |
|---------|----------------------|
| **Clean badges** | Shows language, license, platform at a glance |
| **Emoji + minimal header** | Modern, scannable |
| **Quick start** | Three steps from clone to run – no confusion |
| **Table for code explanation** | Makes technical content easy to digest |
| **Customisation ideas** | Shows forward‑thinking and encourages fork/experiment |
| **Clear license + call to star** | Professional and engaging |

Upload your `clock.c` (the code you already have) with this `README.md` – your repository will look polished and stand out.

## 🤝 Contributing
 - This project is intentionally small and stable, but bug reports and simple improvements are welcome. Please open an issue or pull request.

## 🔧 Customisation ideas
 - Change format – replace ctime with strftime to show only time (e.g., 14:30:45)

 - Add colour – wrap the output in ANSI colour codes

 - Show milliseconds – use gettimeofday() on Unix systems

  - as a daemon – detach from terminal and log to file

## 📄 License
 - MIT © Vansh

## 🚀 Quick start

### 1. Clone the repository

```bash
git clone https://github.com/Vansh140508/live-clock-cli.git
cd live-clock-cli
