
class test_call(object):

	def __init__(self,**arg):
		self.d ={}
	
		self.d.update(**arg)
	def __call__(self,req):
		print("hello")
		print(self.d)
		return True
if __name__ == "__main__":
	a = test_call(a=3,b=4)
	print(a)
	print(a("a"))
