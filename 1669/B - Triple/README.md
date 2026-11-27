<h2><a href="https://codeforces.com/contest/1669/problem/B" target="_blank" rel="noopener noreferrer">1669B — Triple</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1669B](https://codeforces.com/contest/1669/problem/B) |

## Topics
`implementation` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Triple</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an array $$$a$$$ of $$$n$$$ elements, print any value that appears at least three times or print <span class="tex-font-style-tt">-1</span> if there is no such value.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \leq n \leq 2\cdot10^5$$$) — the length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \leq a_i \leq n$$$) — the elements of the array.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2\cdot10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print any value that appears at least three times or print <span class="tex-font-style-tt">-1</span> if there is no such value.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007461773912852506" id="id005372465328754787" class="input-output-copier">Copy</div></div><pre data-content="7
1
1
3
2 2 2
7
2 2 3 3 4 2 2
8
1 4 3 4 3 2 4 1
9
1 1 1 2 2 2 3 3 3
5
1 5 2 4 3
4
4 4 4 4
" id="id007461773912852506"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-even test-example-line-2">2 2 2</div><div class="test-example-line test-example-line-odd test-example-line-3">7</div><div class="test-example-line test-example-line-odd test-example-line-3">2 2 3 3 4 2 2</div><div class="test-example-line test-example-line-even test-example-line-4">8</div><div class="test-example-line test-example-line-even test-example-line-4">1 4 3 4 3 2 4 1</div><div class="test-example-line test-example-line-odd test-example-line-5">9</div><div class="test-example-line test-example-line-odd test-example-line-5">1 1 1 2 2 2 3 3 3</div><div class="test-example-line test-example-line-even test-example-line-6">5</div><div class="test-example-line test-example-line-even test-example-line-6">1 5 2 4 3</div><div class="test-example-line test-example-line-odd test-example-line-7">4</div><div class="test-example-line test-example-line-odd test-example-line-7">4 4 4 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0015745624527755697" id="id008089979609010288" class="input-output-copier">Copy</div></div><pre id="id0015745624527755697">-1
2
2
4
3
-1
4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case there is just a single element, so it can't occur at least three times and the answer is <span class="tex-font-style-tt">-1</span>.</p><p>In the second test case, all three elements of the array are equal to $$$2$$$, so $$$2$$$ occurs three times, and so the answer is $$$2$$$.</p><p>For the third test case, $$$2$$$ occurs four times, so the answer is $$$2$$$.</p><p>For the fourth test case, $$$4$$$ occurs three times, so the answer is $$$4$$$.</p><p>For the fifth test case, $$$1$$$, $$$2$$$ and $$$3$$$ all occur at least three times, so they are all valid outputs.</p><p>For the sixth test case, all elements are distinct, so none of them occurs at least three times and the answer is <span class="tex-font-style-tt">-1</span>.</p></div>