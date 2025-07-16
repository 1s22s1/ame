N = gets.chomp.to_i

Sn = []

N.times do
  Sn << gets.chomp
end

unless Sn.uniq.length == N
  puts 'No'

  return
end

(0..N-2).each do |i|
  unless Sn[i][-1] == Sn[i+1][0]
    puts 'No'

    return
  end
end

puts 'Yes'
