007d2ff0  PUSH EBP
007d2ff1  MOV EBP,ESP
007d2ff3  SUB ESP,0x8
007d2ff6  CALL 0x007cd100
007d2ffb  MOV dword ptr [EBP + -0x8],EAX
007d2ffe  MOV EAX,dword ptr [EBP + -0x8]
007d3001  MOV ECX,dword ptr [EAX + 0x64]
007d3004  MOV dword ptr [EBP + -0x4],ECX
007d3007  MOV EDX,dword ptr [EBP + -0x4]
007d300a  CMP EDX,dword ptr [0x00906b3c]
007d3010  JZ 0x007d31ad
007d3016  CMP dword ptr [EBP + -0x4],0x0
007d301a  JZ 0x007d30b8
007d3020  MOV EAX,dword ptr [EBP + -0x4]
007d3023  MOV ECX,dword ptr [EAX]
007d3025  SUB ECX,0x1
007d3028  MOV EDX,dword ptr [EBP + -0x4]
007d302b  MOV dword ptr [EDX],ECX
007d302d  MOV EAX,dword ptr [EBP + -0x4]
007d3030  CMP dword ptr [EAX + 0x2c],0x0
007d3034  JZ 0x007d3049
007d3036  MOV ECX,dword ptr [EBP + -0x4]
007d3039  MOV EDX,dword ptr [ECX + 0x2c]
007d303c  MOV EAX,dword ptr [EDX]
007d303e  SUB EAX,0x1
007d3041  MOV ECX,dword ptr [EBP + -0x4]
007d3044  MOV EDX,dword ptr [ECX + 0x2c]
007d3047  MOV dword ptr [EDX],EAX
007d3049  MOV EAX,dword ptr [EBP + -0x4]
007d304c  CMP dword ptr [EAX + 0x34],0x0
007d3050  JZ 0x007d3065
007d3052  MOV ECX,dword ptr [EBP + -0x4]
007d3055  MOV EDX,dword ptr [ECX + 0x34]
007d3058  MOV EAX,dword ptr [EDX]
007d305a  SUB EAX,0x1
007d305d  MOV ECX,dword ptr [EBP + -0x4]
007d3060  MOV EDX,dword ptr [ECX + 0x34]
007d3063  MOV dword ptr [EDX],EAX
007d3065  MOV EAX,dword ptr [EBP + -0x4]
007d3068  CMP dword ptr [EAX + 0x30],0x0
007d306c  JZ 0x007d3081
007d306e  MOV ECX,dword ptr [EBP + -0x4]
007d3071  MOV EDX,dword ptr [ECX + 0x30]
007d3074  MOV EAX,dword ptr [EDX]
007d3076  SUB EAX,0x1
007d3079  MOV ECX,dword ptr [EBP + -0x4]
007d307c  MOV EDX,dword ptr [ECX + 0x30]
007d307f  MOV dword ptr [EDX],EAX
007d3081  MOV EAX,dword ptr [EBP + -0x4]
007d3084  CMP dword ptr [EAX + 0x40],0x0
007d3088  JZ 0x007d309d
007d308a  MOV ECX,dword ptr [EBP + -0x4]
007d308d  MOV EDX,dword ptr [ECX + 0x40]
007d3090  MOV EAX,dword ptr [EDX]
007d3092  SUB EAX,0x1
007d3095  MOV ECX,dword ptr [EBP + -0x4]
007d3098  MOV EDX,dword ptr [ECX + 0x40]
007d309b  MOV dword ptr [EDX],EAX
007d309d  MOV EAX,dword ptr [EBP + -0x4]
007d30a0  MOV ECX,dword ptr [EAX + 0x4c]
007d30a3  MOV EDX,dword ptr [ECX + 0xb4]
007d30a9  SUB EDX,0x1
007d30ac  MOV EAX,dword ptr [EBP + -0x4]
007d30af  MOV ECX,dword ptr [EAX + 0x4c]
007d30b2  MOV dword ptr [ECX + 0xb4],EDX
007d30b8  MOV EDX,dword ptr [EBP + -0x8]
007d30bb  MOV EAX,[0x00906b3c]
007d30c0  MOV dword ptr [EDX + 0x64],EAX
007d30c3  MOV ECX,dword ptr [0x00906b3c]
007d30c9  MOV EDX,dword ptr [ECX]
007d30cb  ADD EDX,0x1
007d30ce  MOV EAX,[0x00906b3c]
007d30d3  MOV dword ptr [EAX],EDX
007d30d5  MOV ECX,dword ptr [0x00906b3c]
007d30db  CMP dword ptr [ECX + 0x2c],0x0
007d30df  JZ 0x007d30fa
007d30e1  MOV EDX,dword ptr [0x00906b3c]
007d30e7  MOV EAX,dword ptr [EDX + 0x2c]
007d30ea  MOV ECX,dword ptr [EAX]
007d30ec  ADD ECX,0x1
007d30ef  MOV EDX,dword ptr [0x00906b3c]
007d30f5  MOV EAX,dword ptr [EDX + 0x2c]
007d30f8  MOV dword ptr [EAX],ECX
007d30fa  MOV ECX,dword ptr [0x00906b3c]
007d3100  CMP dword ptr [ECX + 0x34],0x0
007d3104  JZ 0x007d311f
007d3106  MOV EDX,dword ptr [0x00906b3c]
007d310c  MOV EAX,dword ptr [EDX + 0x34]
007d310f  MOV ECX,dword ptr [EAX]
007d3111  ADD ECX,0x1
007d3114  MOV EDX,dword ptr [0x00906b3c]
007d311a  MOV EAX,dword ptr [EDX + 0x34]
007d311d  MOV dword ptr [EAX],ECX
007d311f  MOV ECX,dword ptr [0x00906b3c]
007d3125  CMP dword ptr [ECX + 0x30],0x0
007d3129  JZ 0x007d3144
007d312b  MOV EDX,dword ptr [0x00906b3c]
007d3131  MOV EAX,dword ptr [EDX + 0x30]
007d3134  MOV ECX,dword ptr [EAX]
007d3136  ADD ECX,0x1
007d3139  MOV EDX,dword ptr [0x00906b3c]
007d313f  MOV EAX,dword ptr [EDX + 0x30]
007d3142  MOV dword ptr [EAX],ECX
007d3144  MOV ECX,dword ptr [0x00906b3c]
007d314a  CMP dword ptr [ECX + 0x40],0x0
007d314e  JZ 0x007d3169
007d3150  MOV EDX,dword ptr [0x00906b3c]
007d3156  MOV EAX,dword ptr [EDX + 0x40]
007d3159  MOV ECX,dword ptr [EAX]
007d315b  ADD ECX,0x1
007d315e  MOV EDX,dword ptr [0x00906b3c]
007d3164  MOV EAX,dword ptr [EDX + 0x40]
007d3167  MOV dword ptr [EAX],ECX
007d3169  MOV ECX,dword ptr [0x00906b3c]
007d316f  MOV EDX,dword ptr [ECX + 0x4c]
007d3172  MOV EAX,dword ptr [EDX + 0xb4]
007d3178  ADD EAX,0x1
007d317b  MOV ECX,dword ptr [0x00906b3c]
007d3181  MOV EDX,dword ptr [ECX + 0x4c]
007d3184  MOV dword ptr [EDX + 0xb4],EAX
007d318a  CMP dword ptr [EBP + -0x4],0x0
007d318e  JZ 0x007d31ad
007d3190  MOV EAX,dword ptr [EBP + -0x4]
007d3193  CMP dword ptr [EAX],0x0
007d3196  JNZ 0x007d31ad
007d3198  CMP dword ptr [EBP + -0x4],0x906ae8
007d319f  JZ 0x007d31ad
007d31a1  MOV ECX,dword ptr [EBP + -0x4]
007d31a4  PUSH ECX
007d31a5  CALL 0x007d2e00
007d31aa  ADD ESP,0x4
007d31ad  MOV EDX,dword ptr [EBP + -0x8]
007d31b0  MOV EAX,dword ptr [EDX + 0x64]
007d31b3  MOV ESP,EBP
007d31b5  POP EBP
007d31b6  RET
