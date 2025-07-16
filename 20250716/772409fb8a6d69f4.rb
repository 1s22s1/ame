N = gets.chomp.split("").map(&:to_i)

answer = N.map do |e|
  e -= 3

  if(e < 0)
    e += 10
  end

  e
end

puts answer.join
