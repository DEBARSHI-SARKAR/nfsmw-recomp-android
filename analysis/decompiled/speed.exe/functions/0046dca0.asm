0046dca0  PUSH ECX
0046dca1  MOV EAX,dword ptr [ECX + 0x1c]
0046dca4  MOVZX ECX,word ptr [EAX + 0x284]
0046dcab  MOVZX EDX,word ptr [EAX + 0xc4]
0046dcb2  MOV dword ptr [ESP],ECX
0046dcb5  MOV ECX,dword ptr [ESP + 0x8]
0046dcb9  FILD dword ptr [ESP]
0046dcbc  MOV dword ptr [ESP],EDX
0046dcbf  MOV EDX,0x2
0046dcc4  FILD dword ptr [ESP]
0046dcc7  FLD ST1
0046dcc9  FMUL float ptr [0x008934e0]
0046dccf  FADDP
0046dcd1  FXCH
0046dcd3  FMUL float ptr [ECX + 0x24]
0046dcd6  FSTP float ptr [ESP + 0x8]
0046dcda  FST float ptr [ECX]
0046dcdc  FLD float ptr [ECX + 0x8]
0046dcdf  FXCH
0046dce1  FUCOMPP
0046dce3  FNSTSW AX
0046dce5  TEST AH,0x44
0046dce8  JNP 0x0046dcee
0046dcea  MOV word ptr [ECX + 0x28],DX
0046dcee  FLD float ptr [ECX + 0xc]
0046dcf1  MOV EAX,dword ptr [ESP + 0x8]
0046dcf5  FLD float ptr [ESP + 0x8]
0046dcf9  MOV dword ptr [ECX + 0x4],EAX
0046dcfc  FUCOMPP
0046dcfe  FNSTSW AX
0046dd00  TEST AH,0x44
0046dd03  JNP 0x0046dd09
0046dd05  MOV word ptr [ECX + 0x28],DX
0046dd09  POP ECX
0046dd0a  RET 0x4
