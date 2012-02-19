s = "Hello" + " World";
console.log("3.---length of " + s + " is " + s.length);
console.log("4.---first five characters of  '" + s + "' is '" + s.substring(0,5) + "'");
console.log("4.1---last five characters of  '" + s + "' is '" + s.substring(s.length-5,s.length) + "'");
console.log("5.---position of  'world' in '" + s + "' is " + s.indexOf("world"));
console.log("5.1---position of  'World' in '" + s + "' is " + s.indexOf("World"));
console.log("6.---replace 'world' by 'moon' in '" + s + "' is '" + s.replace("world","moon") + "'" );
console.log("6.1---replace all 'l' by '?' in '" + s + "' is '" + s.replace(/l/g,"?") + "'" );
console.log("7.---split '" + s + "' by space is " + s.split(" "));

String.prototype.reverse = function() {
    var s="";
    for (i=this.length-1; i>=0; --i) s=s.concat(this[i]);
    return s;
}

console.log("8.---reverse of '" + s + "' is " + s.reverse());
console.log("9.---uppercase of '" + s + "' is " + s.toUpperCase());
console.log("10.---lowercase of '" + s + "' is " + s.toLowerCase());

String.prototype.capitalize = function () {
    return this.charAt(0).toUpperCase() + this.slice(1).toLowerCase();
}
s2 = "hello World"
console.log("10.1---capitalize of '" + s2 + "' is " + s2.capitalize());

s1 = "Hello World"
console.log("11.---compare '" + s + "' with '" + s1 + "' returns " + (s===s1) );
console.log("11.---compare '" + s + "' with '" + s2 + "' returns " + (s===s2) );
console.log("12.---iterate over each character of string")
for(i=0;i<s2.length;i+=1){
  console.log(s2.charAt(i))
}

