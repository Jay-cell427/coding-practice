def pig_it(text):
    text1=text.split()
    pig_latin=[]
    for word in text1:
        if word.isalpha():
            pig_word=word[1:] + word[0]+ "ay"
            pig_latin.append(pig_word)        
        else:
            pig_latin.append(word)

    return " ".join(pig_latin)