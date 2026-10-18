004dfaa0  PUSH EBX
004dfaa1  PUSH ESI
004dfaa2  MOV ESI,ECX
004dfaa4  MOV EAX,dword ptr [ESI + 0x10]
004dfaa7  TEST EAX,EAX
004dfaa9  PUSH EDI
004dfaaa  JZ 0x004dfab3
004dfaac  MOV dword ptr [EAX + 0x3c],0x1
004dfab3  MOV EAX,dword ptr [ESI + 0x144]
004dfab9  MOV [0x009121e8],EAX
004dfabe  MOV ECX,dword ptr [ESI + 0x144]
004dfac4  MOV EDX,dword ptr [ESI + 0x4c]
004dfac7  INC ECX
004dfac8  PUSH ECX
004dfac9  PUSH 0x896e94
004dface  PUSH EDX
004dfacf  CALL 0x00829640
004dfad4  MOV EAX,[0x008f86fc]
004dfad9  ADD ESP,0xc
004dfadc  TEST EAX,EAX
004dfade  JZ 0x004dfb75
004dfae4  TEST byte ptr [ESI + 0x114],0x8
004dfaeb  JNZ 0x004dfb3d
004dfaed  MOV EBX,dword ptr [ESI + 0x38]
004dfaf0  SUB ESP,0x10
004dfaf3  MOV EDI,ESP
004dfaf5  PUSH EBX
004dfaf6  CALL 0x004522f0
004dfafb  PUSH EBX
004dfafc  MOV dword ptr [EDI],EAX
004dfafe  MOV dword ptr [EDI + 0x4],EDX
004dfb01  CALL 0x004519d0
004dfb06  ADD ESP,0x8
004dfb09  MOV ECX,0x912270
004dfb0e  MOV dword ptr [EDI + 0x8],EAX
004dfb11  MOV dword ptr [EDI + 0xc],EBX
004dfb14  CALL 0x004af470
004dfb19  CMP EAX,-0x1
004dfb1c  JZ 0x004dfb3d
004dfb1e  IMUL EAX,EAX,0x68
004dfb21  MOV EAX,dword ptr [EAX + 0x912880]
004dfb27  PUSH 0x0
004dfb29  PUSH 0x0
004dfb2b  LEA ECX,[ESI + 0x28]
004dfb2e  PUSH ECX
004dfb2f  MOV ECX,dword ptr [ESI + 0x110]
004dfb35  MOV dword ptr [ESI + 0x44],EAX
004dfb38  CALL 0x004c62e0
004dfb3d  MOV EDX,dword ptr [0x00911fa8]
004dfb43  CMP dword ptr [EDX + 0x70],0x1
004dfb47  JZ 0x004dfb58
004dfb49  MOV EAX,dword ptr [ESI + 0x114]
004dfb4f  TEST AL,0x2
004dfb51  JNZ 0x004dfb58
004dfb53  AND EAX,0xfffffff7
004dfb56  JMP 0x004dfb62
004dfb58  MOV EAX,dword ptr [ESI + 0x114]
004dfb5e  TEST AL,0x2
004dfb60  JZ 0x004dfb6c
004dfb62  MOV dword ptr [ESI + 0x148],0x0
004dfb6c  OR EAX,0x4
004dfb6f  MOV dword ptr [ESI + 0x114],EAX
004dfb75  POP EDI
004dfb76  POP ESI
004dfb77  POP EBX
004dfb78  RET
