S = gets.chomp

if S.split("").uniq.length == 1
  puts 'dangerous'
else
  puts 'safe'
end
