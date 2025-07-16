T = gets.chomp.chars.each_slice(2).map(&:join)

pattern = (1..26).map{ | e | format('%02d', e)}.zip('a'..'z').to_h

T.each do |e|
  print pattern[e]
end

puts
