004b3560  PUSH -0x1
004b3562  PUSH 0x86b4c8
004b3567  MOV EAX,FS:[0x0]
004b356d  PUSH EAX
004b356e  MOV dword ptr FS:[0x0],ESP
004b3575  PUSH ECX
004b3576  PUSH EBX
004b3577  PUSH ESI
004b3578  MOV ESI,ECX
004b357a  PUSH EDI
004b357b  MOV dword ptr [ESP + 0xc],ESI
004b357f  CALL 0x004d61d0
004b3584  XOR EDI,EDI
004b3586  MOV dword ptr [ESI + 0x24],EDI
004b3589  MOV dword ptr [ESI],0x896b5c
004b358f  MOV dword ptr [ESI + 0x80],EDI
004b3595  MOV dword ptr [ESI + 0x6c],EDI
004b3598  MOV dword ptr [ESI + 0x74],EDI
004b359b  MOV dword ptr [ESI + 0x78],EDI
004b359e  MOV dword ptr [ESI + 0x70],EDI
004b35a1  MOV dword ptr [ESI + 0x7c],EDI
004b35a4  MOV BL,0x1
004b35a6  MOV byte ptr [ESI + 0x84],BL
004b35ac  MOV dword ptr [ESI + 0x9c],EDI
004b35b2  MOV dword ptr [ESI + 0x88],EDI
004b35b8  MOV dword ptr [ESI + 0x90],EDI
004b35be  MOV dword ptr [ESI + 0x94],EDI
004b35c4  MOV dword ptr [ESI + 0x8c],EDI
004b35ca  MOV dword ptr [ESI + 0x98],EDI
004b35d0  MOV byte ptr [ESI + 0xa0],BL
004b35d6  PUSH 0x7
004b35d8  LEA EAX,[ESI + 0xc8]
004b35de  PUSH EAX
004b35df  LEA ECX,[ESI + 0xc0]
004b35e5  MOV dword ptr [ESP + 0x20],EDI
004b35e9  MOV dword ptr [ESI + 0xb8],EDI
004b35ef  MOV dword ptr [ESI + 0xa4],EDI
004b35f5  MOV dword ptr [ESI + 0xac],EDI
004b35fb  MOV dword ptr [ESI + 0xb0],EDI
004b3601  MOV dword ptr [ESI + 0xa8],EDI
004b3607  MOV dword ptr [ESI + 0xb4],EDI
004b360d  MOV byte ptr [ESI + 0xbc],BL
004b3613  CALL 0x00653770
004b3618  MOV ECX,dword ptr [ESP + 0x10]
004b361c  MOV dword ptr [ESI + 0x108],EDI
004b3622  MOV dword ptr [ESI + 0x124],EDI
004b3628  MOV dword ptr [ESI + 0x110],EDI
004b362e  MOV dword ptr [ESI + 0x118],EDI
004b3634  MOV dword ptr [ESI + 0x11c],EDI
004b363a  MOV dword ptr [ESI + 0x114],EDI
004b3640  MOV dword ptr [ESI + 0x120],EDI
004b3646  MOV byte ptr [ESI + 0x128],BL
004b364c  MOV dword ptr [ESI + 0x140],EDI
004b3652  MOV dword ptr [ESI + 0x12c],EDI
004b3658  MOV dword ptr [ESI + 0x134],EDI
004b365e  MOV dword ptr [ESI + 0x138],EDI
004b3664  MOV dword ptr [ESI + 0x130],EDI
004b366a  MOV dword ptr [ESI + 0x13c],EDI
004b3670  MOV byte ptr [ESI + 0x144],BL
004b3676  MOV dword ptr [ESI + 0x160],EDI
004b367c  MOV dword ptr [ESI + 0x14c],EDI
004b3682  MOV dword ptr [ESI + 0x154],EDI
004b3688  MOV dword ptr [ESI + 0x158],EDI
004b368e  MOV dword ptr [ESI + 0x150],EDI
004b3694  MOV dword ptr [ESI + 0x15c],EDI
004b369a  MOV byte ptr [ESI + 0x164],BL
004b36a0  MOV dword ptr [ESI + 0x34],EDI
004b36a3  POP EDI
004b36a4  MOV EAX,ESI
004b36a6  POP ESI
004b36a7  POP EBX
004b36a8  MOV dword ptr FS:[0x0],ECX
004b36af  ADD ESP,0x10
004b36b2  RET
