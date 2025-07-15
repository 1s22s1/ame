S = gets.chomp

if S.match(/\A\d{4}\z/)
  puts 'valid'
else
  puts 'invalid'
end
