/* speed.exe 00645bc0 FUN_00645bc0; analysis pseudocode, not buildable source.
 * calls 00644c80 FUN_00644c80
 * calls 006442e0 FUN_006442e0
 * calls 00644280 FUN_00644280
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_00645bc0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,char param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  bool bVar9;
  
  uVar7 = 0;
  if (param_5 != '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x24);
    fVar2 = _DAT_00890968;
    if (*(int *)(param_1 + 0xc) != 0) {
      fVar2 = *(float *)(*(int *)(param_1 + 0xc) + 0xc);
    }
    *(float *)(param_1 + 0x2c) = fVar2;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_006442e0(param_2,param_6);
    if (_DAT_00890968 <= *(float *)(*(int *)(param_1 + 0xc) + 0xc)) {
      *(float *)(param_1 + 0x2c) =
           *(float *)(param_1 + 0x2c) - *(float *)(*(int *)(param_1 + 0xc) + 0xc);
    }
    else {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    uVar3 = DAT_009203a4;
    bVar9 = param_3 < DAT_009203a4;
    *(undefined4 *)(param_1 + 0x1c) = 0xbf800000;
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (bVar9) {
      DAT_009203a4 = uVar3 - 1;
      if (param_3 < DAT_009203a4) {
        puVar4 = &DAT_0091e14c + param_3;
        puVar8 = &DAT_0091e148 + param_3;
        for (iVar5 = DAT_009203a4 - param_3; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      (&DAT_0091e144)[uVar3] = 0;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    FUN_00644280(param_4,*(undefined4 *)(param_1 + 0x24));
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return uVar7;
  }
  puVar4 = (undefined4 *)(param_1 + 0x40);
  iVar5 = 4;
  uVar6 = 0;
  do {
    uVar1 = puVar4[-1];
    puVar4 = puVar4 + -1;
    iVar5 = iVar5 + -1;
    *puVar4 = uVar6;
    uVar6 = uVar1;
  } while (iVar5 != 0);
  FUN_00644c80(uVar1,param_4,param_6);
  return uVar7;
}

