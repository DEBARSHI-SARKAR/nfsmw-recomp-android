/* speed.exe 0072bd60 FUN_0072bd60; analysis pseudocode, not buildable source.
 * calls 00727de0 FUN_00727de0
 */

undefined4 __thiscall FUN_0072bd60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int local_4;
  
  iVar1 = *param_2;
  if (iVar1 != 0x34110) {
    if (iVar1 != 0x34113) {
      if (iVar1 == 0x34111) {
        param_1[4] = (int)(param_2 + 2);
        return 1;
      }
      if (iVar1 != 0x34112) {
        return 0;
      }
      param_1[6] = (int)(param_2 + 2);
      param_1[5] = (uint)param_2[1] >> 4;
      return 1;
    }
    piVar5 = param_2 + 2;
    param_1[2] = (int)piVar5;
    param_2 = (int *)(param_2[1] + 8 + (int)param_2);
    param_1[3] = (int)param_2;
    if (piVar5 < param_2) {
      do {
        iVar1 = 0;
        if ('\0' < *(char *)((int)piVar5 + 0x13)) {
          piVar4 = piVar5 + 5;
          do {
            iVar3 = 0;
            if (0 < param_1[1]) {
              iVar2 = *param_1;
              do {
                if (*(short *)(iVar2 + 8) == (short)*piVar4) goto LAB_0072be81;
                iVar3 = iVar3 + 1;
                iVar2 = iVar2 + 0x5c;
              } while (iVar3 < param_1[1]);
            }
            iVar2 = 0;
LAB_0072be81:
            piVar4[1] = iVar2;
            iVar1 = iVar1 + 1;
            piVar4 = piVar4 + 2;
          } while (iVar1 < *(char *)((int)piVar5 + 0x13));
        }
        piVar5 = piVar5 + *(char *)((int)piVar5 + 0x13) * 2 + 5;
      } while (piVar5 < (int *)param_1[3]);
    }
    return 1;
  }
  *param_1 = (int)(param_2 + 2);
  param_1[1] = (uint)param_2[1] / 0x5c;
  local_4 = 0;
  if (0 < param_1[0x1b1]) {
    piVar5 = param_1 + 0x1b2;
    do {
      iVar1 = 0;
      if (0 < param_1[1]) {
        piVar4 = (int *)*param_1;
        do {
          if ((short)piVar4[2] == (short)piVar5[2]) goto LAB_0072bdd3;
          iVar1 = iVar1 + 1;
          piVar4 = piVar4 + 0x17;
        } while (iVar1 < param_1[1]);
      }
      piVar4 = (int *)0x0;
LAB_0072bdd3:
      piVar6 = piVar5;
      piVar7 = piVar4;
      for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      param_1[7] = param_1[7] + 1;
      FUN_00727de0(piVar4);
      param_1[param_1[0xb0] + 0xb1] = (int)piVar4;
      param_1[0xb0] = param_1[0xb0] + 1;
      local_4 = local_4 + 1;
      piVar5 = piVar5 + 0x17;
    } while (local_4 < param_1[0x1b1]);
  }
  param_1[0x1b1] = 0;
  return 1;
}

