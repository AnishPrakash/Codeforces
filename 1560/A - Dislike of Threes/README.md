<h2><a href="https://codeforces.com/contest/1560/problem/A" target="_blank" rel="noopener noreferrer">1560A — Dislike of Threes</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | GNU C11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1560A](https://codeforces.com/contest/1560/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Dislike of Threes</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp doesn't like integers that are divisible by $$$3$$$ or end with the digit $$$3$$$ in their decimal representation. Integers that meet both conditions are disliked by Polycarp, too.</p><p>Polycarp starts to write out the positive (greater than $$$0$$$) integers which he likes: $$$1, 2, 4, 5, 7, 8, 10, 11, 14, 16, \dots$$$. Output the $$$k$$$-th element of this sequence (the elements are numbered from $$$1$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 100$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case consists of one line containing one integer $$$k$$$ ($$$1 \le k \le 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output in a separate line one integer $$$x$$$ — the $$$k$$$-th element of the sequence that was written out by Polycarp.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008748132560810759" id="id006620223726585381" class="input-output-copier">Copy</div></div><pre id="id008748132560810759">10
1
2
3
4
5
6
7
8
9
1000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002655288746479849" id="id009623503574630466" class="input-output-copier">Copy</div></div><pre id="id002655288746479849">1
2
4
5
7
8
10
11
14
1666
</pre></div></div></div>