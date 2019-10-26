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

def delete_hash(h)
  to_be_deleted = []
  puts
  h.each {|k, v|
    if String(k).end_with?('a')
      puts 'Deleting ' << String(k) << ' from Associative Array...'
      to_be_deleted.push(k)
    end
  }
  to_be_deleted.each do |d|
    h.delete(d)
  end
end

def delete_d_array(da)
  to_be_deleted = []
  puts
  da.each {|a|
    if a.end_with?('a')
      puts 'Deleting ' << a << ' from Dynamic Array...'
      to_be_deleted.push(a)
    end
  }
  to_be_deleted.each do |d|
    da.delete(d)
  end
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

rb_hash[:Lisa] = 21                 # ends with a
rb_hash[:Lauren] = 32
rb_hash[:Samantha] = 44             # ends with a
rb_hash[:Alexis] = 54
rb_hash[:Jennifer] = 63
rb_hash[:Miranda] = 27              # ends with a
rb_hash[:Elizabeth] = 38
rb_hash[:Mary] = 49
rb_hash[:Julia] = 42                # ends with a
rb_hash[:Vanessa] = 36              # ends with a

rb_array.push('Lisa')           # ends with a
rb_array.push('Lauren')
rb_array.push('Samantha')       # ends with a
rb_array.push('Alexis')
rb_array.push('Jennifer')
rb_array.push('Miranda')        # ends with a
rb_array.push('Elizabeth')
rb_array.push('Mary')
rb_array.push('Julia')          # ends with a
rb_array.push('Vanessa')        # ends with a

puts "\nUpdated Ruby Associative Array:"
print_hash(rb_hash)
puts "\nUpdated Ruby Dynamic Array:"
print_d_array(rb_array)


delete_hash(rb_hash)
delete_d_array(rb_array)

puts "\nRuby Associative Array After Delete:"
print_hash(rb_hash)
puts "\nRuby Dynamic Array After Delete:"
print_d_array(rb_array)

rb_hash_sort1 = rb_hash.sort_by { |name, age| name }
rb_hash_sort2 = rb_hash.sort_by { |name, age| age}
puts "\nSorted Ruby Associative Array (Key):"
print_hash(rb_hash_sort1)
puts "\nSorted Ruby Associative Array (Value):"
print_hash(rb_hash_sort2)

rb_array_sort = rb_array.sort
puts "\nSorted Ruby Dynamic Array:"
print_d_array(rb_array_sort)
