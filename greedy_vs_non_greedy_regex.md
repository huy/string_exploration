## Regular greedy vs non greedy match 

**Ruby**

One of comon pitfall when using regex is write non greedy matched expression. Normal expression is greed matched.

    s = 'xaxxbx'
    s =~ /x.*x/
    puts $~[0] # xaxxbx
    
If we want non greedy matched, we need to add non greedy symbol `?`, 

    s = 'xaxxbx'
    s =~ /x.*?x/
    puts $~[0] # xax

**Python**

The same example using Python

    >>> import re
    >>> re.findall('x.*?x','xaxxbx')
    ['xax', 'xbx']
    >>> re.findall('x.*x','xaxxbx')
    ['xaxxbx']
