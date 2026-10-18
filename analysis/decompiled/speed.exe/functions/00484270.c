/* speed.exe 00484270 FUN_00484270; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 0046d3f0 FUN_0046d3f0
 * calls 00473fd0 FUN_00473fd0
 * calls 00633dc0 FUN_00633dc0
 * calls 00444fe0 FUN_00444fe0
 * calls 00483c90 FUN_00483c90
 * calls 00633d80 FUN_00633d80
 * calls 00633d90 FUN_00633d90
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00484270(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  int *local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [48];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  cVar1 = FUN_00633d80();
  while (cVar1 == '\0') {
    FUN_00633dc0(&local_60);
    if (((local_60 != (int *)0x0) && (*local_60 == 0x15)) && (DAT_00911039 != '\0')) {
      DAT_00911039 = '\0';
      *(undefined1 *)(param_1 + 0x2e8) = 1;
    }
    FUN_00633d90();
    cVar1 = FUN_00633d80();
  }
  if (*(int *)(param_1 + 0x2d8) == 0) {
    if (*(int *)(param_1 + 0x2e0) != 0) {
      (**(code **)(*(int *)(param_1 + 0x18) + 8))(*(int *)(param_1 + 0x2e0));
      *(undefined4 *)(param_1 + 0x2e0) = 0;
    }
    FUN_007869c0(0);
    return;
  }
  FUN_00473fd0();
  if (*(int *)(param_1 + 0x2cc) != 0) {
    FUN_00444fe0(local_50,*(int *)(param_1 + 0x2cc));
    if ((*(int *)(param_1 + 0x2e0) != 0) &&
       (piVar3 = (int *)FUN_005d59f0(&LAB_004039c0), piVar3 != (int *)0x0)) {
      piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x2e0) + 4))();
      piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
      pfVar5 = (float *)(**(code **)(*piVar3 + 0x3c))();
      fStack_5c = *pfVar5;
      fStack_58 = pfVar5[1];
      fStack_54 = pfVar5[2];
      (**(code **)(*piVar4 + 0xa0))(&fStack_5c,0);
      pfVar5 = (float *)(**(code **)(*piVar4 + 0x20))();
      fStack_5c = fStack_5c + *pfVar5;
      fStack_58 = fStack_58 + pfVar5[1];
      fStack_20 = fStack_54 + pfVar5[2];
      fStack_1c = -fStack_5c;
      fStack_18 = fStack_58;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x2c0) + 0x84) = 0;
    if (*(int **)(param_1 + 0x2e0) != (int *)0x0) {
      fVar9 = (float10)(**(code **)(**(int **)(param_1 + 0x2e0) + 0xb0))();
      *(float *)(*(int *)(param_1 + 0x2c0) + 0x84) = (float)fVar9;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x2c0) + 0x78) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x89) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x2c0) + 0x8c) = 0;
    if (((*(int *)(param_1 + 0x2e0) != 0) && (iVar6 = FUN_005d59f0(&LAB_00402830), iVar6 != 0)) &&
       (piVar3 = (int *)FUN_005d59f0(&LAB_00404020), piVar3 != (int *)0x0)) {
      fVar9 = (float10)(**(code **)(*piVar3 + 4))();
      *(float *)(*(int *)(param_1 + 0x2c0) + 0x78) = (float)fVar9;
      uVar2 = (**(code **)(*piVar3 + 0x20))();
      *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x89) = uVar2;
      fVar9 = (float10)(**(code **)(*piVar3 + 0x1c))();
      *(float *)(*(int *)(param_1 + 0x2c0) + 0x8c) = (float)fVar9;
    }
    local_60 = (int *)0x0;
    if ((*(int *)(param_1 + 0x2e0) != 0) &&
       (piVar3 = (int *)FUN_005d59f0(&LAB_00404040), piVar3 != (int *)0x0)) {
      uVar8 = 0;
      iVar6 = (**(code **)(*piVar3 + 8))();
      if (iVar6 != 0) {
        do {
          fVar9 = (float10)(**(code **)(*piVar3 + 0x30))(uVar8);
          if ((float10)_DAT_00890968 < fVar9) {
            (**(code **)(*piVar3 + 0x30))(uVar8);
          }
          uVar8 = uVar8 + 1;
          uVar7 = (**(code **)(*piVar3 + 8))();
        } while (uVar8 < uVar7);
      }
    }
    *(int **)(*(int *)(param_1 + 0x2c0) + 0x80) = local_60;
    FUN_0046d3f0(param_2,local_50,*(undefined4 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d4))
    ;
    if ((DAT_008ee348 < 1) && (DAT_0091103a != '\0')) {
      FUN_00483c90();
    }
  }
  return;
}

