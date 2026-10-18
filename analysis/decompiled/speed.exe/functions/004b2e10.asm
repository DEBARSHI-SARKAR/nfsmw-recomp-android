004b2e10  MOV EAX,dword ptr [ESP + 0x4]
004b2e14  TEST EAX,EAX
004b2e16  JZ 0x004b2e30
004b2e18  MOV EAX,dword ptr [EAX]
004b2e1a  CMP dword ptr [EAX],0x4d525453
004b2e20  JNZ 0x004b2e30
004b2e22  MOV ECX,dword ptr [ESP + 0x8]
004b2e26  MOV EDX,dword ptr [ESP + 0xc]
004b2e2a  MOV dword ptr [EAX + 0x48],ECX
004b2e2d  MOV dword ptr [EAX + 0x4c],EDX
004b2e30  RET
