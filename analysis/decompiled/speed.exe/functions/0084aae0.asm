0084aae0  CMP dword ptr [ESI + 0xc],0x1
0084aae4  JZ 0x0084ab0c
0084aae6  CALL 0x0084bcb0
0084aaeb  MOV byte ptr [ESI + 0x93],AL
0084aaf1  SHR EAX,0x8
0084aaf4  MOV byte ptr [ESI + 0x92],AL
0084aafa  SHR EAX,0x8
0084aafd  MOV byte ptr [ESI + 0x91],AL
0084ab03  SHR EAX,0x8
0084ab06  MOV byte ptr [ESI + 0x90],AL
0084ab0c  MOV EAX,dword ptr [ESI + 0x40]
0084ab0f  OR ECX,0xffffffff
0084ab12  CMP EAX,ECX
0084ab14  JZ 0x0084ab3a
0084ab16  MOV EAX,dword ptr [ESI + 0x4c]
0084ab19  TEST EAX,EAX
0084ab1b  JZ 0x0084ab3a
0084ab1d  TEST byte ptr [ESI + 0x3c],0x2
0084ab21  JZ 0x0084ab3a
0084ab23  MOV dword ptr [ESI + 0x40],ECX
0084ab26  MOV ECX,dword ptr [ESI + 0x48]
0084ab29  PUSH ECX
0084ab2a  PUSH 0x0
0084ab2c  PUSH ESI
0084ab2d  CALL EAX
0084ab2f  ADD ESP,0xc
0084ab32  CALL 0x0084bcb0
0084ab37  MOV dword ptr [ESI + 0x40],EAX
0084ab3a  RET
