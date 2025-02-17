def high(string):
    word_sums={}
    str1= string.lower().split()
    char_list=[list(word) for word in str1]
    for word in str1:
        total=0
        for char in word:
            if 'a'<= char <='z':
                total += ((ord(char)) - ord('a') +1)
            elif '0'<= char <='9':
                total += int(char)
        word_sums[word]=total
    max_word= max(word_sums, key=word_sums.get)    
    return max_word   