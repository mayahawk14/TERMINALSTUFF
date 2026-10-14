class School:
	def __init__(self, schoolName, studentBodyNum, estYear, sideOfTown, inOperation):
		self.schoolName = schoolName
		self.studentBodyNum  = studentBodyNum
		self.estYear = estYear
		self.sideOfTown = sideOfTown
		self.inOperation = inOperation

	def get_schoolName(self):
		return f"{self.schoolName}"

	def printSchool(self):
		return f"{self.schoolName} (Est. {self.estYear}) - {self.sideOfTown} SA, Texas"


class Student(School):
	def __init__(self, schoolName, name, ID, gpa):
		self.schoolName = super().get_schoolName()
		self.name = name
		self.ID = ID
		self.gpa = gpa

	def getName(self):
		return f"{self.name} "

	def getGpa(self):
		return f"{self.gpa}"

s1 = Student("St. Teresa Academy", "Alice", 12345, 3.4)
s2 = Student("Lincoln Elementary School", "Johan", 67890, 2.2)

print(f"{s1.name} has a gpa of {s1.gpa} at {self.schoolName}")
print(s2.getName() + "has a gpa of " + s2.getGpa() + " at {self.schoolName}")

print("\n\n")

sch1 = School("John Martin High School", 500, 1969, "East", True)
sch2 = School("St. Teresa Academy", 170, 1883, "North", True)
sch3 = School("School of Science and Art", 730, 2008, "West", False)
sch4 = School("Lincoln Elementary School", 550, 1973, "East", True)
sch5 = School("Academy for Rising Scholars", 200, 1997, "South", False)


listOfSchools = [sch1, sch2, sch3, sch4, sch5]

for x in listOfSchools:
	if x.inOperation == True:
		print(x.printSchool())


