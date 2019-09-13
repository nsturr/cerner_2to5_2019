import random
# cerner_2^5_2019

word_content = open('..\words\words.csv').readlines()

quiz_entries = random.sample(range(0,len(word_content)),4)

answer=quiz_entries[0]
word=word_content[answer].split('	')[0]

answer=word_content[quiz_entries[0]].split('	')[1].rstrip()
wrong1=word_content[quiz_entries[1]].split('	')[1].rstrip()
wrong2=word_content[quiz_entries[2]].split('	')[1].rstrip()
wrong3=word_content[quiz_entries[3]].split('	')[1].rstrip()

options=[answer,wrong1,wrong2,wrong3]
options.sort()

print(word + ':')
print('    1. ' + options[0])
print('    2. ' + options[1])
print('    3. ' + options[2])
print('    4. ' + options[3])
print('Answer? ');

choice = int(input()) - 1
if (choice > 0 and choice < 5 and id(options[choice]) == id(answer)):
    print('Correct!')
else:
    print('Wrong! The correct definition is: ' + answer)
