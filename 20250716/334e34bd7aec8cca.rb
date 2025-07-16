N, M = gets.chomp.split(" ").map(&:to_i)

Sn = []

(1..N).each do |i|
  Sn << gets.chomp
end

(0..N-2).each do |i|
  diff = 0

  (0..M-1).each do |j|
    if Sn[i][j] != Sn[i+1][j]
      diff += 1
    end
  end

  unless diff == 1
    puts "No"

    return
  end
end

puts "Yes"
