/* speed.exe 007445c0 FUN_007445c0; analysis pseudocode, not buildable source.
 * calls 00501680 FUN_00501680
 * calls 00466340 FUN_00466340
 */

int __thiscall FUN_007445c0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    return 0;
  }
  local_c = 0;
  local_8 = 0;
  do {
    if ((*(uint *)(param_1 + 0xb84 + (*(int *)(param_1 + 0x1628) + local_8) * 4) & 0xfffffffc) != 0)
    {
      for (piVar2 = (int *)FUN_00501680(0); piVar2 != (int *)0x0;
          piVar2 = (int *)FUN_00501680(piVar2)) {
        iVar4 = 0;
        if (0 < param_4) {
          do {
            if (*piVar2 == *(int *)(param_3 + iVar4 * 4)) {
              local_c = local_c + 1;
              piVar3 = (int *)FUN_00466340(DAT_009b0950);
              if (piVar3 == (int *)0x0) {
                piVar3 = (int *)0x0;
              }
              else {
                piVar3[4] = (int)piVar2;
                piVar3[1] = piVar2[0x10];
                piVar3[2] = piVar2[0x11];
                piVar3[3] = piVar2[0x12];
              }
              piVar1 = *(int **)(param_2 + 4);
              *(int **)(param_2 + 4) = piVar3;
              *piVar1 = (int)piVar3;
              *piVar3 = param_2;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < param_4);
        }
      }
    }
    local_8 = local_8 + 5;
  } while (local_8 < 0x17c);
  return local_c;
}

