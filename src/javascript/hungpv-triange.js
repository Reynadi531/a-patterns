function triangle(n) {
	for(let i=1; i<=n; i++) {
		(i===1 || i===n) ? console.log("* ".repeat(i)) : console.log("* " + "  ".repeat(i-2) + "* ")
	}
}

triangle(5)

/*
* 
* *
*   *
*     *
* * * * * 
*/