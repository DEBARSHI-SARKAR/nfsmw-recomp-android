007db3e0  PUSH EBP
007db3e1  MOV EBP,ESP
007db3e3  SUB ESP,0xc
007db3e6  CMP dword ptr [EBP + 0x8],0x0
007db3ea  JNZ 0x007db40a
007db3ec  PUSH 0x8b8ad0
007db3f1  PUSH 0x0
007db3f3  PUSH 0x66
007db3f5  PUSH 0x8bd3f0
007db3fa  PUSH 0x2
007db3fc  CALL 0x007d2670
007db401  ADD ESP,0x14
007db404  CMP EAX,0x1
007db407  JNZ 0x007db40a
007db409  INT3
007db40a  MOV ECX,dword ptr [EBP + 0x8]
007db40d  MOV dword ptr [EBP + -0x4],ECX
007db410  MOV EDX,dword ptr [EBP + -0x4]
007db413  MOV EAX,dword ptr [EDX + 0xc]
007db416  AND EAX,0x83
007db41b  JZ 0x007db428
007db41d  MOV ECX,dword ptr [EBP + -0x4]
007db420  MOV EDX,dword ptr [ECX + 0xc]
007db423  AND EDX,0x40
007db426  JZ 0x007db430
007db428  OR EAX,0xffffffff
007db42b  JMP 0x007db5ac
007db430  MOV EAX,dword ptr [EBP + -0x4]
007db433  MOV ECX,dword ptr [EAX + 0xc]
007db436  AND ECX,0x2
007db439  JZ 0x007db452
007db43b  MOV EDX,dword ptr [EBP + -0x4]
007db43e  MOV EAX,dword ptr [EDX + 0xc]
007db441  OR EAX,0x20
007db444  MOV ECX,dword ptr [EBP + -0x4]
007db447  MOV dword ptr [ECX + 0xc],EAX
007db44a  OR EAX,0xffffffff
007db44d  JMP 0x007db5ac
007db452  MOV EDX,dword ptr [EBP + -0x4]
007db455  MOV EAX,dword ptr [EDX + 0xc]
007db458  OR EAX,0x1
007db45b  MOV ECX,dword ptr [EBP + -0x4]
007db45e  MOV dword ptr [ECX + 0xc],EAX
007db461  MOV EDX,dword ptr [EBP + -0x4]
007db464  MOV EAX,dword ptr [EDX + 0xc]
007db467  AND EAX,0x10c
007db46c  JNZ 0x007db47c
007db46e  MOV ECX,dword ptr [EBP + -0x4]
007db471  PUSH ECX
007db472  CALL 0x007dbb00
007db477  ADD ESP,0x4
007db47a  JMP 0x007db487
007db47c  MOV EDX,dword ptr [EBP + -0x4]
007db47f  MOV EAX,dword ptr [EBP + -0x4]
007db482  MOV ECX,dword ptr [EAX + 0x8]
007db485  MOV dword ptr [EDX],ECX
007db487  MOV EDX,dword ptr [EBP + -0x4]
007db48a  MOV EAX,dword ptr [EDX + 0x18]
007db48d  PUSH EAX
007db48e  MOV ECX,dword ptr [EBP + -0x4]
007db491  MOV EDX,dword ptr [ECX + 0x8]
007db494  PUSH EDX
007db495  MOV EAX,dword ptr [EBP + -0x4]
007db498  MOV ECX,dword ptr [EAX + 0x10]
007db49b  PUSH ECX
007db49c  CALL 0x007db5b0
007db4a1  ADD ESP,0xc
007db4a4  MOV EDX,dword ptr [EBP + -0x4]
007db4a7  MOV dword ptr [EDX + 0x4],EAX
007db4aa  MOV EAX,dword ptr [EBP + -0x4]
007db4ad  CMP dword ptr [EAX + 0x4],0x0
007db4b1  JZ 0x007db4bc
007db4b3  MOV ECX,dword ptr [EBP + -0x4]
007db4b6  CMP dword ptr [ECX + 0x4],-0x1
007db4ba  JNZ 0x007db4ea
007db4bc  MOV EDX,dword ptr [EBP + -0x4]
007db4bf  MOV EAX,dword ptr [EDX + 0x4]
007db4c2  NEG EAX
007db4c4  SBB EAX,EAX
007db4c6  AND EAX,0x10
007db4c9  ADD EAX,0x10
007db4cc  MOV ECX,dword ptr [EBP + -0x4]
007db4cf  OR EAX,dword ptr [ECX + 0xc]
007db4d2  MOV EDX,dword ptr [EBP + -0x4]
007db4d5  MOV dword ptr [EDX + 0xc],EAX
007db4d8  MOV EAX,dword ptr [EBP + -0x4]
007db4db  MOV dword ptr [EAX + 0x4],0x0
007db4e2  OR EAX,0xffffffff
007db4e5  JMP 0x007db5ac
007db4ea  MOV ECX,dword ptr [EBP + -0x4]
007db4ed  MOV EDX,dword ptr [ECX + 0xc]
007db4f0  AND EDX,0x82
007db4f6  JNZ 0x007db54e
007db4f8  MOV EAX,dword ptr [EBP + -0x4]
007db4fb  CMP dword ptr [EAX + 0x10],-0x1
007db4ff  JZ 0x007db522
007db501  MOV ECX,dword ptr [EBP + -0x4]
007db504  MOV EDX,dword ptr [ECX + 0x10]
007db507  SAR EDX,0x5
007db50a  MOV EAX,dword ptr [EBP + -0x4]
007db50d  MOV ECX,dword ptr [EAX + 0x10]
007db510  AND ECX,0x1f
007db513  IMUL ECX,ECX,0x24
007db516  ADD ECX,dword ptr [EDX*0x4 + 0x9c5340]
007db51d  MOV dword ptr [EBP + -0x8],ECX
007db520  JMP 0x007db529
007db522  MOV dword ptr [EBP + -0x8],0x906808
007db529  MOV EDX,dword ptr [EBP + -0x8]
007db52c  MOVSX EAX,byte ptr [EDX + 0x4]
007db530  AND EAX,0x82
007db535  CMP EAX,0x82
007db53a  JNZ 0x007db54e
007db53c  MOV ECX,dword ptr [EBP + -0x4]
007db53f  MOV EDX,dword ptr [ECX + 0xc]
007db542  OR EDX,0x2000
007db548  MOV EAX,dword ptr [EBP + -0x4]
007db54b  MOV dword ptr [EAX + 0xc],EDX
007db54e  MOV ECX,dword ptr [EBP + -0x4]
007db551  CMP dword ptr [ECX + 0x18],0x200
007db558  JNZ 0x007db57d
007db55a  MOV EDX,dword ptr [EBP + -0x4]
007db55d  MOV EAX,dword ptr [EDX + 0xc]
007db560  AND EAX,0x8
007db563  JZ 0x007db57d
007db565  MOV ECX,dword ptr [EBP + -0x4]
007db568  MOV EDX,dword ptr [ECX + 0xc]
007db56b  AND EDX,0x400
007db571  JNZ 0x007db57d
007db573  MOV EAX,dword ptr [EBP + -0x4]
007db576  MOV dword ptr [EAX + 0x18],0x1000
007db57d  MOV ECX,dword ptr [EBP + -0x4]
007db580  MOV EDX,dword ptr [ECX + 0x4]
007db583  SUB EDX,0x1
007db586  MOV EAX,dword ptr [EBP + -0x4]
007db589  MOV dword ptr [EAX + 0x4],EDX
007db58c  MOV ECX,dword ptr [EBP + -0x4]
007db58f  MOV EDX,dword ptr [ECX]
007db591  MOVSX EAX,byte ptr [EDX]
007db594  AND EAX,0xff
007db599  MOV dword ptr [EBP + -0xc],EAX
007db59c  MOV ECX,dword ptr [EBP + -0x4]
007db59f  MOV EDX,dword ptr [ECX]
007db5a1  ADD EDX,0x1
007db5a4  MOV EAX,dword ptr [EBP + -0x4]
007db5a7  MOV dword ptr [EAX],EDX
007db5a9  MOV EAX,dword ptr [EBP + -0xc]
007db5ac  MOV ESP,EBP
007db5ae  POP EBP
007db5af  RET
