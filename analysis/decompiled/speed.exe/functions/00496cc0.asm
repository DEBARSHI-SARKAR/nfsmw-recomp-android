00496cc0  PUSH ECX
00496cc1  MOVZX EAX,word ptr [ECX]
00496cc4  MOV dword ptr [ESP],EAX
00496cc7  MOV EAX,dword ptr [ESP + 0x8]
00496ccb  FILD dword ptr [ESP]
00496cce  FMUL float ptr [0x008957bc]
00496cd4  FSUB float ptr [0x0089096c]
00496cda  FSTP float ptr [EAX]
00496cdc  MOVZX EDX,word ptr [ECX + 0x2]
00496ce0  MOV dword ptr [ESP + 0x8],EDX
00496ce4  FILD dword ptr [ESP + 0x8]
00496ce8  FMUL float ptr [0x008957bc]
00496cee  FSUB float ptr [0x0089096c]
00496cf4  FSTP float ptr [EAX + 0x4]
00496cf7  MOVZX EDX,word ptr [ECX + 0x4]
00496cfb  MOV dword ptr [ESP + 0x8],EDX
00496cff  FILD dword ptr [ESP + 0x8]
00496d03  FMUL float ptr [0x008957bc]
00496d09  FSUB float ptr [0x0089096c]
00496d0f  FSTP float ptr [EAX + 0x8]
00496d12  MOVZX EDX,word ptr [ECX + 0x6]
00496d16  MOV dword ptr [ESP + 0x8],EDX
00496d1a  FILD dword ptr [ESP + 0x8]
00496d1e  FMUL float ptr [0x008957bc]
00496d24  FSUB float ptr [0x0089096c]
00496d2a  FSTP float ptr [EAX + 0xc]
00496d2d  MOVZX EDX,word ptr [ECX + 0x8]
00496d31  MOV dword ptr [ESP + 0x8],EDX
00496d35  FILD dword ptr [ESP + 0x8]
00496d39  FMUL float ptr [0x008957bc]
00496d3f  FSTP float ptr [EAX + 0x10]
00496d42  MOVZX EDX,word ptr [ECX + 0xa]
00496d46  MOV dword ptr [ESP + 0x8],EDX
00496d4a  FILD dword ptr [ESP + 0x8]
00496d4e  FMUL float ptr [0x008957bc]
00496d54  FSTP float ptr [EAX + 0x14]
00496d57  MOVZX EDX,word ptr [ECX + 0xc]
00496d5b  MOV dword ptr [ESP + 0x8],EDX
00496d5f  FILD dword ptr [ESP + 0x8]
00496d63  FMUL float ptr [0x008957bc]
00496d69  FSTP float ptr [EAX + 0x18]
00496d6c  MOVZX ECX,word ptr [ECX + 0xe]
00496d70  MOV dword ptr [ESP + 0x8],ECX
00496d74  FILD dword ptr [ESP + 0x8]
00496d78  FMUL float ptr [0x008957bc]
00496d7e  FSTP float ptr [EAX + 0x1c]
00496d81  POP ECX
00496d82  RET 0x4
