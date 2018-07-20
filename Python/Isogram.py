#An isogram is a word with no repeating letters, consecutive OR non-consecutive
#This function tests whether a string is an isogram, and assumes the empty string "" is an isogram
def is_isogram(string):
    string.lower()
    print(string)
    in_string = []
    for letter in string:
        if letter in in_string:
            print('break at ' + letter)
            return False
        else:
            print('adding letter to list: ' + letter)
            in_string.append(letter)
        print(in_string)
    return True
