<h2><a href="https://codeforces.com/contest/1551/problem/A" target="_blank" rel="noopener noreferrer">1551A — Polycarp and Coins</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1551A](https://codeforces.com/contest/1551/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Polycarp and Coins</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Polycarp must pay <span class="tex-font-style-bf">exactly</span> $$$n$$$ burles at the checkout. He has coins of two nominal values: $$$1$$$ burle and $$$2$$$ burles. Polycarp likes both kinds of coins equally. So he doesn't want to pay with more coins of one type than with the other.</p><p>Thus, Polycarp wants to minimize the difference between the count of coins of $$$1$$$ burle and $$$2$$$ burles being used. Help him by determining two non-negative integer values $$$c_1$$$ and $$$c_2$$$ which are the number of coins of $$$1$$$ burle and $$$2$$$ burles, respectively, so that the total value of that number of coins is <span class="tex-font-style-bf">exactly</span> $$$n$$$ (i. e. $$$c_1 + 2 \cdot c_2 = n$$$), and the absolute value of the difference between $$$c_1$$$ and $$$c_2$$$ is as little as possible (i. e. you must minimize $$$|c_1-c_2|$$$).</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>Each test case consists of one line. This line contains one integer $$$n$$$ ($$$1 \le n \le 10^9$$$) — the number of burles to be paid by Polycarp.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a separate line containing two integers $$$c_1$$$ and $$$c_2$$$ ($$$c_1, c_2 \ge 0$$$) separated by a space where $$$c_1$$$ is the number of coins of $$$1$$$ burle and $$$c_2$$$ is the number of coins of $$$2$$$ burles. If there are multiple optimal solutions, print any one.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003781277089156543" id="id007026689448485303" class="input-output-copier">Copy</div></div><pre id="id003781277089156543">6
1000
30
1
32
1000000000
5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004505030477137302" id="id0007200852078578923" class="input-output-copier">Copy</div></div><pre id="id004505030477137302">334 333
10 10
1 0
10 11
333333334 333333333
1 2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The answer for the first test case is "<span class="tex-font-style-tt">334 333</span>". The sum of the nominal values of all coins is $$$334 \cdot 1 + 333 \cdot 2 = 1000$$$, whereas $$$|334 - 333| = 1$$$. One can't get the better value because if $$$|c_1 - c_2| = 0$$$, then $$$c_1 = c_2$$$ and $$$c_1 \cdot 1 + c_1 \cdot 2 = 1000$$$, but then the value of $$$c_1$$$ isn't an integer.</p><p>The answer for the second test case is "<span class="tex-font-style-tt">10 10</span>". The sum of the nominal values is $$$10 \cdot 1 + 10 \cdot 2 = 30$$$ and $$$|10 - 10| = 0$$$, whereas there's no number having an absolute value less than $$$0$$$.</p></div>