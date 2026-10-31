<h2><a href="https://codeforces.com/contest/1926/problem/A" target="_blank" rel="noopener noreferrer">1926A — Vlad and the Best of Five</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | GNU C11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1926A](https://codeforces.com/contest/1926/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Vlad and the Best of Five</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vladislav has a string of length $$$5$$$, whose characters are each either $$$\texttt{A}$$$ or $$$\texttt{B}$$$.</p><p>Which letter appears most frequently: $$$\texttt{A}$$$ or $$$\texttt{B}$$$?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains an integer $$$t$$$ ($$$1 \leq t \leq 32$$$) — the number of test cases.</p><p>The only line of each test case contains a string of length $$$5$$$ consisting of letters $$$\texttt{A}$$$ and $$$\texttt{B}$$$.</p><p>All $$$t$$$ strings in a test are different (distinct).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one letter ($$$\texttt{A}$$$ or $$$\texttt{B}$$$) denoting the character that appears most frequently in the string.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007609486889473883" id="id003651182102987687" class="input-output-copier">Copy</div></div><pre id="id007609486889473883"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">ABABB</div><div class="test-example-line test-example-line-even test-example-line-2">ABABA</div><div class="test-example-line test-example-line-odd test-example-line-3">BBBAB</div><div class="test-example-line test-example-line-even test-example-line-4">AAAAA</div><div class="test-example-line test-example-line-odd test-example-line-5">BBBBB</div><div class="test-example-line test-example-line-even test-example-line-6">BABAA</div><div class="test-example-line test-example-line-odd test-example-line-7">AAAAB</div><div class="test-example-line test-example-line-even test-example-line-8">BAAAA</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0029366477357372534" id="id0048390971893390533" class="input-output-copier">Copy</div></div><pre id="id0029366477357372534">B
A
B
A
B
A
A
A
</pre></div></div></div>