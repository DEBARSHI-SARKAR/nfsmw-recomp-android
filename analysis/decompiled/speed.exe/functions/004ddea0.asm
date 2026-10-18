004ddea0  PUSH -0x1
004ddea2  PUSH 0x86cc6b
004ddea7  MOV EAX,FS:[0x0]
004ddead  PUSH EAX
004ddeae  MOV dword ptr FS:[0x0],ESP
004ddeb5  PUSH ECX
004ddeb6  PUSH EBP
004ddeb7  PUSH EDI
004ddeb8  MOV EDI,ECX
004ddeba  MOV EAX,dword ptr [EDI + 0x28]
004ddebd  XOR EBP,EBP
004ddebf  CMP EAX,EBP
004ddec1  JNZ 0x004ddfbb
004ddec7  MOV ECX,dword ptr [0x00911fa8]
004ddecd  PUSH ESI
004ddece  PUSH EDI
004ddecf  CALL 0x004b8db0
004dded4  PUSH 0x28
004dded6  CALL 0x00831667
004ddedb  MOV ESI,EAX
004ddedd  ADD ESP,0x4
004ddee0  MOV dword ptr [ESP + 0xc],ESI
004ddee4  CMP ESI,EBP
004ddee6  MOV dword ptr [ESP + 0x18],EBP
004ddeea  JZ 0x004ddf5c
004ddeec  MOVZX EAX,byte ptr [EDI + 0x34]
004ddef0  CMP EAX,EBP
004ddef2  JGE 0x004ddef8
004ddef4  XOR EAX,EAX
004ddef6  JMP 0x004ddf02
004ddef8  CMP EAX,0xf
004ddefb  JLE 0x004ddf02
004ddefd  MOV EAX,0xf
004ddf02  PUSH EBX
004ddf03  LEA EBX,[ESI + 0x4]
004ddf06  PUSH ESI
004ddf07  PUSH EBX
004ddf08  PUSH 0x9148d4
004ddf0d  MOV dword ptr [EBX],EAX
004ddf0f  MOV dword ptr [ESI + 0x8],EBP
004ddf12  MOV dword ptr [ESI + 0xc],EBP
004ddf15  MOV dword ptr [ESI + 0x10],EBP
004ddf18  MOV dword ptr [ESI + 0x14],EBP
004ddf1b  MOV dword ptr [ESI + 0x18],0x61a8
004ddf22  MOV dword ptr [ESI + 0x1c],EBP
004ddf25  MOV dword ptr [ESI + 0x20],0x7fff
004ddf2c  MOV dword ptr [ESI + 0x24],EBP
004ddf2f  CALL 0x00831a8a
004ddf34  ADD ESP,0xc
004ddf37  CMP EAX,EBP
004ddf39  JGE 0x004ddf59
004ddf3b  PUSH 0x8f02a8
004ddf40  MOV ECX,0x9148d4
004ddf45  CALL 0x0083198b
004ddf4a  PUSH ESI
004ddf4b  PUSH EBX
004ddf4c  PUSH 0x9148d4
004ddf51  CALL 0x00831a8a
004ddf56  ADD ESP,0xc
004ddf59  POP EBX
004ddf5a  JMP 0x004ddf5e
004ddf5c  XOR ESI,ESI
004ddf5e  MOV dword ptr [EDI + 0x28],ESI
004ddf61  MOV ECX,dword ptr [ESI]
004ddf63  CMP ECX,EBP
004ddf65  MOV dword ptr [ESP + 0x18],0xffffffff
004ddf6d  MOV dword ptr [ESP + 0xc],EBP
004ddf71  POP ESI
004ddf72  JZ 0x004ddf7e
004ddf74  LEA EAX,[ESP + 0x8]
004ddf78  PUSH EAX
004ddf79  CALL 0x008311aa
004ddf7e  MOV ECX,dword ptr [ESP + 0x8]
004ddf82  MOV EAX,dword ptr [EDI + 0x14]
004ddf85  MOV dword ptr [EDI + 0x30],ECX
004ddf88  MOV EAX,dword ptr [EAX + 0x34]
004ddf8b  MOV ECX,dword ptr [EDI + 0x2c]
004ddf8e  MOV EDX,dword ptr [ECX]
004ddf90  ADD EAX,0x40
004ddf93  PUSH EAX
004ddf94  CALL dword ptr [EDX + 0x38]
004ddf97  MOV EAX,dword ptr [EDI + 0x14]
004ddf9a  MOV EAX,dword ptr [EAX + 0x34]
004ddf9d  MOV ECX,dword ptr [EDI + 0x2c]
004ddfa0  MOV EDX,dword ptr [ECX]
004ddfa2  ADD EAX,0x10
004ddfa5  PUSH EAX
004ddfa6  CALL dword ptr [EDX + 0x3c]
004ddfa9  MOV EAX,dword ptr [EDI + 0x14]
004ddfac  MOV EAX,dword ptr [EAX + 0x34]
004ddfaf  MOV ECX,dword ptr [EDI + 0x2c]
004ddfb2  MOV EDX,dword ptr [ECX]
004ddfb4  ADD EAX,0x50
004ddfb7  PUSH EAX
004ddfb8  CALL dword ptr [EDX + 0x40]
004ddfbb  MOV ECX,dword ptr [ESP + 0xc]
004ddfbf  POP EDI
004ddfc0  POP EBP
004ddfc1  MOV dword ptr FS:[0x0],ECX
004ddfc8  ADD ESP,0x10
004ddfcb  RET
