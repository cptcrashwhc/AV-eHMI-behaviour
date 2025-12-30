#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Asset.o \
	${OBJECTDIR}/DataD.o \
	${OBJECTDIR}/InputHandler.o \
	${OBJECTDIR}/OutputImage.o \
	${OBJECTDIR}/OutputVideo.o \
	${OBJECTDIR}/Scenario.o \
	${OBJECTDIR}/ScenarioHandler.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=-std=c++17
CXXFLAGS=-std=c++17

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/usr/local/include/opencv4 -L/usr/include/hiredis

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ehmi_behaviour

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ehmi_behaviour: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ehmi_behaviour ${OBJECTFILES} ${LDLIBSOPTIONS} -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_video -lopencv_videoio -lopencv_videostab -levent -lhiredis -pthread

${OBJECTDIR}/Asset.o: Asset.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Asset.o Asset.cpp

${OBJECTDIR}/DataD.o: DataD.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DataD.o DataD.cpp

${OBJECTDIR}/InputHandler.o: InputHandler.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/InputHandler.o InputHandler.cpp

${OBJECTDIR}/OutputImage.o: OutputImage.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OutputImage.o OutputImage.cpp

${OBJECTDIR}/OutputVideo.o: OutputVideo.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/OutputVideo.o OutputVideo.cpp

${OBJECTDIR}/Scenario.o: Scenario.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Scenario.o Scenario.cpp

${OBJECTDIR}/ScenarioHandler.o: ScenarioHandler.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ScenarioHandler.o ScenarioHandler.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -I/usr/local/include/opencv4 -I/usr/include/hiredis -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
