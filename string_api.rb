puts "1.--- string literal"
s='hello world'; puts "string constant:",s
t="\tsay #{s}\n\tthen say bye"; puts "string template:",t
multilines=<<EOS
Hello
World
EOS
puts "mulilines:",multilines
puts "2.--- append 'hello' with ' world' =#{'hello' + ' world'}"
puts "3.--- length of #{s}=#{s.size}"
puts "4.--- first 5 character of #{s}=#{s[0..4]}"
puts "4.1--- last 5 character of #{s}=#{s[-5..-1]}"
puts "5.--- position of world in #{s}=#{s.index("world")}"
puts "5.1--- position of moon in #{s}=#{s.index("moon").inspect}"
puts "6.--- replace world by moon in #{s}=#{s.sub("world","moon")}"
puts "6.1--- replace all 'l' by '?' in #{s}=#{s.gsub("l","?")}"
puts "7.--- split  #{s} by space =#{s.split(" ").inspect}"
puts "8.--- reverse of  #{s}=#{s.reverse}"
puts "9.--- uppercase of  #{s}=#{s.upcase}"
puts "10.--- lowercase of  #{s}=#{s.downcase}"
s1 = 'hello world'
puts "11.--- compare #{s} with #{s1} returns #{s == s1}"
s2 = 'hello World'
puts "11.1--- compare #{s} with #{s2} returns #{s == s2}"
puts "12. --- iterate over each char"
require 'jcode'; s2.each_char{ |ch| puts ch }
puts "12.1 --- iterate over each char"
s2.each_byte {|b| puts b.chr}
puts "12.2 --- iterate over each char"
s2.split('').each {|ch| puts ch}
