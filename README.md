## Setup
#### Build
`make`

#### Run
`compile SCRIPT_NAME -o OUTPUT_FILE_NAME`

_There is also an example already set in test folder. For a quick run to check the application running, execute:_

`compile test/simple_example -o output`

Then, the output to the corresponding code would be:


<table>
<tr>
<th>Coding example </th>
<th>Corresponding lexical tokens output</th>
</tr>
<tr>
<td>

```C++
function factorial(n: integer) : integer {
	var result: integer;

	while(result>0){
		result = result * (result - 1);
	}

	return result;
}
```

</td>
<td>

```txt
8 
48 ID id=0 
27 
48 ID id=1 
19 
10 
28 
19 
10 
25 
16 
48 ID id=2 
19 
10 
20 
17 
27 
48 ID id=2 
32 
46 INT id=0 0 
28 
25 
48 ID id=2 
22 
48 ID id=2 
41 
27 
48 ID id=2 
39 
46 INT id=1 1 
28 
20 
26 
18 
48 ID id=2 
20 
26 
50 
```

</td>
</tr>
</table>