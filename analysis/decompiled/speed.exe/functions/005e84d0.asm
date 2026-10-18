005e84d0  XOR EAX,EAX
005e84d2  MOV dword ptr [ECX],EAX
005e84d4  MOV dword ptr [ECX + 0x4],EAX
005e84d7  MOV dword ptr [ECX + 0x8],EAX
005e84da  MOV dword ptr [ECX + 0x17c],EAX
005e84e0  MOV dword ptr [ECX + 0x18c],EAX
005e84e6  MOV dword ptr [ECX + 0xc],0xffffffff
005e84ed  MOV EDX,dword ptr [0x008a2fb4]
005e84f3  LEA EAX,[ECX + 0x170]
005e84f9  MOV dword ptr [EAX],EDX
005e84fb  MOV EDX,dword ptr [0x008a2fb8]
005e8501  MOV dword ptr [EAX + 0x4],EDX
005e8504  MOV EDX,dword ptr [0x008a2fbc]
005e850a  MOV dword ptr [EAX + 0x8],EDX
005e850d  MOV EDX,dword ptr [0x008a2fb4]
005e8513  LEA EAX,[ECX + 0x180]
005e8519  MOV dword ptr [EAX],EDX
005e851b  MOV EDX,dword ptr [0x008a2fb8]
005e8521  MOV dword ptr [EAX + 0x4],EDX
005e8524  MOV EDX,dword ptr [0x008a2fbc]
005e852a  MOV dword ptr [EAX + 0x8],EDX
005e852d  JMP 0x005e8300
