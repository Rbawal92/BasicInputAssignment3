#  Fun with Video Games and the First Steps of My Journey in UX Design

**Author:** Raymond  
**Language:** C++  
**Version:** 1.0 
**ITCS 2530**
**Professor Koss**

---

##  Overview

**Fun with Video Games and the First Steps of My Journey in UX Design** is a  C++ program that records **user input, data analysis, and UX principles**.  
It shows how programming can collect, process, and display user preferences in a fun, interactive, and well-designed way — mirroring the mindset of a **UX designer** focused on user experience.

- **Engagement:** Bright console colors, structured input prompts, and clear formatting.
- **Validation:** Input handling and data verification ensure a smooth experience.
- **Design Thinking:** From title boxes to summary tables, each display element aims to make console UX more appealing and readable.

---

##  Core Features

###  User Interaction
- Asks for the user’s favorite video game, character, and platform.
- Captures their **age**, **game price**, and **hours played**.
- Validates each input carefully to prevent crashes or invalid data.

###  Value Analysis
- Calculates:
  - **Game Value per Hour:** `gamePrice / hoursPlayed`
  - **Age Difference:** Compared to the developer’s childhood gaming start age (7).
  - **Value Tier:** Super, Good, or Low — based on price, hours, and enjoyment factors.

###  UX & Presentation
- Custom **color-coded console boxes** using `windows.h`.
- Structured output tables using `iomanip` formatting (`setw`, `left`, etc.).
- Screens are **cleared and paused** between sections for better flow.

###  Game Ratings
- Prompts the user to rate **Story**, **Gameplay**, **Graphics**, **Nostalgia**, and **Replayability**.
- Computes an **average score (1–5)** with precision formatting.

###  Summary & Report Generation
- Displays a **detailed summary table** of user input and computed data.
- Writes the same summary to a text file named `report.txt`.
- Includes a **menu** to re-display values or exit the program.
- Offers a **run-again** loop for multiple sessions.

---

##  Motivation & UX Design Goals

The program demonstrates how **UX principles** can be applied even in console environments:

**UX Principle | Implementation**
| **Feedback** | Color cues, pauses, and confirmations at each step. |
| **Clarity** | Step-by-step questions and validation for every input. |
| **Aesthetics** | Decorative boxes and consistent layout. |
| **Flow** | Screen clearing to guide the user through sections. |
| **Empathy** | Engages users by discussing their favorite games and preferences. |

In short, it’s **not just a program** — it’s a conversation between designer and player.
