## Setup
#### Build
In project folder, execute:

`make`

#### Run
After building the application, run in project folder:

`compile SCRIPT_NAME > OUTPUT_FILE_NAME.txt`

There are also examples already set in test folder. For a quick check to the application, execute:

`compile test/simple_example > output.txt`

Then, the output to the corresponding code would be:



<table>
<tr>
<th>Coding example </th>
<th>Corresponding lexical tokens output</th>
</tr>
<tr>
<td>


```C++
function twice(n: integer) : integer {
	return 2 * n;
}
```


</td>
<td>

```txt
input_file_name: test/simple_example
output_file_name: executavel
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
18 
46 INT id=0 2 
41 
48 ID id=1 
20 
26 
50 