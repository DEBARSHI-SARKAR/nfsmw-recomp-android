005be800  SUB ESP,0x104
005be806  PUSH EBX
005be807  PUSH EBP
005be808  PUSH ESI
005be809  MOV ESI,ECX
005be80b  MOV ECX,dword ptr [ESI + 0x108]
005be811  MOV EAX,dword ptr [ECX]
005be813  PUSH EDI
005be814  LEA EDX,[ESP + 0x54]
005be818  PUSH EDX
005be819  MOV dword ptr [ESP + 0x18],0x3f800000
005be821  MOV dword ptr [ESP + 0x1c],0x0
005be829  MOV dword ptr [ESP + 0x20],0x0
005be831  MOV dword ptr [ESP + 0x24],0x0
005be839  MOV dword ptr [ESP + 0x28],0x0
005be841  MOV dword ptr [ESP + 0x2c],0x3f800000
005be849  MOV dword ptr [ESP + 0x30],0x0
005be851  MOV dword ptr [ESP + 0x34],0x0
005be859  MOV dword ptr [ESP + 0x38],0x0
005be861  MOV dword ptr [ESP + 0x3c],0x0
005be869  MOV dword ptr [ESP + 0x40],0x3f800000
005be871  MOV dword ptr [ESP + 0x44],0x0
005be879  MOV dword ptr [ESP + 0x48],0x0
005be881  MOV dword ptr [ESP + 0x4c],0x0
005be889  MOV dword ptr [ESP + 0x50],0x0
005be891  MOV dword ptr [ESP + 0x54],0x3f800000
005be899  CALL dword ptr [EAX + 0x3c]
005be89c  MOV EAX,dword ptr [ESI + 0xe0]
005be8a2  XOR EBP,EBP
005be8a4  XOR EDX,EDX
005be8a6  CMP EAX,EBP
005be8a8  MOV dword ptr [ESP + 0x10],EDX
005be8ac  JZ 0x005be8c3
005be8ae  MOV EDI,EDI
005be8b0  MOV dword ptr [ESP + EDX*0x4 + 0x94],EAX
005be8b7  MOV EAX,dword ptr [EAX + 0x4]
005be8ba  INC EDX
005be8bb  CMP EAX,EBP
005be8bd  JNZ 0x005be8b0
005be8bf  MOV dword ptr [ESP + 0x10],EDX
005be8c3  XOR EDI,EDI
005be8c5  CMP EDX,EBP
005be8c7  JLE 0x005be943
005be8c9  MOV EBX,0xabadcafe
005be8ce  MOV EDI,EDI
005be8d0  MOV EDX,dword ptr [ESI + 0xe0]
005be8d6  MOV EAX,dword ptr [ESP + EDI*0x4 + 0x94]
005be8dd  MOV ECX,EDX
005be8df  CMP ECX,EBP
005be8e1  JZ 0x005be938
005be8e3  CMP ECX,EAX
005be8e5  JZ 0x005be8f0
005be8e7  MOV ECX,dword ptr [ECX + 0x4]
005be8ea  CMP ECX,EBP
005be8ec  JNZ 0x005be8e3
005be8ee  JMP 0x005be938
005be8f0  CMP EAX,EBP
005be8f2  JZ 0x005be938
005be8f4  CMP EAX,EDX
005be8f6  JNZ 0x005be901
005be8f8  MOV ECX,dword ptr [EAX + 0x4]
005be8fb  MOV dword ptr [ESI + 0xe0],ECX
005be901  CMP EAX,dword ptr [ESI + 0xe4]
005be907  JNZ 0x005be912
005be909  MOV EDX,dword ptr [EAX + 0x8]
005be90c  MOV dword ptr [ESI + 0xe4],EDX
005be912  MOV ECX,dword ptr [EAX + 0x8]
005be915  CMP ECX,EBP
005be917  JZ 0x005be91f
005be919  MOV EDX,dword ptr [EAX + 0x4]
005be91c  MOV dword ptr [ECX + 0x4],EDX
005be91f  MOV ECX,dword ptr [EAX + 0x4]
005be922  CMP ECX,EBP
005be924  JZ 0x005be92c
005be926  MOV EDX,dword ptr [EAX + 0x8]
005be929  MOV dword ptr [ECX + 0x8],EDX
005be92c  MOV dword ptr [EAX + 0x4],EBX
005be92f  MOV dword ptr [EAX + 0x8],EBX
005be932  DEC dword ptr [ESI + 0xdc]
005be938  MOV EAX,dword ptr [ESP + 0x10]
005be93c  INC EDI
005be93d  CMP EDI,EAX
005be93f  JL 0x005be8d0
005be941  MOV EDX,EAX
005be943  XOR EDI,EDI
005be945  CMP EDX,EBP
005be947  JLE 0x005be9ce
005be94d  LEA ECX,[ECX]
005be950  MOV EAX,dword ptr [ESI + 0xe4]
005be956  CMP EAX,EBP
005be958  MOV ECX,dword ptr [ESP + EDI*0x4 + 0x94]
005be95f  JZ 0x005be974
005be961  MOV EDX,dword ptr [ECX + 0x1c]
005be964  CMP dword ptr [EAX + 0x1c],EDX
005be967  JLE 0x005be970
005be969  MOV EAX,dword ptr [EAX + 0x8]
005be96c  CMP EAX,EBP
005be96e  JNZ 0x005be964
005be970  MOV EDX,dword ptr [ESP + 0x10]
005be974  CMP ECX,EBP
005be976  JZ 0x005be9c9
005be978  CMP EAX,EBP
005be97a  JZ 0x005be991
005be97c  MOV EDX,dword ptr [EAX + 0x4]
005be97f  CMP EDX,EBP
005be981  MOV dword ptr [ECX + 0x4],EDX
005be984  JZ 0x005be989
005be986  MOV dword ptr [EDX + 0x8],ECX
005be989  MOV dword ptr [ECX + 0x8],EAX
005be98c  MOV dword ptr [EAX + 0x4],ECX
005be98f  JMP 0x005be9aa
005be991  MOV EDX,dword ptr [ESI + 0xe0]
005be997  CMP EDX,EBP
005be999  MOV dword ptr [ECX + 0x4],EDX
005be99c  JZ 0x005be9a1
005be99e  MOV dword ptr [EDX + 0x8],ECX
005be9a1  MOV dword ptr [ECX + 0x8],EBP
005be9a4  MOV dword ptr [ESI + 0xe0],ECX
005be9aa  CMP dword ptr [ESI + 0xe4],EAX
005be9b0  JNZ 0x005be9b8
005be9b2  MOV dword ptr [ESI + 0xe4],ECX
005be9b8  MOV EAX,dword ptr [ESI + 0xdc]
005be9be  MOV EDX,dword ptr [ESP + 0x10]
005be9c2  INC EAX
005be9c3  MOV dword ptr [ESI + 0xdc],EAX
005be9c9  INC EDI
005be9ca  CMP EDI,EDX
005be9cc  JL 0x005be950
005be9ce  MOV EBX,dword ptr [ESI + 0xe0]
005be9d4  CMP EBX,EBP
005be9d6  MOV word ptr [ESI + 0xd4],BP
005be9dd  JZ 0x005bea83
005be9e3  LEA EBP,[ESI + 0x10c]
005be9e9  LEA ESP,[ESP]
005be9f0  MOV ECX,dword ptr [ESI + 0x108]
005be9f6  MOV EAX,dword ptr [ECX]
005be9f8  PUSH EBX
005be9f9  CALL dword ptr [EAX + 0x20]
005be9fc  MOV dword ptr [EBP],0x0
005bea03  MOV EDI,dword ptr [EBX + 0x4c]
005bea06  TEST EDI,EDI
005bea08  JZ 0x005bea40
005bea0a  LEA EBX,[EBX]
005bea10  CMP dword ptr [EDI + 0x18],0x5
005bea14  PUSH 0x0
005bea16  JNZ 0x005bea2c
005bea18  LEA ECX,[ESP + 0x58]
005bea1c  PUSH ECX
005bea1d  LEA EDX,[ESP + 0x1c]
005bea21  PUSH EDX
005bea22  PUSH EDI
005bea23  MOV ECX,ESI
005bea25  CALL 0x005bb9c0
005bea2a  JMP 0x005bea39
005bea2c  LEA EAX,[ESP + 0x58]
005bea30  PUSH EAX
005bea31  PUSH EDI
005bea32  MOV ECX,ESI
005bea34  CALL 0x005b7690
005bea39  MOV EDI,dword ptr [EDI + 0x4]
005bea3c  TEST EDI,EDI
005bea3e  JNZ 0x005bea10
005bea40  MOV ECX,EBP
005bea42  CALL 0x005b3850
005bea47  MOV EAX,dword ptr [EBP]
005bea4a  MOV ECX,dword ptr [ESI + 0x108]
005bea50  MOV EDX,dword ptr [ECX]
005bea52  PUSH EAX
005bea53  LEA EAX,[ESI + 0x110]
005bea59  PUSH EAX
005bea5a  CALL dword ptr [EDX + 0x30]
005bea5d  MOV ECX,dword ptr [ESI + 0x108]
005bea63  MOV EDX,dword ptr [ECX]
005bea65  PUSH EBX
005bea66  CALL dword ptr [EDX + 0x24]
005bea69  MOV EBX,dword ptr [EBX + 0x4]
005bea6c  TEST EBX,EBX
005bea6e  JNZ 0x005be9f0
005bea70  MOV AL,byte ptr [ESI]
005bea72  POP EDI
005bea73  MOV byte ptr [ESI + 0x524d],AL
005bea79  POP ESI
005bea7a  POP EBP
005bea7b  POP EBX
005bea7c  ADD ESP,0x104
005bea82  RET
005bea83  MOV CL,byte ptr [ESI]
005bea85  POP EDI
005bea86  MOV byte ptr [ESI + 0x524d],CL
005bea8c  POP ESI
005bea8d  POP EBP
005bea8e  POP EBX
005bea8f  ADD ESP,0x104
005bea95  RET
