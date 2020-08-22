##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=OpOverload
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/Users/n3vdawg/cppProjs/sec14
ProjectPath            :=/Users/n3vdawg/cppProjs/sec14/OpOverload
IntermediateDirectory  :=../build-$(ConfigurationName)/OpOverload
OutDir                 :=../build-$(ConfigurationName)/OpOverload
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Tyler Nevell
Date                   :=05/08/2020
CodeLitePath           :="/Users/n3vdawg/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=../build-$(ConfigurationName)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/private/var/folders/q4/p2hmh0ld6pjfpczzwxdcyh9c0000gn/T/AppTranslocation/E3A15DA1-0E21-4417-A591-D3F1710A7E31/d/codelite.app/Contents/SharedSupport/
Objects0=../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/OpOverload/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/OpOverload/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/OpOverload"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/OpOverload"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/OpOverload/.d:
	@mkdir -p "../build-$(ConfigurationName)/OpOverload"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(ObjectSuffix): Mystring.cpp ../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/n3vdawg/cppProjs/sec14/OpOverload/Mystring.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Mystring.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(DependSuffix): Mystring.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(DependSuffix) -MM Mystring.cpp

../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(PreprocessSuffix): Mystring.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/OpOverload/Mystring.cpp$(PreprocessSuffix) Mystring.cpp

../build-$(ConfigurationName)/OpOverload/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/OpOverload/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/n3vdawg/cppProjs/sec14/OpOverload/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/OpOverload/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/OpOverload/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/OpOverload/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/OpOverload/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/OpOverload/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/OpOverload//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


