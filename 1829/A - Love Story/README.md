<h2><a href="https://codeforces.com/contest/1829/problem/A" target="_blank" rel="noopener noreferrer">1829A — Love Story</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | GNU C11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1829A](https://codeforces.com/contest/1829/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Love Story</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Timur loves codeforces. That's why he has a string $$$s$$$ having length $$$10$$$ made containing only lowercase Latin letters. Timur wants to know how many indices string $$$s$$$ <span class="tex-font-style-bf">differs</span> from the string "<span class="tex-font-style-tt">codeforces</span>".</p><p>For example string $$$s =$$$ "<span class="tex-font-style-tt">co<span class="tex-font-style-bf">ol</span>for<span class="tex-font-style-bf">s</span>e<span class="tex-font-style-bf">z</span></span>" differs from "<span class="tex-font-style-tt">codeforces</span>" in $$$4$$$ indices, shown in bold.</p><p>Help Timur by finding the number of indices where string $$$s$$$ differs from "<span class="tex-font-style-tt">codeforces</span>".</p><p>Note that you can't reorder the characters in the string $$$s$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases.</p><p>Each test case is one line and contains the string $$$s$$$, consisting of exactly $$$10$$$ lowercase Latin characters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the number of indices where string $$$s$$$ differs.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0045641743147124436" id="id008800878328918487" class="input-output-copier">Copy</div></div><pre id="id0045641743147124436"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">coolforsez</div><div class="test-example-line test-example-line-even test-example-line-2">cadafurcie</div><div class="test-example-line test-example-line-odd test-example-line-3">codeforces</div><div class="test-example-line test-example-line-even test-example-line-4">paiuforces</div><div class="test-example-line test-example-line-odd test-example-line-5">forcescode</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005145057338315376" id="id008451034115614614" class="input-output-copier">Copy</div></div><pre id="id005145057338315376">4
5
0
4
9
</pre></div></div></div>