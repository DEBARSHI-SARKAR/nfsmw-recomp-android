00492d40  SUB ESP,0x24
00492d43  PUSH ESI
00492d44  MOV ESI,ECX
00492d46  MOV EAX,dword ptr [ESI]
00492d48  MOV ECX,dword ptr [ESI + 0x4]
00492d4b  MOV EDX,dword ptr [ESI + 0x8]
00492d4e  MOV dword ptr [ESP + 0x4],EAX
00492d52  MOV EAX,dword ptr [ESI + 0x10]
00492d55  MOV dword ptr [ESP + 0x8],ECX
00492d59  MOV ECX,dword ptr [ESI + 0x14]
00492d5c  MOV dword ptr [ESP + 0x10],EAX
00492d60  MOV EAX,dword ptr [ESI + 0x20]
00492d63  MOV dword ptr [ESP + 0x14],ECX
00492d67  MOV ECX,dword ptr [ESI + 0x24]
00492d6a  MOV dword ptr [ESP + 0xc],EDX
00492d6e  MOV EDX,dword ptr [ESI + 0x18]
00492d71  MOV dword ptr [ESP + 0x1c],EAX
00492d75  MOV EAX,dword ptr [ESP + 0x2c]
00492d79  MOV dword ptr [ESP + 0x20],ECX
00492d7d  MOV dword ptr [ESP + 0x18],EDX
00492d81  MOV EDX,dword ptr [ESI + 0x28]
00492d84  PUSH EAX
00492d85  LEA ECX,[ESP + 0x8]
00492d89  PUSH ECX
00492d8a  MOV dword ptr [ESP + 0x2c],EDX
00492d8e  CALL 0x00492bb0
00492d93  MOV EDX,dword ptr [ESI + 0x30]
00492d96  MOV EAX,dword ptr [ESP + 0x38]
00492d9a  MOV dword ptr [EAX],EDX
00492d9c  MOV ECX,dword ptr [ESI + 0x34]
00492d9f  MOV dword ptr [EAX + 0x4],ECX
00492da2  MOV EDX,dword ptr [ESI + 0x38]
00492da5  MOV dword ptr [EAX + 0x8],EDX
00492da8  MOV ECX,dword ptr [ESI + 0x3c]
00492dab  ADD ESP,0x8
00492dae  MOV dword ptr [EAX + 0xc],ECX
00492db1  POP ESI
00492db2  ADD ESP,0x24
00492db5  RET 0x8
