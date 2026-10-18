/* speed.exe 0074df10 FUN_0074df10; analysis pseudocode, not buildable source.
 * calls 00501680 FUN_00501680
 * calls 005d29d0 FUN_005d29d0
 */

void __fastcall FUN_0074df10(int param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    local_10 = -1;
    local_c = -1;
    iVar6 = 0x4b;
    local_14 = 0x177;
    do {
      if ((*(uint *)(param_1 + 0xb84 + (*(int *)(param_1 + 0x1628) + local_14) * 4) & 0xfffffffc) !=
          0) {
        for (puVar3 = (uint *)FUN_00501680(0); puVar3 != (uint *)0x0;
            puVar3 = (uint *)FUN_00501680(puVar3)) {
          uVar1 = *puVar3;
          if (uVar1 < 0x7adf7ef9) {
            if (uVar1 == 0x7adf7ef8) {
              if ((local_c != iVar6) && (0 < local_c)) goto LAB_0074e12b;
              cVar5 = '\x03';
              local_c = iVar6;
              goto LAB_0074dff8;
            }
            if (uVar1 < 0x41489595) {
              if (uVar1 == 0x41489594) {
                cVar5 = '\n';
              }
              else if (uVar1 == 0x1e4150b4) {
                cVar5 = '\x05';
              }
              else {
                if (uVar1 != 0x28cd78f5) {
                  if (uVar1 == 0x31a66786) goto LAB_0074dfba;
                  goto LAB_0074e12b;
                }
                cVar5 = '\f';
              }
              goto LAB_0074dff8;
            }
            if (uVar1 == 0x6a52a241) {
              cVar5 = '\v';
              goto LAB_0074dff8;
            }
            if (uVar1 == 0x7a5b2f25) {
              if ((local_10 == iVar6) || (local_10 < 1)) {
                cVar5 = '\x03';
                local_10 = iVar6;
                goto LAB_0074dff8;
              }
            }
            else if (uVar1 == 0x7a5bcf69) goto LAB_0074dff6;
          }
          else {
            if (uVar1 < 0xbf700a7a) {
              if (uVar1 != 0xbf700a79) {
                if (uVar1 == 0x9db90133) goto LAB_0074dff6;
                if (uVar1 != 0xa2a2fc7c) {
                  if (uVar1 == 0xb4348dba) {
                    cVar5 = '\a';
                    goto LAB_0074dff8;
                  }
                  goto LAB_0074e12b;
                }
              }
LAB_0074dfba:
              cVar5 = '\x01';
            }
            else {
              if (uVar1 != 0xd09091c6) {
                if (uVar1 == 0xe662c161) {
                  cVar5 = '\x06';
                  goto LAB_0074dff8;
                }
                goto LAB_0074e12b;
              }
LAB_0074dff6:
              cVar5 = '\0';
            }
LAB_0074dff8:
            piVar4 = (int *)FUN_005d29d0(0x30,0);
            piVar4[2] = uVar1;
            *(char *)(piVar4 + 0xb) = cVar5;
            if ((((cVar5 == '\x05') || (cVar5 == '\x06')) || (cVar5 == '\a')) ||
               (((cVar5 == '\n' || (cVar5 == '\v')) || (cVar5 == '\f')))) {
              *(undefined1 *)((int)piVar4 + 0x2d) = 2;
            }
            else {
              *(undefined1 *)((int)piVar4 + 0x2d) = 4;
            }
            piVar4[4] = puVar3[0x10];
            piVar4[5] = puVar3[0x11];
            piVar4[6] = puVar3[0x12];
            piVar4[7] = 0;
            piVar4[8] = puVar3[0xc];
            piVar4[9] = puVar3[0xd];
            piVar4[10] = puVar3[0xe];
            piVar2 = *(int **)(param_1 + 0x108);
            *piVar2 = (int)piVar4;
            *(int **)(param_1 + 0x108) = piVar4;
            piVar4[1] = (int)piVar2;
            *piVar4 = param_1 + 0x104;
          }
LAB_0074e12b:
        }
      }
      iVar6 = iVar6 + -1;
      local_14 = local_14 + -5;
    } while (-1 < local_14);
  }
  return;
}

