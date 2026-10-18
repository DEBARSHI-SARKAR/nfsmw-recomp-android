005bddd0  PUSH ESI
005bddd1  MOV ESI,dword ptr [ESP + 0x8]
005bddd5  MOV AL,byte ptr [ESI + 0x3]
005bddd8  TEST AL,AL
005bddda  JS 0x005bde41
005bdddc  MOVZX EAX,byte ptr [ESI + 0x2]
005bdde0  SUB EAX,0x0
005bdde3  JZ 0x005bddff
005bdde5  DEC EAX
005bdde6  JZ 0x005bdded
005bdde8  SUB EAX,0x2
005bddeb  JNZ 0x005bde12
005bdded  MOV EAX,dword ptr [ESP + 0x10]
005bddf1  MOV ECX,dword ptr [ESP + 0xc]
005bddf5  PUSH EAX
005bddf6  PUSH ECX
005bddf7  PUSH ESI
005bddf8  CALL 0x005b9d10
005bddfd  JMP 0x005bde0f
005bddff  MOV EDX,dword ptr [ESP + 0x10]
005bde03  MOV EAX,dword ptr [ESP + 0xc]
005bde07  PUSH EDX
005bde08  PUSH EAX
005bde09  PUSH ESI
005bde0a  CALL 0x005b5840
005bde0f  ADD ESP,0xc
005bde12  MOV AL,byte ptr [ESI + 0x2c]
005bde15  PUSH EDI
005bde16  XOR EDI,EDI
005bde18  TEST AL,AL
005bde1a  JZ 0x005bde26
005bde1c  MOV ECX,dword ptr [ESI + 0x30]
005bde1f  CALL 0x005ad440
005bde24  JMP 0x005bde29
005bde26  MOV EAX,dword ptr [ESI + 0x30]
005bde29  TEST EAX,EAX
005bde2b  JZ 0x005bde3c
005bde2d  LEA ECX,[ECX]
005bde30  MOV EAX,dword ptr [EAX + 0x4]
005bde33  INC EDI
005bde34  TEST EAX,EAX
005bde36  JNZ 0x005bde30
005bde38  TEST EDI,EDI
005bde3a  JNZ 0x005bde40
005bde3c  OR byte ptr [ESI + 0x3],0x80
005bde40  POP EDI
005bde41  POP ESI
005bde42  RET
