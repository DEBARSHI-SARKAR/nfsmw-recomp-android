0066bee0  MOV CL,byte ptr [ESP + 0x8]
0066bee4  XOR EAX,EAX
0066bee6  TEST CL,CL
0066bee8  MOV ECX,dword ptr [ESP + 0x4]
0066beec  MOV ECX,dword ptr [ECX + 0x8]
0066beef  SETZ AL
0066bef2  FLD float ptr [ECX + EAX*0x4 + 0x28]
0066bef6  FMUL float ptr [0x00890dc4]
0066befc  FMUL float ptr [ECX + EAX*0x4 + 0x40]
0066bf00  FMUL float ptr [0x00897188]
0066bf06  FLD float ptr [ECX + EAX*0x4 + 0x30]
0066bf0a  FMUL float ptr [0x008a9388]
0066bf10  FADDP
0066bf12  RET
