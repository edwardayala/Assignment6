# Assignment 6: Exploring Languages with Associative Arrays, Dynamic Lists, and Iteration
# Edward Ayala | Braxton Brown | Suvaik Patel
# Create Map & Dynamic List
# Write function to iterate over list and output contents (Print function)
# Print after adding 10 items to each collection
# Print again after adding another 10 items to each collection
# Print a final time after deleted 5 specific items from each collection
# Add function to sort remaining data in each collection
# Print sorted data

# Python Map = Dictionary
# Python Dynamic List = array or list


def print_map(c):               # Print Map
    for name, age in c.items():
        print(name, "is", age, "years old.")


def print_list(l):              # Print Dynamic List
    for i in l:
        print(i)


def delete_keys(m):
    print()
    to_be_deleted = []          # Dynamic list to hold list of keys to be deleted
    for key in m:             # For loop to populate list
        if key.endswith('a'):     # If the key ends with an 'a'
            print("Deleting", key, "from Map...")
            to_be_deleted.append(key)  # Add key to list
    for d in to_be_deleted:     # For loop to delete key from Map
        del m[d]            # Delete key from Map


def delete_indexes(dl):
    print()
    will_delete = []
    for e in dl:
        if e.endswith('a'):
            print("Deleting", e, "from dynamic list...")
            will_delete.append(e)
    for w in will_delete:
        dl.remove(w)


# dict() constructor builds dictionaries (maps)
pyMap = dict([
    ('Bob', 34),
    ('John', 26),
    ('Steve', 30),
    ('Frank', 43),
    ('Peter', 52),
    ('Albert', 20),
    ('Jim', 65),
    ('Alan', 85),
    ('James', 41),
    ('Bill', 36)])

# Build dynamic list with [] | can do ['Bob', 'John',...] as well
pyList = []
pyList.append('Bob')
pyList.append('John')
pyList.append('Steve')
pyList.append('Frank')
pyList.append('Peter')
pyList.append('Albert')
pyList.append('Jim')
pyList.append('Alan')
pyList.append('James')
pyList.append('Bill')

print("\nPython Map:")
print_map(pyMap)
print("\nPython Dynamic List:")
print_list(pyList)

pyMap['Lisa'] = 21              # ends with a
pyMap['Lauren'] = 32
pyMap['Samantha'] = 44          # ends with a
pyMap['Alexis'] = 54
pyMap['Jennifer'] = 63
pyMap['Miranda'] = 27           # ends with a
pyMap['Elizabeth'] = 38
pyMap['Mary'] = 49
pyMap['Julia'] = 42             # ends with a
pyMap['Vanessa'] = 36           # ends with a

pyList.append('Lisa')           # ends with a
pyList.append('Lauren')
pyList.append('Samantha')       # ends with a
pyList.append('Alexis')
pyList.append('Jennifer')
pyList.append('Miranda')        # ends with a
pyList.append('Elizabeth')
pyList.append('Mary')
pyList.append('Julia')          # ends with a
pyList.append('Vanessa')        # ends with a

print("\nUpdated Python Map:")
print_map(pyMap)
print("\nUpdated Python Dynamic List:")
print_list(pyList)

delete_keys(pyMap)
delete_indexes(pyList)
print('\nPython Map After Delete:')
print_map(pyMap)
print("\nPython Dynamic List After Delete:")
print_list(pyList)

print("\nSorted Python Map (Key):")
for s in sorted(pyMap):
    print(s, "is", pyMap.get(s), "years old.")

print("\nSorted Python Map (Value):")
for v in sorted(pyMap, key=pyMap.get):
    print(v, "is", pyMap.get(v), "years old.")

print("\nSorted Python Dynamic List:")
for g in sorted(pyList):
    print(g)
