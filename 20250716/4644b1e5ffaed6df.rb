S = gets.chomp

S.scan(/[a-z]{1}\d+/).each do |pattern|
 print pattern[0] * pattern[1...].to_i
end

puts
