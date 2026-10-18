00653bb0  PUSH ECX
00653bb1  MOV DL,byte ptr [ECX + 0x5]
00653bb4  XOR EAX,EAX
00653bb6  TEST DL,DL
00653bb8  JBE 0x00653bd3
00653bba  LEA EBX,[EBX]
00653bc0  MOV EDX,dword ptr [ECX + 0x10]
00653bc3  FLD float ptr [ESP + 0x8]
00653bc7  FSTP float ptr [EDX + EAX*0x4]
00653bca  MOVZX EDX,byte ptr [ECX + 0x5]
00653bce  INC EAX
00653bcf  CMP EAX,EDX
00653bd1  JL 0x00653bc0
00653bd3  MOV AL,byte ptr [ECX + 0x5]
00653bd6  MOVZX EDX,AL
00653bd9  MOV dword ptr [ESP],EDX
00653bdc  MOV byte ptr [ECX + 0x6],AL
00653bdf  MOV EAX,dword ptr [ESP + 0x8]
00653be3  FILD dword ptr [ESP]
00653be6  MOV dword ptr [ECX + 0xc],EAX
00653be9  FMUL float ptr [ESP + 0x8]
00653bed  FSTP float ptr [ECX + 0x8]
00653bf0  POP ECX
00653bf1  RET 0x4
