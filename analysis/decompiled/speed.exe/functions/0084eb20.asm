0084eb20  PUSH ESI
0084eb21  PUSH 0x21c
0084eb26  CALL 0x0078af30
0084eb2b  MOV ESI,EAX
0084eb2d  ADD ESP,0x4
0084eb30  XOR EAX,EAX
0084eb32  TEST ESI,ESI
0084eb34  JZ 0x0084ec2c
0084eb3a  PUSH EDI
0084eb3b  MOV ECX,0x87
0084eb40  MOV EDI,ESI
0084eb42  STOSD.REP ES:EDI
0084eb44  LEA EAX,[ESI + 0x1ec]
0084eb4a  PUSH EAX
0084eb4b  MOV dword ptr [ESI],0x84eb20
0084eb51  MOV dword ptr [ESI + 0x4],0x84e5b0
0084eb58  MOV dword ptr [ESI + 0x8],0x84e650
0084eb5f  MOV dword ptr [ESI + 0xc],0x84e660
0084eb66  MOV dword ptr [ESI + 0x10],0x84e910
0084eb6d  MOV dword ptr [ESI + 0x14],0x84e670
0084eb74  MOV dword ptr [ESI + 0x18],0x84ea50
0084eb7b  MOV dword ptr [ESI + 0x1c],0x84e6c0
0084eb82  MOV dword ptr [ESI + 0x20],0x84e630
0084eb89  MOV dword ptr [ESI + 0x24],0x84e710
0084eb90  MOV dword ptr [ESI + 0x28],0x84e750
0084eb97  MOV dword ptr [ESI + 0x2c],0x84e760
0084eb9e  MOV dword ptr [ESI + 0x30],0x84e860
0084eba5  MOV dword ptr [ESI + 0x34],0x84e8c0
0084ebac  MOV dword ptr [ESI + 0x4c],0x504354
0084ebb3  CALL 0x0084bcc0
0084ebb8  MOV EDI,dword ptr [ESP + 0x10]
0084ebbc  ADD EDI,0xb
0084ebbf  AND EDI,0x7ffc
0084ebc5  MOV EAX,EDI
0084ebc7  IMUL EAX,dword ptr [ESP + 0x14]
0084ebcc  PUSH EAX
0084ebcd  MOV dword ptr [ESI + 0xa0],EDI
0084ebd3  MOV dword ptr [ESI + 0xa4],EAX
0084ebd9  CALL 0x0078af30
0084ebde  MOV dword ptr [ESI + 0xbc],EDI
0084ebe4  IMUL EDI,dword ptr [ESP + 0x1c]
0084ebe9  PUSH EDI
0084ebea  MOV dword ptr [ESI + 0xb0],EAX
0084ebf0  MOV dword ptr [ESI + 0xc0],EDI
0084ebf6  CALL 0x0078af30
0084ebfb  ADD ESP,0xc
0084ebfe  MOV dword ptr [ESI + 0xcc],EAX
0084ec04  MOV dword ptr [ESI + 0x80],0x0
0084ec0e  MOV dword ptr [ESI + 0x48],0x0
0084ec15  MOV dword ptr [ESI + 0x94],0x1
0084ec1f  MOV dword ptr [ESI + 0x98],0x0
0084ec29  MOV EAX,ESI
0084ec2b  POP EDI
0084ec2c  POP ESI
0084ec2d  RET
