S = gets.chomp.split("").map(&:to_i)

sum = 0

S.each_with_index do |digit, i|
  if(i % 2 == 0)
    sum += digit
  else
    sum += digit * 2
  end
end

puts S.join + (sum % 10).to_s
