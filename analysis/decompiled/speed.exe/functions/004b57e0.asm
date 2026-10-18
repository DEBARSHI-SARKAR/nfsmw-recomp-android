004b57e0  MOV EAX,dword ptr [ESP + 0x4]
004b57e4  FILD dword ptr [ESP + 0x8]
004b57e8  MOV dword ptr [ECX + 0xa0],EAX
004b57ee  MOV EAX,dword ptr [ECX + 0x98]
004b57f4  FSTP float ptr [ECX + 0x9c]
004b57fa  LEA EDX,[EAX + EAX*0x2]
004b57fd  MOV byte ptr [ECX + 0x94],0x1
004b5804  FILD dword ptr [EDX*0x8 + 0x8f2150]
004b580b  FMUL float ptr [0x00890d60]
004b5811  FST float ptr [ECX + 0x7c]
004b5814  FCOMP float ptr [0x00890968]
004b581a  FNSTSW AX
004b581c  TEST AH,0x41
004b581f  JP 0x004b5828
004b5821  MOV dword ptr [ECX + 0x7c],0x3c23d70a
004b5828  XOR EAX,EAX
004b582a  MOV EDX,0x3f800000
004b582f  MOV dword ptr [ECX + 0x84],EDX
004b5835  MOV dword ptr [ECX + 0x80],EAX
004b583b  MOV dword ptr [ECX + 0x88],EAX
004b5841  MOV byte ptr [ECX + 0x90],AL
004b5847  MOV dword ptr [ECX + 0x8c],EAX
004b584d  MOV dword ptr [ECX + 0x78],EAX
004b5850  MOV dword ptr [ECX + 0xb4],EAX
004b5856  MOV dword ptr [ECX + 0xb8],EAX
004b585c  MOV dword ptr [ECX + 0xbc],EDX
004b5862  MOV dword ptr [ECX + 0xc0],EDX
004b5868  RET 0x8
