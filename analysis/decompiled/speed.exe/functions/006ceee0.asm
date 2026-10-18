006ceee0  MOV EAX,[0x00982bdc]
006ceee5  MOV ECX,dword ptr [EAX]
006ceee7  PUSH 0x0
006ceee9  PUSH 0xe
006ceeeb  PUSH EAX
006ceeec  CALL dword ptr [ECX + 0xe4]
006ceef2  MOV EDX,dword ptr [ESP + 0x4]
006ceef6  MOV byte ptr [0x009877cc],0x1
006ceefd  MOV EAX,dword ptr [EDX + 0x4]
006cef00  PUSH EAX
006cef01  PUSH 0x987ab0
006cef06  CALL 0x006c8000
006cef0b  MOV ECX,dword ptr [ESP + 0x10]
006cef0f  PUSH 0x0
006cef11  PUSH ECX
006cef12  CALL 0x006c6cc0
006cef17  MOV EDX,dword ptr [ESP + 0x1c]
006cef1b  ADD ESP,0x10
006cef1e  LEA EAX,[ESP + 0x4]
006cef22  PUSH EAX
006cef23  MOV ECX,0x93caf4
006cef28  MOV dword ptr [ESP + 0x8],EDX
006cef2c  CALL 0x006c0f80
006cef31  MOV ECX,dword ptr [0x00982c80]
006cef37  MOV EAX,dword ptr [ECX + 0x48]
006cef3a  MOV EDX,dword ptr [EAX]
006cef3c  PUSH 0x0
006cef3e  PUSH EAX
006cef3f  CALL dword ptr [EDX + 0x100]
006cef45  MOV AL,0x1
006cef47  RET
