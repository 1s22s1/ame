pattern = ('a'..'z').zip((1..26).map{ | e | format('%02d', e)}).to_h

S = gets.chomp

S.each_char do |c|
  print pattern[c]
end

puts
