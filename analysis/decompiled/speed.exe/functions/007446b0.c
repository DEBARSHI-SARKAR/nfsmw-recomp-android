/* speed.exe 007446b0 FUN_007446b0; analysis pseudocode, not buildable source.
 * calls 00501680 FUN_00501680
 * calls 00466340 FUN_00466340
 * calls 004fb7a0 FUN_004fb7a0
 */

void __thiscall FUN_007446b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_c;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    local_c = 0;
    do {
      if ((*(uint *)(param_1 + 0xb84 + (*(int *)(param_1 + 0x1628) + local_c) * 4) & 0xfffffffc) !=
          0) {
        for (piVar5 = (int *)FUN_00501680(0); piVar5 != (int *)0x0;
            piVar5 = (int *)FUN_00501680(piVar5)) {
          if (*piVar5 == param_3) {
            FUN_004fb7a0();
            iVar1 = piVar5[0x10];
            iVar2 = piVar5[0x11];
            iVar3 = piVar5[0x12];
            piVar6 = (int *)FUN_00466340(DAT_009b0950);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6[1] = iVar1;
              piVar6[4] = 0;
              piVar6[2] = iVar2;
              piVar6[3] = iVar3;
            }
            piVar4 = *(int **)(param_2 + 4);
            *(int **)(param_2 + 4) = piVar6;
            *piVar4 = (int)piVar6;
            *piVar6 = param_2;
          }
        }
      }
      local_c = local_c + 5;
    } while (local_c < 0x17c);
  }
  return;
}

