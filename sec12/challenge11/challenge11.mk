##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=challenge11
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=/Users/n3vdawg/cppProjs/sec12
ProjectPath            :=/Users/n3vdawg/cppProjs/sec12/challenge11
IntermediateDirectory  :=../build-$(ConfigurationName)/challenge11
OutDir                 :=../build-$(ConfigurationName)/challenge11
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Tyler Nevell
Date                   :=01/08/2020
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
Objects0=../build-$(ConfigurationName)/challenge11/main.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/challenge11/.d $(Objects) 
	@mkdir -p "../build-$(ConfigurationName)/challenge11"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@mkdir -p "../build-$(ConfigurationName)/challenge11"
	@mkdir -p ""../build-$(ConfigurationName)/bin""

../build-$(ConfigurationName)/challenge11/.d:
	@mkdir -p "../build-$(ConfigurationName)/challenge11"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/challenge11/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/challenge11/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/n3vdawg/cppProjs/sec12/challenge11/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/challenge11/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/challenge11/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/challenge11/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/challenge11/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/challenge11/main.cpp$(PreprocessSuffix) main.cpp


-include ../build-$(ConfigurationName)/challenge11//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


