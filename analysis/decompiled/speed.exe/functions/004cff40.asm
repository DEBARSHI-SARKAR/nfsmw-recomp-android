004cff40  PUSH -0x1
004cff42  PUSH 0x86c7c6
004cff47  MOV EAX,FS:[0x0]
004cff4d  PUSH EAX
004cff4e  MOV dword ptr FS:[0x0],ESP
004cff55  PUSH ECX
004cff56  PUSH ESI
004cff57  MOV ESI,ECX
004cff59  MOV dword ptr [ESP + 0x4],ESI
004cff5d  CALL 0x004b8a90
004cff62  XOR EAX,EAX
004cff64  MOV dword ptr [ESI + 0x40],EAX
004cff67  MOV dword ptr [ESI + 0x44],EAX
004cff6a  MOV dword ptr [ESI + 0x48],EAX
004cff6d  MOV dword ptr [ESP + 0x10],EAX
004cff71  MOV dword ptr [ESI + 0x50],EAX
004cff74  MOV dword ptr [ESI + 0x54],EAX
004cff77  MOV dword ptr [ESI + 0x58],EAX
004cff7a  MOV dword ptr [ESI + 0x5c],EAX
004cff7d  MOV ECX,ESI
004cff7f  MOV byte ptr [ESP + 0x10],0x1
004cff84  MOV dword ptr [ESI + 0x60],EAX
004cff87  CALL 0x004ca1a0
004cff8c  MOV ECX,dword ptr [ESP + 0x8]
004cff90  MOV EAX,ESI
004cff92  POP ESI
004cff93  MOV dword ptr FS:[0x0],ECX
004cff9a  ADD ESP,0x10
004cff9d  RET
