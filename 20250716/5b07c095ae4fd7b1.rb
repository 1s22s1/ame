S = gets.chomp

i = 0
while i < S.size
  j = i
  while j < S.size && S[i] == S[j]
    j += 1
  end

  print "#{S[i]}#{j - i}"

  i = j
end

puts
