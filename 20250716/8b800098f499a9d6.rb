S = gets.chomp

sum = 0

S.split("").map(&:to_i)[0...-1].each_with_index do |digit, i|
  if(i % 2 == 0)
    sum += digit
  else
    sum += digit * 2
  end
end

if S[-1] == (sum % 10).to_s
  puts 'Yes'
else
  puts 'No'
end
