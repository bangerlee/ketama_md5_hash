import ketama

inString = raw_input("Input the string: ")
print "  The md5 digest for %s is %u" % (inString, ketama.hashi(inString))
