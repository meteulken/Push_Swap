<!DOCTYPE html>
<html lang="tr">
<head>
	<meta charset="UTF-8">
</head>
<body>
	<h1>Push_swap Projesi</h1>
	<h2>Kurulum</h2>
	<p>1. Repoyu bilgisayarınıza klonlayın: <code>git clone https://github.com/meteulken/push_swap.git</code></p>
	<p>2. <code>cd Push_swap</code></p>
	<p>3. <code>make</code> komutunu çalıştırarak programı derleyin</p>
 <h2>Radix Sort</h2>
Radix sort, bir sıralama algoritmasıdır ve sayıları basamaklarına ayırarak sıralama işlemini gerçekleştirir. Algoritmanın temel mantığı, öncelikle en az önemli basamağı kullanarak sayıları sıralamaktır. 
<br>Daha sonra, bir sonraki basamağı kullanarak sıralamaya devam edilir. Bu işlem, tüm basamaklar tamamlanana kadar devam eder ve sonunda sayılar tamamen sıralanmış olur.


 <h2>Kullanım</h2>
	<p>Programı derledikten sonra, iki şekilde kullanabilirsiniz:</p>
	<ol>
		<li><code>./push_swap arg1 arg2 arg3 ...</code> komutunu kullanarak, sıralanacak sayıları komut satırından girerek programı çalıştırabilirsiniz. Örneğin: <code>./push_swap 3 1 5 4 2</code></li>
		<li><code>./push_swap</code> komutunu kullanarak, programı interaktif modda çalıştırabilirsiniz. Bu modda, program size sayıları sıralamak için gerekli olan komutları gösterecektir. Örneğin:</li>
	</ol>
	<pre><code>./push_swap 1 2 3 4 5
pb
pb
ra
pa
pa</code></pre>

<h2>Test</h2>
	<p>Programın doğru çalışıp çalışmadığını kontrol etmek için <code>./push_swap arg1 arg2 arg3 ... | ./checker arg1 arg2 arg3 ...</code> komutunu kullanabilirsiniz. 
  <br>Bu komut, sıralama işlemini <code>push_swap</code> programı ile gerçekleştirdikten sonra, doğru bir şekilde sıralanıp sıralanmadığını kontrol edecektir.</p>


</body>
</html>
