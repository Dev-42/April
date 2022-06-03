<h2><a href="https://leetcode.com/problems/maximum-population-year/">1854. Maximum Population Year</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a 2D integer array <code style="user-select: auto;">logs</code> where each <code style="user-select: auto;">logs[i] = [birth<sub style="user-select: auto;">i</sub>, death<sub style="user-select: auto;">i</sub>]</code> indicates the birth and death years of the <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> person.</p>

<p style="user-select: auto;">The <strong style="user-select: auto;">population</strong> of some year <code style="user-select: auto;">x</code> is the number of people alive during that year. The <code style="user-select: auto;">i<sup style="user-select: auto;">th</sup></code> person is counted in year <code style="user-select: auto;">x</code>'s population if <code style="user-select: auto;">x</code> is in the <strong style="user-select: auto;">inclusive</strong> range <code style="user-select: auto;">[birth<sub style="user-select: auto;">i</sub>, death<sub style="user-select: auto;">i</sub> - 1]</code>. Note that the person is <strong style="user-select: auto;">not</strong> counted in the year that they die.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;">the <strong style="user-select: auto;">earliest</strong> year with the <strong style="user-select: auto;">maximum population</strong></em>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = [[1993,1999],[2000,2010]]
<strong style="user-select: auto;">Output:</strong> 1993
<strong style="user-select: auto;">Explanation:</strong> The maximum population is 1, and 1993 is the earliest year with this population.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> logs = [[1950,1961],[1960,1971],[1970,1981]]
<strong style="user-select: auto;">Output:</strong> 1960
<strong style="user-select: auto;">Explanation:</strong> 
The maximum population is 2, and it had happened in years 1960 and 1970.
The earlier year between them is 1960.</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= logs.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1950 &lt;= birth<sub style="user-select: auto;">i</sub> &lt; death<sub style="user-select: auto;">i</sub> &lt;= 2050</code></li>
</ul>
</div>