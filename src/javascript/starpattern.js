function letDraw(i){
	let str = ''; r = 1;
	switch (i) {
		case 1:
			str = "*       *";
			break;
		case 2:
			str = "* *   *";
			break;
		default:
			str = "* ";
			r = i
			break;
	}
	console.log(str.repeat(r))
}

function starpattern(n) {
	for(let i=0; i<=n; i++) {
		letDraw(i)
	}
}

starpattern(5)

/*
 starpattern(5)
 
*       *
* *   *
* * * 
* * * * 
* * * * *
 
 */
