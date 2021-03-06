#
# SDK Paths
#

!ifndef SDK_PATH
SDK_PATH = $(NTROOT)\public\sdk
!endif

!ifndef SDK_INC_PATH
SDK_INC_PATH = $(SDK_PATH)\inc
!endif

!ifndef SDK_INC16_PATH
SDK_INC16_PATH = $(SDK_PATH)\inc16
!endif

!ifndef SDK_LIB_DEST
SDK_LIB_DEST = $(SDK_PATH)\lib
!endif

!ifndef SDK_LIB_PATH
SDK_LIB_PATH = $(SDK_LIB_DEST)\*
!endif

!ifndef SDK_LIB16_PATH
SDK_LIB16_PATH=$(SDK_PATH)\lib16
!endif

#
# DDK Paths
#

!ifndef DDK_PATH
DDK_PATH = $(NTROOT)\public\ddk
!endif

!ifndef DDK_INC_PATH
DDK_INC_PATH = $(DDK_PATH)\inc
!endif

!ifndef DDK_LIB_DEST
DDK_LIB_DEST = $(DDK_PATH)\lib
!endif

!ifndef DDK_LIB_PATH
DDK_LIB_PATH = $(DDK_LIB_DEST)\*
!endif

!ifndef WDM_INC_PATH
WDM_INC_PATH = $(DDK_INC_PATH)\wdm
!endif

#
# IFSKit Paths
#

!ifndef IFSKIT_PATH
IFSKIT_PATH = $(NTROOT)\public\ifskit
!endif

!ifndef IFSKIT_INC_PATH
IFSKIT_INC_PATH = $(IFSKIT_PATH)\inc
!endif

!ifndef IFSKIT_LIB_DEST
IFSKIT_LIB_DEST = $(IFSKIT_PATH)\lib
!endif

!ifndef IFSKIT_LIB_PATH
IFSKIT_LIB_PATH = $(IFSKIT_LIB_DEST)\*
!endif

#
# HALKit Paths
#

!ifndef HALKIT_PATH
HALKIT_PATH = $(NTROOT)\public\halkit
!endif

!ifndef HALKIT_INC_PATH
HALKIT_INC_PATH = $(HALKIT_PATH)\inc
!endif

!ifndef HALKIT_LIB_DEST
HALKIT_LIB_DEST = $(HALKIT_PATH)\lib
!endif

!ifndef HALKIT_LIB_PATH
HALKIT_LIB_PATH = $(HALKIT_LIB_DEST)\*
!endif

#
# ProcessorKit Paths
#

!ifndef PROCESSOR_PATH
PROCESSOR_PATH = $(NTROOT)\public\processorkit
!endif

!ifndef PROCESSOR_INC_PATH
PROCESSOR_INC_PATH = $(PROCESSOR_PATH)\inc
!endif

!ifndef PROCESSOR_LIB_DEST
PROCESSOR_LIB_DEST = $(PROCESSOR_PATH)\lib
!endif

!ifndef PROCESSOR_LIB_PATH
PROCESSOR_LIB_PATH = $(PROCESSOR_LIB_DEST)\*
!endif

#
# OAK Paths
#

!ifndef OAK_PATH
OAK_PATH=$(NTROOT)\public\oak
!endif

!ifndef OAK_INC_PATH
OAK_INC_PATH = $(OAK_PATH)\inc
!endif

!ifndef OAK_BIN_PATH
OAK_BIN_PATH = $(OAK_PATH)\binr
!endif

#
# WDF Paths
#

!ifndef WDF_ROOT
WDF_ROOT = $(NTROOT)\Wdf
!endif

#
# Runtime Library Paths
#

!ifndef CRT_INC_PATH
CRT_INC_PATH = $(SDK_INC_PATH)\crt
!endif

!ifndef IOSTREAMS_INC_PATH
IOSTREAMS_INC_PATH = $(SDK_INC_PATH)\crt\iostreams
!endif

!ifndef STL6_INC_PATH
STL6_INC_PATH = $(SDK_INC_PATH)\crt\stl60
!endif

!ifndef CRT_LIB_PATH
CRT_LIB_PATH = $(SDK_LIB_PATH)
!endif

!ifndef ATL_LIB_PATH
ATL_LIB_PATH=$(SDK_LIB_PATH)
!endif

!ifndef MFC_LIB_PATH
MFC_LIB_PATH=$(SDK_LIB_PATH)
!endif

# "mfc$(MFC_VER)" will be appended to this in makefile.def to
# create MFC_INC_PATH
!ifndef MFC_INC_ROOT
MFC_INC_ROOT=$(SDK_INC_PATH)
!endif

