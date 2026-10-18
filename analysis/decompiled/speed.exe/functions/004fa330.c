/* speed.exe 004fa330 FUN_004fa330; analysis pseudocode, not buildable source.
 * calls 0072cdc0 FUN_0072cdc0
 * calls 0045f640 FUN_0045f640
 * calls 004fa1a0 FUN_004fa1a0
 * calls 004d9600 FUN_004d9600
 * calls 0072ca00 FUN_0072ca00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004fa330(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_20;
  
  FUN_004fa1a0();
  if (0 < DAT_008ef998) {
    local_70 = 0;
    iVar4 = 0;
    do {
      if (_DAT_00897e08 <= (float)(&DAT_009142c8)[iVar4]) {
        FUN_0045f640(&local_60,(int)&DAT_00914560 + local_70,(int)&DAT_00914520 + local_70,
                     0x3e19999a);
        local_48 = local_58;
        local_4c = local_5c;
        local_64 = local_5c;
        local_50 = local_60;
        local_68 = local_60;
        iVar1 = FUN_0072ca00(&local_68);
        if (iVar1 != 0) {
          for (piVar2 = (int *)FUN_0072cdc0(&local_50,(int)*(short *)(iVar1 + 0xc) + *DAT_009a3ba4);
              (piVar2 != (int *)0x0 && (iVar1 = *piVar2, iVar1 != 0)); piVar2 = piVar2 + 1) {
            piVar3 = *(int **)(iVar1 + 0x10);
            if (*(int *)(iVar1 + 0xc) == 0x10007) {
              local_40 = 2;
              local_20 = 0;
              iVar1 = *piVar3;
              if ((((iVar1 == -0xbf5b711) || (iVar1 == 0x72f66b23)) || (iVar1 == -0x4942636b)) ||
                 (iVar1 == -0xc541e3e)) {
                local_40 = 2;
              }
              else if (iVar1 == 0x1d5d4f) {
                local_40 = 1;
              }
              local_3c = (&DAT_009142d0)[iVar4];
              local_38 = (&DAT_009142c8)[iVar4];
              local_30 = piVar3[4];
              local_2c = piVar3[5];
              local_28 = piVar3[6];
              piVar3 = (int *)(**(code **)(*DAT_00911f80 + 0xc))(&local_40);
              if (piVar3 != (int *)0x0) {
                (**(code **)(*piVar3 + 0xc))(&local_40);
              }
            }
          }
        }
      }
      iVar4 = iVar4 + 1;
      local_70 = local_70 + 0x10;
    } while (iVar4 < DAT_008ef998);
  }
  piVar2 = (int *)(param_1 + 0x1c);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 < 0) {
    *(undefined4 *)(param_1 + 0x1c) = 4;
  }
  FUN_004d9600(param_2);
  return;
}

