006bea90  MOV ECX,dword ptr [0x00982ac0]
006bea96  PUSH ESI
006bea97  CALL 0x00465f70
006bea9c  MOV ESI,dword ptr [ESP + 0x10]
006beaa0  MOV ECX,dword ptr [ESP + 0x8]
006beaa4  MOV [0x00982ac4],EAX
006beaa9  XOR EAX,EAX
006beaab  MOV [0x00982ad0],EAX
006beab0  MOV [0x00982ad4],EAX
006beab5  MOV [0x00982ad8],EAX
006beaba  CMP ESI,EAX
006beabc  MOV dword ptr [0x00982acc],ECX
006beac2  MOV AL,0x1
006beac4  JZ 0x006bead6
006beac6  PUSH EDI
006beac7  MOV ECX,0x10
006beacc  MOV EDI,0x986ed0
006bead1  MOVSD.REP ES:EDI,ESI
006bead3  POP EDI
006bead4  POP ESI
006bead5  RET
006bead6  MOV dword ptr [0x00986ed0],0x3f800000
006beae0  MOV dword ptr [0x00986ed4],0x0
006beaea  MOV dword ptr [0x00986ed8],0x0
006beaf4  MOV dword ptr [0x00986edc],0x0
006beafe  MOV dword ptr [0x00986ee0],0x0
006beb08  MOV dword ptr [0x00986ee4],0x3f800000
006beb12  MOV dword ptr [0x00986ee8],0x0
006beb1c  MOV dword ptr [0x00986eec],0x0
006beb26  MOV dword ptr [0x00986ef0],0x0
006beb30  MOV dword ptr [0x00986ef4],0x0
006beb3a  MOV dword ptr [0x00986ef8],0x3f800000
006beb44  MOV dword ptr [0x00986efc],0x0
006beb4e  MOV dword ptr [0x00986f00],0x0
006beb58  MOV dword ptr [0x00986f04],0x0
006beb62  MOV dword ptr [0x00986f08],0x0
006beb6c  MOV dword ptr [0x00986f0c],0x3f800000
006beb76  POP ESI
006beb77  RET
