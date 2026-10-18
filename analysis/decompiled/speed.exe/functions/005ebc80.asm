005ebc80  MOV EAX,FS:[0x0]
005ebc86  PUSH -0x1
005ebc88  PUSH 0x87553f
005ebc8d  PUSH EAX
005ebc8e  MOV EAX,[0x0091e000]
005ebc93  MOV dword ptr FS:[0x0],ESP
005ebc9a  SUB ESP,0x8
005ebc9d  TEST EAX,EAX
005ebc9f  PUSH EBP
005ebca0  MOV EBP,ECX
005ebca2  JZ 0x005ebcc8
005ebca4  MOV ECX,dword ptr [EAX + 0x1960]
005ebcaa  TEST ECX,ECX
005ebcac  JNZ 0x005ebcc8
005ebcae  MOV AL,byte ptr [EBP + 0x2b4]
005ebcb4  TEST AL,AL
005ebcb6  JNZ 0x005ebcc8
005ebcb8  MOV EAX,dword ptr [ESP + 0x1c]
005ebcbc  PUSH EAX
005ebcbd  MOV ECX,EBP
005ebcbf  CALL 0x005dd930
005ebcc4  TEST EAX,EAX
005ebcc6  JNZ 0x005ebcdc
005ebcc8  XOR AL,AL
005ebcca  POP EBP
005ebccb  MOV ECX,dword ptr [ESP + 0x8]
005ebccf  MOV dword ptr FS:[0x0],ECX
005ebcd6  ADD ESP,0x14
005ebcd9  RET 0x8
005ebcdc  PUSH ESI
005ebcdd  PUSH EDI
005ebcde  LEA EDI,[EAX + 0x28]
005ebce1  ADD EAX,0x34
005ebce4  PUSH 0xc
005ebce6  MOV dword ptr [ESP + 0x10],EAX
005ebcea  CALL 0x00627400
005ebcef  ADD ESP,0x4
005ebcf2  MOV dword ptr [ESP + 0x10],EAX
005ebcf6  TEST EAX,EAX
005ebcf8  MOV dword ptr [ESP + 0x1c],0x0
005ebd00  JZ 0x005ebd0b
005ebd02  PUSH 0x0
005ebd04  MOV ECX,EAX
005ebd06  CALL 0x0062c9a0
005ebd0b  PUSH 0x0
005ebd0d  PUSH EDI
005ebd0e  MOV dword ptr [ESP + 0x24],0xffffffff
005ebd16  MOV byte ptr [0x009aac81],0x0
005ebd1d  CALL 0x006f1170
005ebd22  PUSH 0x1
005ebd24  CALL 0x00425200
005ebd29  MOV EDX,dword ptr [EAX]
005ebd2b  ADD ESP,0xc
005ebd2e  MOV ECX,EAX
005ebd30  CALL dword ptr [EDX + 0x4]
005ebd33  MOV ECX,dword ptr [EAX + 0x4]
005ebd36  PUSH 0x4040e0
005ebd3b  CALL 0x005d59f0
005ebd40  MOV ESI,EAX
005ebd42  TEST ESI,ESI
005ebd44  JZ 0x005ebd5d
005ebd46  MOV ECX,dword ptr [ESP + 0xc]
005ebd4a  MOV EAX,dword ptr [ESI]
005ebd4c  PUSH ECX
005ebd4d  PUSH EDI
005ebd4e  MOV ECX,ESI
005ebd50  CALL dword ptr [EAX + 0x68]
005ebd53  MOV EDX,dword ptr [ESI]
005ebd55  MOV ECX,ESI
005ebd57  CALL dword ptr [EDX + 0x84]
005ebd5d  MOV CL,byte ptr [ESP + 0x28]
005ebd61  MOV EAX,dword ptr [ESP + 0x24]
005ebd65  MOV byte ptr [EBP + 0x2b5],CL
005ebd6b  MOV ECX,dword ptr [ESP + 0x14]
005ebd6f  POP EDI
005ebd70  MOV dword ptr [EBP + 0x2b8],EAX
005ebd76  MOV byte ptr [EBP + 0x2b4],0x1
005ebd7d  POP ESI
005ebd7e  MOV AL,0x1
005ebd80  POP EBP
005ebd81  MOV dword ptr FS:[0x0],ECX
005ebd88  ADD ESP,0x14
005ebd8b  RET 0x8
