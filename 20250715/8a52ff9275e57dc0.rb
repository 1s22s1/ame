S = gets.chomp.split("").map(&:to_i)

def dangerous?(s)
  if s[0] + 1 == s[1] && s[1] + 1 == s[2] && s[2] + 1 == s[3] || s[0] - 1 == s[1] && s[1] - 1 == s[2] && s[2] - 1 == s[3] || s.uniq.length == 1
    true
  else
    false
  end
end

if dangerous?(S)
  puts 'dangerous'
else
  puts 'safe'
end
