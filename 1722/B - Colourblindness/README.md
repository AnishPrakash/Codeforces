<h2><a href="https://codeforces.com/contest/1722/problem/B" target="_blank" rel="noopener noreferrer">1722B — Colourblindness</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1722B](https://codeforces.com/contest/1722/problem/B) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">B. Colourblindness</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vasya has a grid with $$$2$$$ rows and $$$n$$$ columns. He colours each cell red, green, or blue.</p><p>Vasya is colourblind and can't distinguish green from blue. Determine if Vasya will consider the two rows of the grid to be coloured the same.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \leq n \leq 100$$$) — the number of columns of the grid.</p><p>The following two lines each contain a string consisting of $$$n$$$ characters, each of which is either <span class="tex-font-style-tt">R</span>, <span class="tex-font-style-tt">G</span>, or <span class="tex-font-style-tt">B</span>, representing a red, green, or blue cell, respectively — the description of the grid.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output "<span class="tex-font-style-tt">YES</span>" if Vasya considers the grid's two rows to be identical, and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (for example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>" and "<span class="tex-font-style-tt">YES</span>" will be recognized as a positive answer).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005589309628667362" id="id001571045409543872" class="input-output-copier">Copy</div></div><pre data-content="6
2
RG
RB
4
GRBG
GBGB
5
GGGGG
BBBBB
7
BBBBBBB
RRRRRRR
8
RGBRRGBR
RGGRRBGR
1
G
G
" id="id005589309628667362"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">RG</div><div class="test-example-line test-example-line-odd test-example-line-1">RB</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">GRBG</div><div class="test-example-line test-example-line-even test-example-line-2">GBGB</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-odd test-example-line-3">GGGGG</div><div class="test-example-line test-example-line-odd test-example-line-3">BBBBB</div><div class="test-example-line test-example-line-even test-example-line-4">7</div><div class="test-example-line test-example-line-even test-example-line-4">BBBBBBB</div><div class="test-example-line test-example-line-even test-example-line-4">RRRRRRR</div><div class="test-example-line test-example-line-odd test-example-line-5">8</div><div class="test-example-line test-example-line-odd test-example-line-5">RGBRRGBR</div><div class="test-example-line test-example-line-odd test-example-line-5">RGGRRBGR</div><div class="test-example-line test-example-line-even test-example-line-6">1</div><div class="test-example-line test-example-line-even test-example-line-6">G</div><div class="test-example-line test-example-line-even test-example-line-6">G</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003513765112955629" id="id006130722839798443" class="input-output-copier">Copy</div></div><pre id="id003513765112955629">YES
NO
YES
NO
YES
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Vasya sees the second cell of each row as the same because the second cell of the first row is green and the second cell of the second row is blue, so he can't distinguish these two cells. The rest of the rows are equal in colour. Therefore, Vasya will say that the two rows are coloured the same, even though they aren't.</p><p>In the second test case, Vasya can see that the two rows are different.</p><p>In the third test case, every cell is green or blue, so Vasya will think they are the same.</p></div>