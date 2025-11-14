let s=readline();

var x = 0;

for(i in s){
    if(s[i] == '1')
        x += 1;
}

console.log(x);