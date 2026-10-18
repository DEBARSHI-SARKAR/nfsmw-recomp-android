00734c90  PUSH ESI
00734c91  MOV ESI,ECX
00734c93  MOV ECX,dword ptr [ESI + 0xf90]
00734c99  CALL 0x007ec1bd
00734c9e  MOV ECX,dword ptr [ESP + 0x8]
00734ca2  LEA EAX,[ESI + 0xef4]
00734ca8  MOV EDX,dword ptr [EAX]
00734caa  MOV dword ptr [ECX],EDX
00734cac  MOV EDX,dword ptr [EAX + 0x4]
00734caf  MOV dword ptr [ECX + 0x4],EDX
00734cb2  MOV EAX,dword ptr [EAX + 0x8]
00734cb5  MOV dword ptr [ECX + 0x8],EAX
00734cb8  MOV ECX,dword ptr [ESI + 0xf90]
00734cbe  CALL 0x007ec1c8
00734cc3  POP ESI
00734cc4  RET 0x4
