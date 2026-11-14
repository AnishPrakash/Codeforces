<h2><a href="https://codeforces.com/contest/1472/problem/B" target="_blank" rel="noopener noreferrer">1472B — Fair Division</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Java 21 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1472B](https://codeforces.com/contest/1472/problem/B) |

## Topics
`dp` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Fair Division</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Alice and Bob received $$$n$$$ candies from their parents. <span class="tex-font-style-bf">Each candy weighs either 1 gram or 2 grams</span>. Now they want to divide all candies among themselves fairly so that the total weight of Alice's candies is equal to the total weight of Bob's candies.</p><p>Check if they can do that.</p><p>Note that candies <span class="tex-font-style-bf">are not allowed to be cut in half</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The first line of each test case contains an integer $$$n$$$ ($$$1 \le n \le 100$$$) — the number of candies that Alice and Bob received.</p><p>The next line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ — the weights of the candies. The weight of each candy is either $$$1$$$ or $$$2$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output on a separate line: </p><ul> <li> "<span class="tex-font-style-tt">YES</span>", if all candies can be divided into two sets with the same weight; </li><li> "<span class="tex-font-style-tt">NO</span>" otherwise. </li></ul><p>You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, the strings <span class="tex-font-style-tt">yEs</span>, <span class="tex-font-style-tt">yes</span>, <span class="tex-font-style-tt">Yes</span> and <span class="tex-font-style-tt">YES</span> will be recognized as positive).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0038773373184657367" id="id005162481312828126" class="input-output-copier">Copy</div></div><pre id="id0038773373184657367">5
2
1 1
2
1 2
4
1 2 1 2
3
2 2 2
3
2 1 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008431859385166838" id="id004353089280969402" class="input-output-copier">Copy</div></div><pre id="id008431859385166838">YES
NO
YES
NO
NO
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Alice and Bob can each take one candy, then both will have a total weight of $$$1$$$.</p><p>In the second test case, any division will be unfair.</p><p>In the third test case, both Alice and Bob can take two candies, one of weight $$$1$$$ and one of weight $$$2$$$.</p><p>In the fourth test case, it is impossible to divide three identical candies between two people.</p><p>In the fifth test case, any division will also be unfair.</p></div>