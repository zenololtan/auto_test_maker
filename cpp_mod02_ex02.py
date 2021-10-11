class Unit:
	a = 1
	b = 3
	float_a = 1.05
	float_b = 2.09

	def __init__(self, test_case, name):
		self.test_case = test_case
		self.name = name
		self.ret = "	Fixed int_a(" + str(self.a) + ");\n"
		self.ret += "	Fixed int_b(" + str(self.b) + ");\n"	
		self.ret += "	Fixed float_a(" + str(self.float_a) + "f);\n"
		self.ret += "	Fixed float_b(" + str(self.float_b) + "f);\n"
		self.ret += '	std::cout << YELLOW << "' + self.name + ' operator" << RESET << std::endl;\n'

	def compareTemplate(self, isBool, templateType):
		if templateType == "int":
			templateType_a = "int"
			templateType_b = "int"
		elif templateType == "float":
			templateType_a = "float"
			templateType_b = "float"
		elif templateType == "mix":
			templateType_a = "int"
			templateType_b = "float"
		self.ret += '	std::cout << "Testcase ' + str(templateType)
		self.ret += ': (" << ' + templateType_a + '_a << "' + self.test_case + '" << ' + templateType_b + '_b << "): ";\n'
		self.ret += '	std::cout'
		if isBool:
			self.ret += ' << std::boolalpha'
		self.ret += ' << (' + templateType_a + '_a' + self.test_case + templateType_b + '_b) << std::endl;\n'
		if "=" in self.test_case and not "mix" in templateType:
			self.ret += "	Fixed copy_" + templateType_a + "(" + templateType_a + "_a);\n"
			self.ret += '	std::cout << "Testcase Equal (" << ' + templateType + '_a << ")"'
			self.ret += ' << "' + self.test_case + '" << copy_' + templateType_a + '<< ": ";\n'
			self.ret += '	std::cout << std::boolalpha << (' +templateType + "_a"
			self.ret += self.test_case + 'copy_' + templateType_a + ') << std::endl;\n'

	def mathTemplate(self, isBool, templateType):
		if templateType == "int":
			templateType_a = "int"
		elif templateType == "float":
			templateType_a = "float"
		self.ret += '	std::cout << "Testcase ' + str(templateType)
		if "Pre" in self.name:
			self.ret += ': (" << ' + templateType_a + '_a << "' + self.test_case + '): " << ('
			self.ret += templateType_a + "_a" + self.test_case + ') << std::endl;\n'
		else:
			self.ret += ': (" << "' + self.test_case + '" << ' + templateType_a + '_a << '
			self.ret += '"): " << (' + self.test_case + templateType_a + '_a' + ') << std::endl;\n'

	def makeUnit(self, isBool, templateType, level):
		funcMap = {
		'compare': self.compareTemplate,
		'math': self.mathTemplate}
		self.ret = "void	" + self.name + "(){\n" + self.ret
		if level >= 1:
			funcMap[templateType](isBool, "int")
		if level >= 2:
			funcMap[templateType](isBool, "float")
		if level >= 3:
			funcMap[templateType](isBool, "mix")
		self.ret += "}\n\n"

def testCases(f):
	t = Unit("<", "SmallerThen")
	t.makeUnit(True, "compare", 3)
	f.write(t.ret)

	t = Unit(">", "BiggerThen")
	t.makeUnit(True, "compare", 3)
	f.write(t.ret)

	t = Unit(">=", "SmallerThenEquals")
	t.makeUnit(True, "compare", 3)
	f.write(t.ret)

	t = Unit("<=", "BiggerThenEquals")
	t.makeUnit(True, "compare", 3)
	f.write(t.ret)

	t = Unit("==", "Equals")
	t.makeUnit(True, "compare", 3)
	f.write(t.ret)

	t = Unit("!=", "NotEquals")
	t.makeUnit(True, "compare", 3)
	f.write(t.ret)

	t = Unit("+", "Plus")
	t.makeUnit(False, "compare", 3)
	f.write(t.ret)

	t = Unit("-", "Minus")
	t.makeUnit(False, "compare", 3)
	f.write(t.ret)

	t = Unit("*", "Multiply")
	t.makeUnit(False, "compare", 3)
	f.write(t.ret)

	t = Unit("/", "Divide")
	t.makeUnit(False, "compare", 3)
	f.write(t.ret)

	t = Unit("++", "PreIncrement")
	t.makeUnit(False, "math", 2)
	f.write(t.ret)

	t = Unit("--", "PreDecrement")
	t.makeUnit(False, "math", 2)
	f.write(t.ret)

	t = Unit("++", "PostIncrement")
	t.makeUnit(False, "math", 2)
	f.write(t.ret)

	t = Unit("--", "PostDecrement")
	t.makeUnit(False, "math", 2)
	f.write(t.ret)

def writeMain(f):
	mainFile = "mainInc.cpp"
	file = open(mainFile, "r")
	f.write(file.read())

filename = "main.cpp"
f = open(filename, "w")
f.write('#include "Fixed.hpp"\n#include <iomanip>\n\n')
f.write('#define YELLOW  "\\033[33m"      /* Yellow */\n')
f.write('#define RESET   "\\033[0m"\n\n')
testCases(f)
writeMain(f)
