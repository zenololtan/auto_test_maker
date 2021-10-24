#Automate c++ header and files
#Use: cppmake name1 name2 name3 name4
#Makes an hpp and cpp file containing class in coplienform and funcs with given name
#

import sys

class	Template:
	def	__init__(self, name):
		self.name = name
		self.hpp_template = "./templates/hpp_template.txt"
		self.cpp_template = "./templates/cpp_template.txt"
		self.create_file(name + ".hpp", self.hpp_template)
		self.create_file(name + ".cpp", self.cpp_template)

	def	copy_content(self, fd_new, fd_tmpl):
		for line in fd_tmmpl:
			if "ifndef" or "define" in line:
				fd_new.write(line.replace("*NAME*", self.name.upper()))
			else:
				fd_new.write(line.replace("*NAME*", self.name))

	def	create_file(name, template):
		fd_new = open(name, "w")
		fd_tmpl = open(template, "r")
		self.copy_content(fd_new, fd_tmpl)
		fd_new.close()
		fd_tmpl.close()
	
def	main():
	templates = []
	for line in sys.argv[1:]:
		templates.append(Template(line))

#if __name__ == "__main__":
main()
