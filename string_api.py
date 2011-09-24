print "---creat a string from const"

s1 = "hello"
print s1
s1 = 'world'
print s1
s1 = '''
hello
world
'''
print s1

print "---append 2 strings"
s2 = "hello"
s2 = s2 + " world"
print s2

print "---length of '"+s2+"' is "+str(len(s2))

print "---first 5 characters of '"+s2 + "' is '" + s2[0:5] + "'"
print "---last 5 characters of '"+s2 + "' is '" + s2[-5:] + "'"
print "---position of 'world' in '"+s2 + "' is " + str(s2.index("world"))
print "---replace 'world' by 'moon' in '"+s2 + "' is " + s2.replace("world","moon",1)
print "---replace all 'l' by '?' in '"+s2 + "' is " + s2.replace("l","?")
print "---split '"+s2 + "' by space is ",s2.split(" ")
print "---reverse of '"+s2 + "' is ",s2[::-1]







