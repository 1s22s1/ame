N = gets.chomp.split("").map(&:to_i)

puts N.map{|e| (e + 3) % 10 }.join
