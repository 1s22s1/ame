N = gets.chomp.to_i
S = gets.chomp

def determin(c)
  case c
  when ('a'..'z')
    'lowercase'
  when ('A'..'Z')
    'uppercase'
  when ('0'..'9')
    'digit'
  else
    c
  end
end

S.split("").each do |c|
  puts determin(c)
end
