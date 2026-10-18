/* speed.exe 00647230 FUN_00647230; analysis pseudocode, not buildable source.
 * calls 00644c80 FUN_00644c80
 * calls 00644480 FUN_00644480
 * calls 0063ff30 FUN_0063ff30
 * calls 006341f0 FUN_006341f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00647230(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_18;
  int *local_14;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  local_14 = param_1;
  if (param_1[10] != 0) {
    local_8 = 0;
    do {
      iVar5 = local_8 + param_1[9];
      FUN_00644480(param_2,*(undefined4 *)(local_8 + 0x10 + param_1[9]));
      iVar2 = *(int *)(iVar5 + 4);
      if (iVar2 != 0) {
        if (*(int *)(iVar5 + 0xc) == 0) {
          FUN_00644c80(DAT_00920460,param_2,0);
        }
        else if (*(int *)(iVar5 + 0x3c) == 0) {
          local_10 = 0;
          if (*(int *)(iVar5 + 0x30) == 0) {
LAB_006472c4:
            local_18 = *(int *)(iVar5 + 0x24);
          }
          else {
            local_10 = 0;
            piVar6 = (int *)(iVar5 + 0x30);
            do {
              piVar3 = piVar6 + 1;
              piVar6 = piVar6 + 1;
              local_10 = local_10 + 1;
            } while (*piVar3 != 0);
            if (*(int *)(iVar5 + 0x30) == 0) goto LAB_006472c4;
            local_18 = *(int *)(iVar5 + 0x28);
          }
          iVar1 = iVar2 + 0xc;
          piVar6 = (int *)(iVar1 + *(int *)(iVar2 + 8) * 4);
          local_4 = local_18;
          piVar3 = (int *)FUN_0063ff30(iVar1,piVar6,&local_4,0);
          if (((piVar6 <= piVar3) || (*piVar3 != local_18)) ||
             (piVar6 = *(int **)(iVar2 + 0xc +
                                (((int)piVar3 - iVar1 >> 2) + *(int *)(iVar2 + 8)) * 4),
             piVar6 == (int *)0x0)) {
            local_18 = *(int *)(iVar2 + 4);
            iVar1 = iVar2 + 0xc;
            piVar6 = (int *)(iVar1 + *(int *)(iVar2 + 8) * 4);
            piVar3 = (int *)FUN_0063ff30(iVar1,piVar6,&local_18,0);
            if ((piVar3 < piVar6) && (*piVar3 == local_18)) {
              piVar6 = *(int **)(iVar2 + 0xc +
                                (((int)piVar3 - iVar1 >> 2) + *(int *)(iVar2 + 8)) * 4);
            }
            else {
              piVar6 = (int *)0x0;
            }
          }
          local_18 = FUN_006341f0(piVar6,DAT_00920460,0);
          iVar2 = *piVar6;
          piVar3 = piVar6 + 2;
          local_4 = local_18;
          piVar4 = (int *)FUN_0063ff30(piVar3,piVar3 + iVar2,&local_4,0);
          param_1 = local_14;
          if (((piVar4 < piVar3 + iVar2) && (*piVar4 == local_18)) &&
             (piVar6 = piVar6 + *piVar6 + 2 + ((int)piVar4 - (int)piVar3 >> 2) * 2,
             piVar6 != (int *)0x0)) {
            *(int *)(iVar5 + 0x30 + local_10 * 4) = local_18;
            *(int *)(iVar5 + 0x28) = *piVar6;
            if (*(float *)(piVar6[1] + 0xc) < _DAT_00890968) {
              *(undefined4 *)(iVar5 + 0x2c) = DAT_008f5964;
            }
            else {
              *(float *)(iVar5 + 0x2c) = *(float *)(piVar6[1] + 0xc) + *(float *)(iVar5 + 0x2c);
            }
          }
        }
      }
      local_c = local_c + 1;
      local_8 = local_8 + 0x40;
    } while (local_c < (uint)param_1[10]);
  }
  (**(code **)(*param_1 + 0x34))(DAT_00920460,param_2,0,2);
  return;
}

