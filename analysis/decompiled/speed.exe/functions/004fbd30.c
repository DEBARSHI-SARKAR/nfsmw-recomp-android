/* speed.exe 004fbd30 FUN_004fbd30; analysis pseudocode, not buildable source.
 * calls 0045ce40 FUN_0045ce40
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 * calls 004fbb20 FUN_004fbb20
 */

undefined4 FUN_004fbd30(int *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  void *pvVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int local_14;
  int local_c;
  
  if ((param_1 != (int *)0x0) && (-1 < param_2)) {
    if (param_2 != 0) {
      pvVar4 = _malloc(param_2 * 4);
      local_c = 0;
      if (0 < param_2) {
        local_c = 0;
        piVar5 = param_1;
        iVar8 = param_2;
        do {
          if ((*piVar5 == 0) || (iVar9 = *(int *)(*piVar5 + 0x84), iVar9 == 0)) {
            *piVar5 = 0;
          }
          else {
            local_c = local_c + *(short *)(iVar9 + 8);
          }
          *(undefined4 *)(((int)pvVar4 - (int)param_1) + (int)piVar5) = 0;
          piVar5 = piVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      FUN_0045ce40();
      pvVar6 = _malloc(local_c * 4);
      local_14 = 0;
      if (0 < local_c) {
        do {
          puVar7 = (uint *)0x0;
          iVar8 = 0;
          iVar9 = 0;
          if (0 < param_2) {
            piVar5 = param_1;
            do {
              if (*piVar5 != 0) {
                piVar2 = *(int **)(*piVar5 + 0x84);
                iVar3 = *(int *)((int)piVar5 + ((int)pvVar4 - (int)param_1));
                if ((iVar3 < (short)piVar2[2]) &&
                   ((puVar1 = (uint *)(*piVar2 + iVar3 * 8), puVar7 == (uint *)0x0 ||
                    (*puVar1 < *puVar7)))) {
                  puVar7 = puVar1;
                  iVar8 = iVar9;
                }
              }
              iVar9 = iVar9 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar9 < param_2);
            if (puVar7 != (uint *)0x0) {
              *(uint **)((int)pvVar6 + local_14 * 4) = puVar7;
              local_14 = local_14 + 1;
              piVar5 = (int *)((int)pvVar4 + iVar8 * 4);
              *piVar5 = *piVar5 + 1;
            }
          }
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      iVar8 = 0;
      if (0 < param_2) {
        do {
          if (param_1[iVar8] != 0) {
            FUN_004fbb20(pvVar6,local_14);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_2);
      }
      thunk_FUN_007c7250(pvVar4);
      thunk_FUN_007c7250(pvVar6);
      return 1;
    }
    return 1;
  }
  return 0;
}

