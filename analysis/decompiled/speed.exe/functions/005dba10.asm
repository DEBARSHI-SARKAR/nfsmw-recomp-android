005dba10  PUSH ECX
005dba11  PUSH ESI
005dba12  LEA EAX,[ESP + 0x4]
005dba16  PUSH EAX
005dba17  MOV ESI,ECX
005dba19  CALL 0x005db990
005dba1e  MOV ECX,dword ptr [ESP + 0x8]
005dba22  MOV EDX,dword ptr [ESP + 0x10]
005dba26  ADD ESP,0x4
005dba29  XOR EAX,EAX
005dba2b  MOV dword ptr [ESI],ECX
005dba2d  MOV dword ptr [ESI + 0x4],EAX
005dba30  MOV dword ptr [ESI + 0xc],EAX
005dba33  MOV dword ptr [ESI + 0x8],0x14
005dba3a  MOV dword ptr [ESI + 0x10],EDX
005dba3d  MOV EAX,ESI
005dba3f  POP ESI
005dba40  POP ECX
005dba41  RET 0x4
