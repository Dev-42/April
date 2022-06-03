<h2><a href="https://leetcode.com/problems/sort-array-by-parity-ii/">922. Sort Array By Parity II</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers <code style="user-select: auto;">nums</code>, half of the integers in <code style="user-select: auto;">nums</code> are <strong style="user-select: auto;">odd</strong>, and the other half are <strong style="user-select: auto;">even</strong>.</p>

<p style="user-select: auto;">Sort the array so that whenever <code style="user-select: auto;">nums[i]</code> is odd, <code style="user-select: auto;">i</code> is <strong style="user-select: auto;">odd</strong>, and whenever <code style="user-select: auto;">nums[i]</code> is even, <code style="user-select: auto;">i</code> is <strong style="user-select: auto;">even</strong>.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">any answer array that satisfies this condition</em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [4,2,5,7]
<strong style="user-select: auto;">Output:</strong> [4,5,2,7]
<strong style="user-select: auto;">Explanation:</strong> [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [2,3]
<strong style="user-select: auto;">Output:</strong> [2,3]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= nums.length &lt;= 2 * 10<sup style="user-select: auto;">4</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">nums.length</code> is even.</li>
	<li style="user-select: auto;">Half of the integers in <code style="user-select: auto;">nums</code> are even.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Follow Up:</strong> Could you solve it in-place?</p>
</div>