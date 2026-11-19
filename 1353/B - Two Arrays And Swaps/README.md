<h2><a href="https://codeforces.com/contest/1353/problem/B" target="_blank" rel="noopener noreferrer">1353B — Two Arrays And Swaps</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1353B](https://codeforces.com/contest/1353/problem/B) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Two Arrays And Swaps</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays $$$a$$$ and $$$b$$$ both consisting of $$$n$$$ positive (greater than zero) integers. You are also given an integer $$$k$$$.</p><p>In one move, you can choose two indices $$$i$$$ and $$$j$$$ ($$$1 \le i, j \le n$$$) and swap $$$a_i$$$ and $$$b_j$$$ (i.e. $$$a_i$$$ becomes $$$b_j$$$ and vice versa). Note that $$$i$$$ and $$$j$$$ can be equal or different (in particular, swap $$$a_2$$$ with $$$b_2$$$ or swap $$$a_3$$$ and $$$b_9$$$ both are acceptable moves).</p><p>Your task is to find the <span class="tex-font-style-bf">maximum</span> possible sum you can obtain in the array $$$a$$$ if you can do no more than (i.e. at most) $$$k$$$ such moves (swaps).</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 200$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of the test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 30; 0 \le k \le n$$$) — the number of elements in $$$a$$$ and $$$b$$$ and the maximum number of moves you can do. The second line of the test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 30$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$. The third line of the test case contains $$$n$$$ integers $$$b_1, b_2, \dots, b_n$$$ ($$$1 \le b_i \le 30$$$), where $$$b_i$$$ is the $$$i$$$-th element of $$$b$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer — the <span class="tex-font-style-bf">maximum</span> possible sum you can obtain in the array $$$a$$$ if you can do no more than (i.e. at most) $$$k$$$ swaps.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0048122732017029546" id="id007185175154221121" class="input-output-copier">Copy</div></div><pre id="id0048122732017029546">5
2 1
1 2
3 4
5 5
5 5 6 6 5
1 2 5 4 3
5 3
1 2 3 4 5
10 9 10 10 9
4 0
2 2 4 3
2 4 2 3
4 4
1 2 2 1
4 4 5 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009597892907414368" id="id009411674605977868" class="input-output-copier">Copy</div></div><pre id="id009597892907414368">6
27
39
11
17
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the example, you can swap $$$a_1 = 1$$$ and $$$b_2 = 4$$$, so $$$a=[4, 2]$$$ and $$$b=[3, 1]$$$.</p><p>In the second test case of the example, you don't need to swap anything.</p><p>In the third test case of the example, you can swap $$$a_1 = 1$$$ and $$$b_1 = 10$$$, $$$a_3 = 3$$$ and $$$b_3 = 10$$$ and $$$a_2 = 2$$$ and $$$b_4 = 10$$$, so $$$a=[10, 10, 10, 4, 5]$$$ and $$$b=[1, 9, 3, 2, 9]$$$.</p><p>In the fourth test case of the example, you cannot swap anything.</p><p>In the fifth test case of the example, you can swap arrays $$$a$$$ and $$$b$$$, so $$$a=[4, 4, 5, 4]$$$ and $$$b=[1, 2, 2, 1]$$$.</p></div>