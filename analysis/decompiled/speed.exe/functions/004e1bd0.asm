004e1bd0  SUB ESP,0xc
004e1bd3  PUSH 0x8
004e1bd5  CALL 0x0081dafd
004e1bda  ADD ESP,0x4
004e1bdd  MOV dword ptr [ESP + 0x4],0x440a0000
004e1be5  FLD float ptr [ESP + 0x4]
004e1be9  FIST dword ptr [ESP]
004e1bec  FISUBR dword ptr [ESP]
004e1bef  FSTP float ptr [ESP + 0x8]
004e1bf3  MOV ECX,dword ptr [ESP + 0x8]
004e1bf7  MOV EDX,dword ptr [ESP]
004e1bfa  SAR ECX,0x1f
004e1bfd  SUB EDX,ECX
004e1bff  LEA EAX,[EAX + EDX*0x4 + 0x4]
004e1c03  ADD ESP,0xc
004e1c06  RET
