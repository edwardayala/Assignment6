# Assignment 6: Exploring Languages with Associative Arrays, Dynamic Lists, and Iteration
# Edward Ayala | Braxton Brown | Suvaik Patel
# Create Associative Array & Dynamic List
# Write function to iterate over list and output contents (Print function)
# Print after adding 10 items to each collection
# Print again after adding another 10 items to each collection
# Print a final time after deleted 5 specific items from each collection
# Add function to sort remaining data in each collection
# Print sorted data

# Ruby Associative Array = Hash
# Ruby Dynamic Array = Array


def print_hash(h)
  h.each do |k, v|
    puts String(k) << ' is ' << String(v) << ' years old.'
  end
end

def print_d_array(d)
  d.each(&method(:puts))
end

rb_hash = {
    'Bob': 34,
    'John': 26,
    'Steve': 30,
    'Frank': 43,
    'Peter': 52,
    'Albert': 20,
    'Jim': 65,
    'Alan': 85,
    'James': 41,
    'Bill': 36
}

rb_array = []
rb_array.push('Bob')
rb_array.push('John')
rb_array.push('Steve')
rb_array.push('Frank')
rb_array.push('Peter')
rb_array.push('Albert')
rb_array.push('Jim')
rb_array.push('Alan')
rb_array.push('James')
rb_array.push('Bill')

puts "\nRuby Associative Array:"
print_hash(rb_hash)
puts "\nRuby Dynamic Array:"
print_d_array(rb_array)
