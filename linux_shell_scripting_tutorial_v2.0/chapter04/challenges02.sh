#/bin/bash
# Write a shell script that display one of ten unique fortune cookie message, at random each it is run.

# Genarate a number (random number) between 1 and 10
r=$(( $RANDOM%10+0 ))

# Quotes author name
author="\t --Bhagavad Gita."

# Store cookies or quotes in an array
array=( "Neither in this world nor elsewhere is there any happiness in store for him who always doubts."
	"Hell has three gates: lust, anger, and greed."
	"Sever the ignorant doubt in your heart with the sword of self-knowledge. Observe your discipline. Arise."
	"Delusion arises from anger. The mind is bewildered by delusion. Reasoning is destroyed when the mind is bewildered. One falls down when reasoning is destroyed."
	"One gradually attains tranquillity of mind by keeping the mind fully absorbed in the Self by means of a well-trained intellect, and thinking of nothing else."
	"The power of God is with you at all times; through the activities of mind, senses, breathing, and emotions; and is constantly doing all the work using you as a mere instrument."
	"One who has control over the mind is tranquil in heat and cold, in pleasure and pain, and in honor and dishonor; and is ever steadfast with the Supreme Self"
	"The wise sees knowledge and action as one; they see truly."
	"The mind acts like an enemy for those who do not control it."
	"Perform your obligatory duty, because action is indeed better than inaction." )

# Display a random message
echo
echo ${array[$r]}
echo -e "$author"
echo
