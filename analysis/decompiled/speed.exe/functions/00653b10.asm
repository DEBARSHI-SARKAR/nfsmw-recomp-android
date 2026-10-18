00653b10  MOV AL,byte ptr [ECX + 0x6]
00653b13  CMP AL,byte ptr [ECX + 0x5]
00653b16  JNC 0x00653b1d
00653b18  INC AL
00653b1a  MOV byte ptr [ECX + 0x6],AL
00653b1d  FLD float ptr [ESP + 0x4]
00653b21  MOVZX EAX,byte ptr [ECX + 0x7]
00653b25  FADD float ptr [ECX + 0x8]
00653b28  MOV EDX,dword ptr [ECX + 0x10]
00653b2b  LEA EAX,[EDX + EAX*0x4]
00653b2e  MOV EDX,dword ptr [ESP + 0x4]
00653b32  FST float ptr [ECX + 0x8]
00653b35  FSUB float ptr [EAX]
00653b37  FSTP float ptr [ECX + 0x8]
00653b3a  MOV dword ptr [EAX],EDX
00653b3c  MOVZX EAX,byte ptr [ECX + 0x6]
00653b40  MOV dword ptr [ESP + 0x4],EAX
00653b44  MOV AL,byte ptr [ECX + 0x7]
00653b47  MOV DL,byte ptr [ECX + 0x5]
00653b4a  FILD dword ptr [ESP + 0x4]
00653b4e  INC AL
00653b50  CMP AL,DL
00653b52  MOV byte ptr [ECX + 0x7],AL
00653b55  FDIVR float ptr [ECX + 0x8]
00653b58  FSTP float ptr [ECX + 0xc]
00653b5b  JC 0x00653b61
00653b5d  MOV byte ptr [ECX + 0x7],0x0
00653b61  RET 0x4
