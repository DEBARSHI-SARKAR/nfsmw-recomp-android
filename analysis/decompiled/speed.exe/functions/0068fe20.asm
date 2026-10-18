0068fe20  PUSH ESI
0068fe21  MOV ESI,ECX
0068fe23  CALL 0x00671460
0068fe28  XOR EAX,EAX
0068fe2a  MOV ECX,0x3f800000
0068fe2f  MOV dword ptr [ESI + 0xd4],EAX
0068fe35  MOV dword ptr [ESI + 0xc8],EAX
0068fe3b  MOV dword ptr [ESI + 0xcc],EAX
0068fe41  MOV dword ptr [ESI + 0xd0],EAX
0068fe47  MOV dword ptr [ESI + 0xd8],EAX
0068fe4d  MOV dword ptr [ESI + 0xdc],EAX
0068fe53  MOV dword ptr [ESI + 0xe0],EAX
0068fe59  MOV dword ptr [ESI + 0xe4],ECX
0068fe5f  MOV dword ptr [ESI + 0xe8],EAX
0068fe65  MOV dword ptr [ESI + 0xec],EAX
0068fe6b  MOV dword ptr [ESI + 0xf4],EAX
0068fe71  MOV dword ptr [ESI + 0x108],ECX
0068fe77  MOV byte ptr [ESI + 0x10c],AL
0068fe7d  MOV byte ptr [ESI + 0x10d],AL
0068fe83  MOV dword ptr [ESI + 0x110],EAX
0068fe89  MOV dword ptr [ESI + 0x114],EAX
0068fe8f  MOV dword ptr [ESI + 0x118],0x3f000000
0068fe99  POP ESI
0068fe9a  RET