# "atl$(ATL_VER)" will be appended to this in makefile.def to
# create ATL_INC_PATH
!ifndef ATL_INC_ROOT
ATL_INC_ROOT=$(SDK_INC_PATH)
!endif

#
# Public Internal
#

!ifndef PUBLIC_INTERNAL_PATH
PUBLIC_INTERNAL_PATH = $(NTROOT)\public\internal
!endif

#
# Projects
#

ADMIN_INC_PATH=$(PUBLIC_INTERNAL_PATH)\Admin\inc
ADMIN_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\Admin\lib
ADMIN_LIB_PATH=$(ADMIN_LIB_DEST)\$(TARGET_DIRECTORY)

BASE_INC_PATH=$(PUBLIC_INTERNAL_PATH)\Base\inc
BASE_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\Base\lib
BASE_LIB_PATH=$(BASE_LIB_DEST)\$(TARGET_DIRECTORY)

COM_INC_PATH=$(PUBLIC_INTERNAL_PATH)\COM\inc
COM_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\COM\lib
COM_LIB_PATH=$(COM_LIB_DEST)\$(TARGET_DIRECTORY)

DRIVERS_INC_PATH=$(PUBLIC_INTERNAL_PATH)\Drivers\inc
DRIVERS_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\Drivers\lib
DRIVERS_LIB_PATH=$(DRIVERS_LIB_DEST)\$(TARGET_DIRECTORY)

DS_INC_PATH=$(PUBLIC_INTERNAL_PATH)\DS\inc
DS_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\DS\lib
DS_LIB_PATH=$(DS_LIB_DEST)\$(TARGET_DIRECTORY)

ENDUSER_INC_PATH=$(PUBLIC_INTERNAL_PATH)\EndUser\inc
ENDUSER_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\EndUser\lib
ENDUSER_LIB_PATH=$(ENDUSER_LIB_DEST)\$(TARGET_DIRECTORY)

INETCORE_INC_PATH=$(PUBLIC_INTERNAL_PATH)\InetCore\inc
INETCORE_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\InetCore\lib
INETCORE_LIB_PATH=$(INETCORE_LIB_DEST)\$(TARGET_DIRECTORY)

INETSRV_INC_PATH=$(PUBLIC_INTERNAL_PATH)\InetSrv\inc
INETSRV_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\InetSrv\lib
INETSRV_LIB_PATH=$(INETSRV_LIB_DEST)\$(TARGET_DIRECTORY)

MULTIMEDIA_INC_PATH=$(PUBLIC_INTERNAL_PATH)\MultiMedia\inc
MULTIMEDIA_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\MultiMedia\lib
MULTIMEDIA_LIB_PATH=$(MULTIMEDIA_LIB_DEST)\$(TARGET_DIRECTORY)

NET_INC_PATH=$(PUBLIC_INTERNAL_PATH)\Net\inc
NET_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\Net\lib
NET_LIB_PATH=$(NET_LIB_DEST)\$(TARGET_DIRECTORY)

NLS_INC_PATH=$(PUBLIC_INTERNAL_PATH)\Nls\inc

PRINTSCAN_INC_PATH=$(PUBLIC_INTERNAL_PATH)\PrintScan\inc
PRINTSCAN_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\PrintScan\lib
PRINTSCAN_LIB_PATH=$(PRINTSCAN_LIB_DEST)\$(TARGET_DIRECTORY)

SDKTOOLS_INC_PATH=$(PUBLIC_INTERNAL_PATH)\SdkTools\inc
SDKTOOLS_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\SdkTools\lib
SDKTOOLS_LIB_PATH=$(SDKTOOLS_LIB_DEST)\$(TARGET_DIRECTORY)

SHELL_INC_PATH=$(PUBLIC_INTERNAL_PATH)\Shell\inc
SHELL_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\Shell\lib
SHELL_LIB_PATH=$(SHELL_LIB_DEST)\$(TARGET_DIRECTORY)

TERMSRV_INC_PATH=$(PUBLIC_INTERNAL_PATH)\TermSrv\inc
TERMSRV_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\TermSrv\lib
TERMSRV_LIB_PATH=$(TERMSRV_LIB_DEST)\$(TARGET_DIRECTORY)

WINDOWS_INC_PATH=$(PUBLIC_INTERNAL_PATH)\Windows\inc
WINDOWS_LIB_DEST=$(PUBLIC_INTERNAL_PATH)\Windows\lib
WINDOWS_LIB_PATH=$(WINDOWS_LIB_DEST)\$(TARGET_DIRECTORY)
