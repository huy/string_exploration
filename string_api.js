s = "Hello" + " World";
console.log("length of " + s + " is " + s.length);
console.log("first five characters of  '" + s + "' is '" + s.substring(0,5) + "'");
console.log("last five characters of  '" + s + "' is '" + s.substring(s.length-5,s.length) + "'");
console.log("position of  'world' in '" + s + "' is " + s.indexOf("world"));
console.log("replace 'world' by 'moon' in '" + s + "' is '" + s.replace("world","moon") + "'" );
console.log("replace all 'l' by '?' in '" + s + "' is '" + s.replace(/l/g,"?") + "'" );
console.log("split '" + s + "' by space is " + s.split(" "));

String.prototype.reverse = function() {
    var s="";
    for (i=this.length-1; i>=0; --i) s=s.concat(this[i]);
    return s;
}

console.log("reverse of '" + s + "' is " + s.reverse());
console.log("uppercase of '" + s + "' is " + s.toUpperCase());
console.log("lowercase of '" + s + "' is " + s.toLowerCase());
