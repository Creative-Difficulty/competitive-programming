# competitive-programming

My solutions for CSES, Codeforces and olympiad practice (AOI). C++23, built with `g++`.

## Layout

```
cses/<task-id>-<slug>/main.cpp                      CSES problem set
codeforces/<contest-id><letter>-<slug>/main.cpp     Codeforces problemset practice
codeforces/contests/<round>/<letter>/main.cpp       problems done during a live or virtual contest
```

Rules:

- One problem per folder, the solution is always `main.cpp`.
- Folder names are lowercase with dashes. Codeforces uses the **problem ID**
  from the URL (`/problemset/problem/734/A` → `734A`), not the round number.
- Anything under `codeforces/contests/` (and any future olympiad/contest folder)
  counts as a contest problem.

## Hints (opt-in, practice problems only)

The nightly review never gives hints, nudges or targeted problem
recommendations unless asked. To ask for them on a practice problem, add a
`hint-request.md` file to that problem's folder (it can be empty, or contain
a specific question).

Hint requests are ignored for contest problems (anything under a contest
folder, or from a contest that is still running).

## Index

| Problem | Judge | Folder |
| --- | --- | --- |
| 1068 – Weird Algorithm | CSES | [cses/1068-weird-algorithm](cses/1068-weird-algorithm) |
| 734A – Anton and Danik | Codeforces | [codeforces/734A-anton-and-danik](codeforces/734A-anton-and-danik) |
| 677A – Vanya and Fence | Codeforces | [codeforces/677A-vanya-and-fence](codeforces/677A-vanya-and-fence) |
| Round 1096 (Div. 3) A–D | Codeforces (contest) | [codeforces/contests/round-1096-div3](codeforces/contests/round-1096-div3) |
