007e5ce0  PUSH EBP
007e5ce1  MOV EBP,ESP
007e5ce3  SUB ESP,0x8
007e5ce6  MOV EAX,dword ptr [EBP + 0x8]
007e5ce9  MOV ECX,dword ptr [EAX + 0x8]
007e5cec  AND ECX,0x1
007e5cef  NEG ECX
007e5cf1  SBB ECX,ECX
007e5cf3  AND ECX,0x80000000
007e5cf9  MOV dword ptr [EBP + -0x8],ECX
007e5cfc  MOV EDX,dword ptr [EBP + 0x8]
007e5cff  MOV EAX,dword ptr [EDX + 0x4]
007e5d02  AND EAX,0x1
007e5d05  NEG EAX
007e5d07  SBB EAX,EAX
007e5d09  AND EAX,0x80000000
007e5d0e  MOV dword ptr [EBP + -0x4],EAX
007e5d11  MOV ECX,dword ptr [EBP + 0x8]
007e5d14  MOV EDX,dword ptr [ECX + 0x8]
007e5d17  SHR EDX,0x1
007e5d19  MOV EAX,dword ptr [EBP + 0x8]
007e5d1c  MOV dword ptr [EAX + 0x8],EDX
007e5d1f  MOV ECX,dword ptr [EBP + 0x8]
007e5d22  MOV EDX,dword ptr [ECX + 0x4]
007e5d25  SHR EDX,0x1
007e5d27  OR EDX,dword ptr [EBP + -0x8]
007e5d2a  MOV EAX,dword ptr [EBP + 0x8]
007e5d2d  MOV dword ptr [EAX + 0x4],EDX
007e5d30  MOV ECX,dword ptr [EBP + 0x8]
007e5d33  MOV EDX,dword ptr [ECX]
007e5d35  SHR EDX,0x1
007e5d37  OR EDX,dword ptr [EBP + -0x4]
007e5d3a  MOV EAX,dword ptr [EBP + 0x8]
007e5d3d  MOV dword ptr [EAX],EDX
007e5d3f  MOV ESP,EBP
007e5d41  POP EBP
007e5d42  RET
