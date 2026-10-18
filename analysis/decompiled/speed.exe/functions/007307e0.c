/* speed.exe 007307e0 FUN_007307e0; analysis pseudocode, not buildable source.
 * calls 00723bf0 FUN_00723bf0
 * calls 00463ca0 FUN_00463ca0
 * calls 0072e480 FUN_0072e480
 * calls 00410d30 thunk_FUN_00501480
 * calls 0072ff30 FUN_0072ff30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007307e0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_8;
  undefined4 local_4;
  
  iVar4 = *param_1;
  if (iVar4 == 0x34108) {
    DAT_009a3a64 = 0;
    DAT_009a3a68 = 0;
    FUN_00723bf0();
    return 1;
  }
  if (iVar4 != -0x7ffcbf00) {
    if (iVar4 == -0x7ffcbef5) {
      piVar5 = (int *)(param_1[1] + 8 + (int)param_1);
      for (piVar3 = param_1 + 2; piVar3 < piVar5; piVar3 = (int *)((int)piVar3 + piVar3[1] + 8)) {
        param_1 = (int *)0x0;
        if ((char)piVar3[3] != '\0') {
          piVar6 = piVar3 + 6;
          do {
            iVar4 = *piVar6;
            if (iVar4 != 0) {
              thunk_FUN_00501480();
              FUN_00463ca0(DAT_00915fb4,iVar4);
              *piVar6 = 0;
            }
            param_1 = (int *)((int)param_1 + 1);
            piVar6 = piVar6 + 4;
          } while (param_1 < (uint)*(byte *)(piVar3 + 3));
        }
        FUN_0072e480(&local_4,piVar3 + 2);
        FUN_0072ff30(&param_1,local_4);
      }
      return 1;
    }
    if (iVar4 == -0x7ffcbeeb) {
      _DAT_009a3a58 = 0;
      DAT_009a3a60 = 0;
      _DAT_009a3a5c = 0;
      return 1;
    }
    return 0;
  }
  piVar3 = (int *)((int)param_1 + 0x1fU & 0xfffffff0);
  *(undefined4 *)(*(int *)(&DAT_009a3bb0 + piVar3[3] * 4) + 4) = 0;
  iVar4 = piVar3[3];
  piVar5 = *(int **)(&DAT_009a3bb0 + iVar4 * 4);
  if ((piVar5 != (int *)0x0) && (*piVar5 = *piVar5 + -1, *piVar5 == 0)) {
    _DAT_009a6770 = _DAT_009a6770 + -1;
    *DAT_009a9f78 = (int)piVar5;
    piVar6 = piVar5;
    piVar5[1] = (int)DAT_009a9f78;
    DAT_009a9f78 = piVar6;
    *piVar5 = (int)&DAT_009a9f74;
    *(undefined4 *)(&DAT_009a3bb0 + iVar4 * 4) = 0;
  }
  iVar4 = *piVar3;
  piVar5 = (int *)piVar3[1];
  *piVar5 = iVar4;
  *(int **)(iVar4 + 4) = piVar5;
  if (DAT_00925860 == 0) {
    local_8 = 0;
    if (0 < piVar3[7]) {
      param_1 = (int *)0x0;
      do {
        piVar5 = (int *)((int)param_1 + piVar3[6] + 0x28);
        iVar4 = 1;
        do {
          if (DAT_00925860 != 0) break;
          if (*piVar5 != 0) {
            if (iVar4 < 4) {
              iVar2 = 4 - iVar4;
              piVar6 = piVar5;
              do {
                piVar6 = piVar6 + 1;
                if (*piVar6 == *piVar5) {
                  *piVar6 = 0;
                }
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            if (DAT_009a3a3c != (code *)0x0) {
              (*DAT_009a3a3c)(piVar3,local_8,*piVar5);
            }
            iVar2 = *piVar5;
            if (iVar2 != 0) {
              thunk_FUN_00501480();
              FUN_00463ca0(DAT_00915fb4,iVar2);
            }
            *piVar5 = 0;
          }
          piVar5 = piVar5 + 1;
          bVar1 = iVar4 < 4;
          iVar4 = iVar4 + 1;
        } while (bVar1);
        local_8 = local_8 + 1;
        param_1 = param_1 + 0x12;
      } while (local_8 < piVar3[7]);
    }
    if (DAT_009a3a44 != (code *)0x0) {
      (*DAT_009a3a44)(piVar3);
    }
  }
  return 1;
}

