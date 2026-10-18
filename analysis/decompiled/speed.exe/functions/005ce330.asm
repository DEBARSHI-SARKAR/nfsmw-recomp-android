005ce330  SUB ESP,0x24
005ce333  MOV ECX,dword ptr [0x008f5928]
005ce339  LEA EAX,[ESP]
005ce33c  PUSH EAX
005ce33d  MOV EAX,dword ptr [ESP + 0x2c]
005ce341  MOV EDX,dword ptr [EAX + 0x8]
005ce344  AND EDX,ECX
005ce346  TEST EDX,EDX
005ce348  MOV dword ptr [ESP + 0x2c],EDX
005ce34c  FILD dword ptr [ESP + 0x2c]
005ce350  JGE 0x005ce358
005ce352  FADD float ptr [0x00891214]
005ce358  FMUL float ptr [0x0091dd54]
005ce35e  MOV EDX,dword ptr [EAX + 0x4]
005ce361  AND EDX,ECX
005ce363  SUB ESP,0xc
005ce366  TEST EDX,EDX
005ce368  FSTP float ptr [ESP + 0x8]
005ce36c  MOV dword ptr [ESP + 0x38],EDX
005ce370  FILD dword ptr [ESP + 0x38]
005ce374  JGE 0x005ce37c
005ce376  FADD float ptr [0x00891214]
005ce37c  FMUL float ptr [0x0091dd54]
005ce382  MOV EAX,dword ptr [EAX]
005ce384  AND EAX,ECX
005ce386  TEST EAX,EAX
005ce388  MOV dword ptr [ESP + 0x38],EAX
005ce38c  FSTP float ptr [ESP + 0x4]
005ce390  FILD dword ptr [ESP + 0x38]
005ce394  JGE 0x005ce39c
005ce396  FADD float ptr [0x00891214]
005ce39c  FMUL float ptr [0x0091dd54]
005ce3a2  FSTP float ptr [ESP]
005ce3a5  CALL 0x005c6780
005ce3aa  MOV ECX,dword ptr [ESP + 0x3c]
005ce3ae  PUSH ECX
005ce3af  LEA EDX,[ESP + 0x14]
005ce3b3  PUSH EDX
005ce3b4  CALL 0x005c60e0
005ce3b9  ADD ESP,0x3c
005ce3bc  RET
