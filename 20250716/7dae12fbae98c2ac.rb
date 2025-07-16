S = gets.chomp

if !(6 <= S.size && S.size <= 64)
  puts 'invalid'

  return
end

score = 0

score += 1 if S.size >= 10

score += 1 if S.match(/[a-z]/)
score += 1 if S.match(/[A-Z]/)
score += 1 if S.match(/[0-9]/)
score += 1 if S.match(/(!|\?|@)/)

if(score <= 2)
  puts 'weak'
elsif(score == 3)
  puts 'medium'
else
  puts 'strong'
end
