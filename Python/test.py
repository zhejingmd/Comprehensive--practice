
def sequential_lookup(search_list, lookup_number):
    for i in range(len(search_list)):
        if search_list[i] == lookup_number:
            return i
        
lookup_list = [1, 5, 8, 123, 22, 54, 7, 99, 300, 222]
result = sequential_lookup(lookup_list, 123)
print("索引为：", result)


