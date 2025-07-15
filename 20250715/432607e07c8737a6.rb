S = gets.chomp.split("").map(&:to_i)

if S[0] + 1 == S[1] && S[1] + 1 == S[2] && S[2] + 1 == S[3]
  puts 'dangerous'
else
  puts 'safe'
end
