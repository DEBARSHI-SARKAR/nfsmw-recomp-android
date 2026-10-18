007bfc50  PUSH ECX
007bfc51  PUSH EBX
007bfc52  PUSH EBP
007bfc53  PUSH ESI
007bfc54  PUSH EDI
007bfc55  MOV EDI,ECX
007bfc57  CALL 0x00575b00
007bfc5c  MOV BL,AL
007bfc5e  NEG BL
007bfc60  SBB BL,BL
007bfc62  INC BL
007bfc64  MOV byte ptr [ESP + 0x10],BL
007bfc68  MOV ESI,dword ptr [ESP + 0x10]
007bfc6c  PUSH ESI
007bfc6d  CALL 0x00575b10
007bfc72  ADD ESP,0x4
007bfc75  PUSH ESI
007bfc76  MOV ECX,EDI
007bfc78  CALL 0x007a66d0
007bfc7d  MOV EAX,dword ptr [EDI + 0x38]
007bfc80  TEST EAX,EAX
007bfc82  LEA ESI,[EDI + 0x2c]
007bfc85  JZ 0x007bfc93
007bfc87  MOV EDX,dword ptr [ESI]
007bfc89  PUSH EAX
007bfc8a  MOV ECX,ESI
007bfc8c  CALL dword ptr [EDX + 0x24]
007bfc8f  MOV EBP,EAX
007bfc91  JMP 0x007bfc95
007bfc93  XOR EBP,EBP
007bfc95  TEST BL,BL
007bfc97  PUSH 0x0
007bfc99  JZ 0x007bfcb3
007bfc9b  MOV EAX,dword ptr [EDI + 0x10]
007bfc9e  MOV ECX,dword ptr [0x0091cadc]
007bfca4  PUSH EAX
007bfca5  PUSH 0xa1caff8d
007bfcaa  CALL 0x00516c90
007bfcaf  PUSH 0x4
007bfcb1  JMP 0x007bfcc9
007bfcb3  MOV ECX,dword ptr [EDI + 0x10]
007bfcb6  PUSH ECX
007bfcb7  MOV ECX,dword ptr [0x0091cadc]
007bfcbd  PUSH 0x5c01c5
007bfcc2  CALL 0x00516c90
007bfcc7  PUSH 0x3
007bfcc9  CALL 0x00516e10
007bfcce  MOV ECX,EAX
007bfcd0  CALL 0x00516e30
007bfcd5  MOV ECX,EDI
007bfcd7  CALL 0x007a65c0
007bfcdc  MOV EDX,dword ptr [ESI]
007bfcde  MOV ECX,ESI
007bfce0  CALL dword ptr [EDX + 0xc]
007bfce3  MOV EAX,dword ptr [ESI]
007bfce5  MOV ECX,ESI
007bfce7  CALL dword ptr [EAX + 0x3c]
007bfcea  MOV ECX,EDI
007bfcec  CALL 0x007bcdb0
007bfcf1  MOV AL,byte ptr [EDI + 0x129]
007bfcf7  TEST AL,AL
007bfcf9  JZ 0x007bfd1a
007bfcfb  MOV byte ptr [ESI + 0xf0],0x0
007bfd02  MOV byte ptr [ESI + 0xed],0x1
007bfd09  MOV byte ptr [ESI + 0xee],0x0
007bfd10  MOV dword ptr [ESI + 0xe4],0x0
007bfd1a  MOV EDX,dword ptr [ESI]
007bfd1c  PUSH EBP
007bfd1d  MOV ECX,ESI
007bfd1f  CALL dword ptr [EDX + 0x40]
007bfd22  MOV EAX,dword ptr [EDI]
007bfd24  MOV ECX,EDI
007bfd26  POP EDI
007bfd27  POP ESI
007bfd28  POP EBP
007bfd29  POP EBX
007bfd2a  ADD ESP,0x4
007bfd2d  JMP dword ptr [EAX + 0xc]
