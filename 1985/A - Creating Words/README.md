<h2><a href="https://codeforces.com/contest/1985/problem/A" target="_blank" rel="noopener noreferrer">1985A — Creating Words</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | GNU C11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1985A](https://codeforces.com/contest/1985/problem/A) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Creating Words</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Matthew is given two strings $$$a$$$ and $$$b$$$, both of length $$$3$$$. He thinks it's particularly funny to create two new words by swapping the first character of $$$a$$$ with the first character of $$$b$$$. He wants you to output $$$a$$$ and $$$b$$$ after the swap.</p><p>Note that the new words may not necessarily be different.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 100$$$)  — the number of test cases.</p><p>The first and only line of each test case contains two space-separated strings, $$$a$$$ and $$$b$$$, both of length $$$3$$$. The strings only contain lowercase Latin letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, after the swap, output $$$a$$$ and $$$b$$$, separated by a space.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0022535571862669135" id="id002687462968646369" class="input-output-copier">Copy</div></div><pre id="id0022535571862669135"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">bit set</div><div class="test-example-line test-example-line-even test-example-line-2">cat dog</div><div class="test-example-line test-example-line-odd test-example-line-3">hot dog</div><div class="test-example-line test-example-line-even test-example-line-4">uwu owo</div><div class="test-example-line test-example-line-odd test-example-line-5">cat cat</div><div class="test-example-line test-example-line-even test-example-line-6">zzz zzz</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007591547038836683" id="id00638697181181333" class="input-output-copier">Copy</div></div><pre id="id007591547038836683">sit bet
dat cog
dot hog
owu uwo
cat cat
zzz zzz
</pre></div></div></div>