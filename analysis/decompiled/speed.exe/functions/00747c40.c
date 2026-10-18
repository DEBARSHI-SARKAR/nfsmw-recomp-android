/* speed.exe 00747c40 FUN_00747c40; analysis pseudocode, not buildable source.
 * calls 007399f0 FUN_007399f0
 * calls 004fb330 FUN_004fb330
 */

int * __thiscall
FUN_00747c40(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_10;
  uint local_c;
  
  iVar3 = FUN_007399f0(param_3,param_2);
  iVar1 = *(int *)(&DAT_009036a0 + param_3 * 4);
  param_2 = 0;
  if (param_5 == (int *)0x0) {
    param_2 = 0;
  }
  else {
    do {
      if (*(int *)(DAT_009b09c4 + (uint)*(byte *)((int)param_5 + 7) * 4) ==
          *(int *)(iVar3 + param_2 * 4)) break;
      param_2 = param_2 + 1;
    } while (param_2 < 2);
    if (param_2 == 2) {
      return (int *)0x0;
    }
  }
  if (param_2 < 2) {
    piVar5 = (int *)(iVar3 + param_2 * 4);
    local_10 = param_2;
    do {
      if (*piVar5 != 0) {
        for (puVar2 = (undefined4 *)*param_1; puVar2 != param_1; puVar2 = (undefined4 *)*puVar2) {
          piVar4 = (int *)puVar2[0xd];
          piVar6 = (int *)(puVar2[0xe] * 0xe + (int)piVar4);
          if ((param_5 == (int *)0x0) || (local_10 != param_2)) {
            local_c = 0;
            if (DAT_009b09c8 != 0) {
              do {
                if (*(int *)(DAT_009b09c4 + local_c * 4) == *piVar5) {
                  local_c = local_c & 0xff;
                  goto LAB_00747d41;
                }
                local_c = local_c + 1;
              } while (local_c < DAT_009b09c8);
            }
            local_c = 0xff;
LAB_00747d41:
            piVar4 = (int *)FUN_004fb330(local_c,piVar4,puVar2[0xe],7,0xe);
            if (piVar4 != (int *)0x0) goto joined_r0x00747d5a;
          }
          else if ((piVar4 <= param_5) && (param_5 < piVar6)) {
            piVar4 = (int *)((int)param_5 + 0xe);
joined_r0x00747d5a:
            for (; piVar4 < piVar6; piVar4 = (int *)((int)piVar4 + 0xe)) {
              if ((((char)piVar4[1] == iVar1) &&
                  (*(int *)(DAT_009b09c4 + (uint)*(byte *)((int)piVar4 + 7) * 4) == *piVar5)) &&
                 ((param_4 == 0 || (*piVar4 == param_4)))) {
                if ((char)(*(byte *)((int)piVar4 + 5) >> 5) == param_6) {
                  return piVar4;
                }
                if (param_6 == -1) {
                  return piVar4;
                }
              }
            }
          }
        }
      }
      local_10 = local_10 + 1;
      piVar5 = piVar5 + 1;
    } while (local_10 < 2);
  }
  return (int *)0x0;
}

