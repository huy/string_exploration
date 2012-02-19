s = 'hello' + ' world'
print "3.---length of '"+s+"' is "+str(len(s))
print "4.---first 5 characters of '"+s + "' is '" + s[0:5] + "'"
print "4.1---last 5 characters of '"+s + "' is '" + s[-5:] + "'"
print "5.---position of 'world' in '"+s + "' is " + str(s.index("world"))
print "6.---replace 'world' by 'moon' in '"+s + "' is " + s.replace("world","moon",1)
print "6.1---replace all 'l' by '?' in '"+s + "' is " + s.replace("l","?")
print "7.---split '"+s + "' by space is ",s.split(" ")
print "8.---reverse of '"+s + "' is ",s[::-1]
print "8.1---reverse of '"+s + "' is ",''.join(reversed(s))
print "9.---uppercase of '"+s + "' is ",s.upper()
s1 = "Hello World"
print "10.---lowercase of '"+s1 + "' is ",s1.lower()
print "11.---capitalize of '"+s1 + "' is ",s1.capitalize()
s2 = "hello world"
print "11.---compare '"+s + "' with '" + s2 + "' returns ", s==s2
print "11.1---compare '"+s + "' with '" + s1 + "' returns ", s==s1
print "12.--- iterate over each char of '%s'" % s
for ch in s:
  print ch

