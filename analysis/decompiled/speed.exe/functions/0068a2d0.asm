0068a2d0  MOV EDX,dword ptr [0x008a2fb4]
0068a2d6  MOV EAX,ECX
0068a2d8  MOV dword ptr [ECX],EDX
0068a2da  MOV EDX,dword ptr [0x008a2fb8]
0068a2e0  MOV dword ptr [ECX + 0x4],EDX
0068a2e3  MOV EDX,dword ptr [0x008a2fbc]
0068a2e9  MOV dword ptr [ECX + 0x8],EDX
0068a2ec  PUSH ESI
0068a2ed  XOR ECX,ECX
0068a2ef  MOV dword ptr [EAX + 0xc],ECX
0068a2f2  MOV ESI,dword ptr [0x008a2fb4]
0068a2f8  LEA EDX,[EAX + 0x10]
0068a2fb  MOV dword ptr [EDX],ESI
0068a2fd  MOV ESI,dword ptr [0x008a2fb8]
0068a303  MOV dword ptr [EDX + 0x4],ESI
0068a306  MOV ESI,dword ptr [0x008a2fbc]
0068a30c  MOV dword ptr [EDX + 0x8],ESI
0068a30f  AND dword ptr [EAX + 0x1c],0xffffff00
0068a316  MOV ESI,dword ptr [0x008a2fb4]
0068a31c  LEA EDX,[EAX + 0x20]
0068a31f  MOV dword ptr [EDX],ESI
0068a321  MOV ESI,dword ptr [0x008a2fb8]
0068a327  MOV dword ptr [EDX + 0x4],ESI
0068a32a  MOV ESI,dword ptr [0x008a2fbc]
0068a330  MOV dword ptr [EDX + 0x8],ESI
0068a333  MOV dword ptr [EAX + 0x2c],ECX
0068a336  MOV ESI,dword ptr [0x008a2fb4]
0068a33c  LEA EDX,[EAX + 0x30]
0068a33f  MOV dword ptr [EDX],ESI
0068a341  MOV ESI,dword ptr [0x008a2fb8]
0068a347  MOV dword ptr [EDX + 0x4],ESI
0068a34a  MOV ESI,dword ptr [0x008a2fbc]
0068a350  MOV dword ptr [EDX + 0x8],ESI
0068a353  MOV dword ptr [EAX + 0x3c],ECX
0068a356  MOV ESI,dword ptr [0x008a2fb4]
0068a35c  LEA EDX,[EAX + 0x40]
0068a35f  MOV dword ptr [EDX],ESI
0068a361  MOV ESI,dword ptr [0x008a2fb8]
0068a367  MOV dword ptr [EDX + 0x4],ESI
0068a36a  MOV ESI,dword ptr [0x008a2fbc]
0068a370  MOV dword ptr [EDX + 0x8],ESI
0068a373  MOV dword ptr [EAX + 0x4c],ECX
0068a376  MOV ESI,dword ptr [0x008a2fb4]
0068a37c  LEA EDX,[EAX + 0x50]
0068a37f  MOV dword ptr [EDX],ESI
0068a381  MOV ESI,dword ptr [0x008a2fb8]
0068a387  MOV dword ptr [EDX + 0x4],ESI
0068a38a  MOV ESI,dword ptr [0x008a2fbc]
0068a390  MOV dword ptr [EDX + 0x8],ESI
0068a393  MOV dword ptr [EAX + 0x5c],ECX
0068a396  MOV ESI,dword ptr [0x008a2fb4]
0068a39c  LEA EDX,[EAX + 0x60]
0068a39f  MOV dword ptr [EDX],ESI
0068a3a1  MOV ESI,dword ptr [0x008a2fb8]
0068a3a7  MOV dword ptr [EDX + 0x4],ESI
0068a3aa  MOV ESI,dword ptr [0x008a2fbc]
0068a3b0  MOV dword ptr [EDX + 0x8],ESI
0068a3b3  MOV dword ptr [EAX + 0x6c],ECX
0068a3b6  MOV ESI,dword ptr [0x008a2fb4]
0068a3bc  LEA EDX,[EAX + 0x70]
0068a3bf  MOV dword ptr [EDX],ESI
0068a3c1  MOV ESI,dword ptr [0x008a2fb8]
0068a3c7  MOV dword ptr [EDX + 0x4],ESI
0068a3ca  MOV ESI,dword ptr [0x008a2fbc]
0068a3d0  MOV dword ptr [EDX + 0x8],ESI
0068a3d3  MOV dword ptr [EAX + 0x7c],ECX
0068a3d6  POP ESI
0068a3d7  RET
