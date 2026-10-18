004cea30  PUSH -0x1
004cea32  PUSH 0x86c6e8
004cea37  MOV EAX,FS:[0x0]
004cea3d  PUSH EAX
004cea3e  MOV dword ptr FS:[0x0],ESP
004cea45  SUB ESP,0x2c
004cea48  PUSH EBP
004cea49  PUSH EDI
004cea4a  XOR EDI,EDI
004cea4c  MOV EBP,ECX
004cea4e  MOV dword ptr [ESP + 0x10],0xffffffff
004cea56  MOV dword ptr [ESP + 0x14],EDI
004cea5a  MOV dword ptr [ESP + 0x18],EDI
004cea5e  MOV dword ptr [ESP + 0x1c],EDI
004cea62  MOV byte ptr [ESP + 0x2c],0x0
004cea67  MOV dword ptr [ESP + 0x30],EDI
004cea6b  MOV dword ptr [ESP + 0x24],EDI
004cea6f  MOV dword ptr [ESP + 0x20],EDI
004cea73  MOV dword ptr [ESP + 0x28],EDI
004cea77  CMP dword ptr [ESP + 0x48],EDI
004cea7b  MOV dword ptr [ESP + 0x3c],EDI
004cea7f  MOV dword ptr [ESP + 0xc],EDI
004cea83  JLE 0x004ceb69
004cea89  PUSH EBX
004cea8a  PUSH ESI
004cea8b  LEA EBX,[EBP + 0xa4]
004cea91  JMP 0x004ceaa0
004cea93  XOR EDI,EDI
004cea95  JMP 0x004ceaa0
004ceaa0  MOV EDX,dword ptr [0x008ee558]
004ceaa6  MOV AL,byte ptr [ESP + 0x14]
004ceaaa  MOV ECX,dword ptr [ESP + 0x4c]
004ceaae  PUSH EDX
004ceaaf  MOV byte ptr [ESP + 0x17],0x0
004ceab4  MOV byte ptr [ESP + 0x38],AL
004ceab8  MOV dword ptr [ESP + 0x1c],ECX
004ceabc  CALL 0x00464080
004ceac1  MOV ESI,dword ptr [ESP + 0x5c]
004ceac5  ADD ESP,0x4
004ceac8  CMP ESI,EAX
004ceaca  MOV EAX,[0x008ee558]
004ceacf  JG 0x004ceae5
004cead1  AND EAX,0xf
004cead4  ADD EAX,0x1000
004cead9  PUSH EAX
004ceada  PUSH ESI
004ceadb  CALL 0x00465a70
004ceae0  ADD ESP,0x8
004ceae3  JMP 0x004ceaff
004ceae5  PUSH 0x7fffffff
004ceaea  PUSH EDI
004ceaeb  PUSH EAX
004ceaec  CALL 0x00464a50
004ceaf1  PUSH 0x1000
004ceaf6  PUSH ESI
004ceaf7  CALL 0x00465a70
004ceafc  ADD ESP,0x14
004ceaff  MOV ECX,dword ptr [ESP + 0x54]
004ceb03  MOV EDX,dword ptr [EBP + 0xb0]
004ceb09  SUB EDX,ECX
004ceb0b  MOV dword ptr [EBP + 0xb0],EDX
004ceb11  MOV dword ptr [ESP + 0x2c],ECX
004ceb15  MOV dword ptr [ESP + 0x28],ESI
004ceb19  MOV ESI,dword ptr [EBX + 0x4]
004ceb1c  MOV dword ptr [ESP + 0x20],EAX
004ceb20  MOV dword ptr [ESP + 0x24],EAX
004ceb24  MOV EAX,EDX
004ceb26  MOV EDX,dword ptr [ESI + 0x4]
004ceb29  LEA ECX,[ESP + 0x18]
004ceb2d  PUSH ECX
004ceb2e  PUSH EDX
004ceb2f  PUSH ESI
004ceb30  MOV ECX,EBX
004ceb32  MOV dword ptr [ESP + 0x28],EAX
004ceb36  MOV dword ptr [ESP + 0x44],EDI
004ceb3a  CALL 0x004c6c60
004ceb3f  PUSH 0x1
004ceb41  MOV ECX,EBX
004ceb43  MOV EDI,EAX
004ceb45  CALL 0x004cd000
004ceb4a  MOV ECX,dword ptr [ESP + 0x50]
004ceb4e  MOV dword ptr [ESI + 0x4],EDI
004ceb51  MOV EAX,dword ptr [EDI + 0x4]
004ceb54  MOV dword ptr [EAX],EDI
004ceb56  MOV EAX,dword ptr [ESP + 0x14]
004ceb5a  INC EAX
004ceb5b  CMP EAX,ECX
004ceb5d  MOV dword ptr [ESP + 0x14],EAX
004ceb61  JL 0x004cea93
004ceb67  POP ESI
004ceb68  POP EBX
004ceb69  MOV ECX,dword ptr [ESP + 0x34]
004ceb6d  POP EDI
004ceb6e  POP EBP
004ceb6f  MOV dword ptr FS:[0x0],ECX
004ceb76  ADD ESP,0x38
004ceb79  RET 0x14
