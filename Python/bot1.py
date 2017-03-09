import praw


r = praw.Reddit("PyEng Test 0.1")

subreddit = r.get_subreddit("worldnews")

for subm in subreddit.get_hot(limit = 10):
	print "Title: ", subm.title
	print "Score: ", subm.score
	print "--------------------------------"
