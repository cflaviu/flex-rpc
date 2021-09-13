import qbs 1.0

CppApplication {
    Depends { name: 'cpp' }
	consoleApplication: true
	cpp.cxxLanguageVersion: "c++20"
	cpp.enableRtti: false
	cpp.includePaths: ["api", "inc"]
	cpp.staticLibraries: "pthread"
	files: [
	   // "src/server/main.cpp"
	]
	Group {     // Properties for the produced executable
	    name: "installer"
		fileTagsFilter: "application"
		qbs.install: true
		qbs.installDir: "bin"
		}
}
