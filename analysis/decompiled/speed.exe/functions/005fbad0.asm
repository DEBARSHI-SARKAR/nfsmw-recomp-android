005fbad0  SUB ESP,0x8
005fbad3  PUSH ESI
005fbad4  MOV ESI,ECX
005fbad6  MOV EAX,dword ptr [ESI + 0x4]
005fbad9  TEST EAX,EAX
005fbadb  JZ 0x005fbb03
005fbadd  MOVZX EAX,word ptr [EAX + 0x26]
005fbae1  MOV dword ptr [ESP + 0x4],EAX
005fbae5  FILD dword ptr [ESP + 0x4]
005fbae9  FSTP float ptr [ESP + 0x8]
005fbaed  CALL 0x00527d40
005fbaf2  MOV dword ptr [ESP + 0x4],EAX
005fbaf6  FILD dword ptr [ESP + 0x4]
005fbafa  POP ESI
005fbafb  FDIVR float ptr [ESP + 0x4]
005fbaff  ADD ESP,0x8
005fbb02  RET
005fbb03  MOV EAX,dword ptr [ESI + 0xc]
005fbb06  TEST EAX,EAX
005fbb08  JZ 0x005fbb1b
005fbb0a  CMP dword ptr [EAX],0x0
005fbb0d  JNZ 0x005fbb1b
005fbb0f  MOV ECX,dword ptr [0x0091e00c]
005fbb15  PUSH EAX
005fbb16  CALL 0x005fa780
005fbb1b  MOV EAX,dword ptr [ESI + 0x10]
005fbb1e  TEST EAX,EAX
005fbb20  JZ 0x005fbb33
005fbb22  CMP dword ptr [EAX],0x0
005fbb25  JNZ 0x005fbb33
005fbb27  MOV ECX,dword ptr [0x0091e00c]
005fbb2d  PUSH EAX
005fbb2e  CALL 0x005fa780
005fbb33  MOV ECX,dword ptr [ESI + 0x8]
005fbb36  PUSH 0x0
005fbb38  PUSH 0xf9120d73
005fbb3d  CALL 0x00454810
005fbb42  TEST EAX,EAX
005fbb44  JNZ 0x005fbb50
005fbb46  PUSH 0x4
005fbb48  CALL 0x006269b0
005fbb4d  ADD ESP,0x4
005fbb50  FLD float ptr [EAX]
005fbb52  POP ESI
005fbb53  ADD ESP,0x8
005fbb56  RET
