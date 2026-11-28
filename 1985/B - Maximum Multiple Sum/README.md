<h2><a href="https://codeforces.com/contest/1985/problem/B" target="_blank" rel="noopener noreferrer">1985B — Maximum Multiple Sum</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1985B](https://codeforces.com/contest/1985/problem/B) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Maximum Multiple Sum</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an integer $$$n$$$, find an integer $$$x$$$ such that: </p><ul> <li> $$$2 \leq x \leq n$$$. </li><li> The sum of multiples of $$$x$$$ that are less than or equal to $$$n$$$ is maximized. Formally, $$$x + 2x + 3x + \dots + kx$$$ where $$$kx \leq n$$$ is maximized over all possible values of $$$x$$$. </li></ul></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>Each test case contains a single integer $$$n$$$ ($$$2 \leq n \leq 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output an integer, the optimal value of $$$x$$$. It can be shown there is only one unique answer.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009878567672997184" id="id002512146956681899" class="input-output-copier">Copy</div></div><pre data-content="2
3
15
" id="id009878567672997184"><div class="test-example-line test-example-line-even test-example-line-0">2</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-even test-example-line-2">15</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005847683528832421" id="id006890545615486282" class="input-output-copier">Copy</div></div><pre id="id005847683528832421">3
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>For $$$n = 3$$$, the possible values of $$$x$$$ are $$$2$$$ and $$$3$$$. The sum of all multiples of $$$2$$$ less than or equal to $$$n$$$ is just $$$2$$$, and the sum of all multiples of $$$3$$$ less than or equal to $$$n$$$ is $$$3$$$. Therefore, $$$3$$$ is the optimal value of $$$x$$$.</p><p>For $$$n = 15$$$, the optimal value of $$$x$$$ is $$$2$$$. The sum of all multiples of $$$2$$$ less than or equal to $$$n$$$ is $$$2 + 4 + 6 + 8 + 10 + 12 + 14 = 56$$$, which can be proven to be the maximal over all other possible values of $$$x$$$.</p></div>