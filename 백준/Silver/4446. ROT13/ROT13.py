
vowel = ['a','i','y','e','o','u']
consonat = ["b", "k", "x", "z", "n", "h", "d", "c", "w", "g", "p", "v", "j", "q", "t", "s", "r", "l", "m", "f"]


while True:
    try:
        s = input() 
        ans = ""

        for c in s:
            cislower = True

            if c.isupper():
                cislower = False
                c = c.lower()

            if c in vowel:
                t = vowel[(vowel.index(c)+3)%6]
                ans += t if cislower else t.upper()

            elif c in consonat:
                t = consonat[(consonat.index(c)+10)%20]
                ans += t if cislower else t.upper()

            else:
                ans += c

        print(ans)
    except:
        break
    
