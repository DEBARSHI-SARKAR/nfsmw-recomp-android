007fff3e  PUSH EBP
007fff3f  MOV EBP,ESP
007fff41  PUSH ESI
007fff42  MOV ESI,dword ptr [EBP + 0x8]
007fff45  PUSH EDI
007fff46  MOV EDI,dword ptr [ESI + 0x274]
007fff4c  PUSH 0x20
007fff4e  XOR EAX,EAX
007fff50  POP ECX
007fff51  STOSD.REP ES:EDI
007fff53  MOV EAX,dword ptr [ESI + 0x8]
007fff56  TEST EAX,EAX
007fff58  JNZ 0x007fff89
007fff5a  PUSH dword ptr [ESI + 0x74]
007fff5d  MOV ECX,dword ptr [ESI + 0x254]
007fff63  PUSH dword ptr [ESI + 0x274]
007fff69  MOV EAX,dword ptr [ESI + 0x70]
007fff6c  ADD ECX,EAX
007fff6e  PUSH ECX
007fff6f  MOV ECX,dword ptr [ESI + 0x25c]
007fff75  ADD ECX,EAX
007fff77  PUSH ECX
007fff78  PUSH dword ptr [ESI + 0x288]
007fff7e  CALL dword ptr [0x009c6a64]
007fff84  ADD ESP,0x14
007fff87  JMP 0x007ffff5
007fff89  CMP dword ptr [EAX*0x4 + 0x90a2d0],0x0
007fff91  JZ 0x007fffc6
007fff93  PUSH dword ptr [EBP + 0xc]
007fff96  PUSH dword ptr [ESI + 0x288]
007fff9c  PUSH ESI
007fff9d  CALL 0x008076a3
007fffa2  PUSH dword ptr [ESI + 0x74]
007fffa5  MOV EAX,dword ptr [ESI + 0x25c]
007fffab  ADD EAX,dword ptr [ESI + 0x70]
007fffae  PUSH EAX
007fffaf  PUSH dword ptr [ESI + 0x274]
007fffb5  PUSH dword ptr [ESI + 0x288]
007fffbb  CALL dword ptr [0x009c6a68]
007fffc1  ADD ESP,0x1c
007fffc4  JMP 0x007ffff5
007fffc6  CMP EAX,0x5
007fffc9  PUSH dword ptr [ESI + 0x74]
007fffcc  PUSH dword ptr [ESI + 0x274]
007fffd2  JNZ 0x007fffdc
007fffd4  MOV ECX,dword ptr [ESI + 0x24c]
007fffda  JMP 0x007fff69
007fffdc  MOV EAX,dword ptr [ESI + 0x25c]
007fffe2  ADD EAX,dword ptr [ESI + 0x70]
007fffe5  PUSH EAX
007fffe6  PUSH dword ptr [ESI + 0x288]
007fffec  CALL dword ptr [0x009c6a6c]
007ffff2  ADD ESP,0x10
007ffff5  POP EDI
007ffff6  POP ESI
007ffff7  POP EBP
007ffff8  RET
