<h2><a href="https://codeforces.com/contest/1873/problem/B" target="_blank" rel="noopener noreferrer">1873B — Good Kid</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | GNU C11 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1873B](https://codeforces.com/contest/1873/problem/B) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Good Kid</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Slavic is preparing a present for a friend's birthday. He has an array $$$a$$$ of $$$n$$$ digits and the present will be the product of all these digits. Because Slavic is a good kid who wants to make the biggest product possible, he wants to add $$$1$$$ to exactly one of his digits. </p><p>What is the maximum product Slavic can make?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 9$$$) — the number of digits.</p><p>The second line of each test case contains $$$n$$$ space-separated integers $$$a_i$$$ ($$$0 \leq a_i \leq 9$$$) — the digits in the array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the maximum product Slavic can make, by adding $$$1$$$ to exactly one of his digits.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0028084261166025215" id="id0019480460257626164" class="input-output-copier">Copy</div></div><pre id="id0028084261166025215"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2 1 2</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-even test-example-line-2">0 1 2</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">4 3 2 3 4</div><div class="test-example-line test-example-line-even test-example-line-4">9</div><div class="test-example-line test-example-line-even test-example-line-4">9 9 9 9 9 9 9 9 9</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004608969188630573" id="id006622551418645202" class="input-output-copier">Copy</div></div><pre id="id004608969188630573">16
2
432
430467210
</pre></div></div></div>