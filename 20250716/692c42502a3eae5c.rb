S = gets.chomp

pattern = ('a'..'z').zip(1..26).to_h

S.each_char do |c|
  print pattern[c]
end

puts
