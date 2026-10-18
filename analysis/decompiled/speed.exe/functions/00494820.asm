00494820  PUSH ECX
00494821  MOVZX EAX,word ptr [ECX]
00494824  MOV dword ptr [ESP],EAX
00494827  MOV EAX,dword ptr [ESP + 0x8]
0049482b  FILD dword ptr [ESP]
0049482e  FMUL float ptr [0x008957bc]
00494834  FSUB float ptr [0x0089096c]
0049483a  FSTP float ptr [EAX]
0049483c  MOVZX EDX,word ptr [ECX + 0x2]
00494840  MOV dword ptr [ESP + 0x8],EDX
00494844  FILD dword ptr [ESP + 0x8]
00494848  FMUL float ptr [0x008957bc]
0049484e  FSUB float ptr [0x0089096c]
00494854  FSTP float ptr [EAX + 0x4]
00494857  MOVZX EDX,word ptr [ECX + 0x4]
0049485b  MOV dword ptr [ESP + 0x8],EDX
0049485f  FILD dword ptr [ESP + 0x8]
00494863  FMUL float ptr [0x008957bc]
00494869  FSUB float ptr [0x0089096c]
0049486f  FSTP float ptr [EAX + 0x8]
00494872  MOVZX EDX,word ptr [ECX + 0x6]
00494876  MOV dword ptr [ESP + 0x8],EDX
0049487a  FILD dword ptr [ESP + 0x8]
0049487e  FMUL float ptr [0x008957bc]
00494884  FSTP float ptr [EAX + 0xc]
00494887  MOVZX EDX,word ptr [ECX + 0x8]
0049488b  MOV dword ptr [ESP + 0x8],EDX
0049488f  FILD dword ptr [ESP + 0x8]
00494893  FMUL float ptr [0x008957bc]
00494899  FSTP float ptr [EAX + 0x10]
0049489c  MOVZX ECX,word ptr [ECX + 0xa]
004948a0  MOV dword ptr [ESP + 0x8],ECX
004948a4  FILD dword ptr [ESP + 0x8]
004948a8  FMUL float ptr [0x008957bc]
004948ae  FSTP float ptr [EAX + 0x14]
004948b1  POP ECX
004948b2  RET 0x4
