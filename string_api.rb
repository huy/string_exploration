s='hello' + ' world'
puts "--- length of #{s}=#{s.size}"
puts "--- first 5 character of #{s}=#{s[0..4]}"
puts "--- last 5 character of #{s}=#{s[-5..-1]}"
puts "--- position of world in #{s}=#{s.index("world")}"
puts "--- replace world by moon in #{s}=#{s.sub("world","moon")}"
puts "--- replace l by ? in #{s}=#{s.gsub("l","?")}"
puts "--- split  #{s} by space ="
puts s.split(" ").inspect
puts "--- reverse of  #{s}=#{s.reverse}"
