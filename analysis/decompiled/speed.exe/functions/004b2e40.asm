004b2e40  MOV EAX,dword ptr [ESP + 0x4]
004b2e44  TEST EAX,EAX
004b2e46  JZ 0x004b2e79
004b2e48  MOV EAX,dword ptr [EAX]
004b2e4a  CMP dword ptr [EAX],0x4d525453
004b2e50  JNZ 0x004b2e79
004b2e52  MOV ECX,dword ptr [ESP + 0x8]
004b2e56  TEST ECX,ECX
004b2e58  MOV dword ptr [EAX + 0x54],ECX
004b2e5b  JZ 0x004b2e79
004b2e5d  CMP dword ptr [EAX + 0x44],0x1
004b2e61  JNZ 0x004b2e79
004b2e63  MOV ECX,dword ptr [EAX + 0x4c]
004b2e66  MOV EDX,dword ptr [EAX + 0x184]
004b2e6c  MOV dword ptr [ESP + 0x8],ECX
004b2e70  MOV dword ptr [ESP + 0x4],EDX
004b2e74  JMP 0x007edb0e
004b2e79  RET
