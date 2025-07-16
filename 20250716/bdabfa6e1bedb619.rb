S = gets.chomp.split("")

if S.any? {|c| ('A'..'Z').to_a.include?(c) }
  puts 'Yes'
else
  puts 'No'
end
