/* speed.exe 006d71f0 FUN_006d71f0; analysis pseudocode, not buildable source.
 * calls 006c6450 FUN_006c6450
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006c6300 FUN_006c6300
 * calls 006c86b0 FUN_006c86b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006d71f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  if (DAT_00982a20 != 0) {
    iVar1 = *(int *)(&DAT_00919648 + *(int *)(DAT_00982a20 + 4) * 0x70);
    local_58 = _DAT_00890968;
    if (iVar1 != 0) {
      local_58 = *(float *)(iVar1 + 0x290);
    }
    local_58 = _DAT_0089096c - local_58;
    local_60 = local_58 * *(float *)(DAT_009b392c + 0x40);
    local_5c = local_58 * *(float *)(DAT_009b392c + 0x44);
    local_58 = local_58 * *(float *)(DAT_009b392c + 0x48);
    local_54 = _DAT_00890968;
    if (iVar1 != 0) {
      local_54 = *(float *)(iVar1 + 0x36a0);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xc7c);
    if (iVar1 != 0) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x88))(*(int **)(param_1 + 0x48),iVar1,&local_60);
    }
  }
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xaec),
             DAT_00982a6c);
  FUN_006c6300(param_1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xcf4);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x78))(*(int **)(param_1 + 0x48),iVar1,DAT_008fadc0);
  }
  FUN_006c6450(param_1);
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_58 = 0.0;
    local_54 = 0.0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0x3f800000;
    uStack_30 = 0;
    uStack_24 = 0;
    uStack_20 = 0x3f800000;
    local_5c = 0.5;
    uStack_48 = 0xbf000000;
    uStack_2c = 0x3f000000;
    uStack_28 = 0x3f000000;
    if (&DAT_009195e0 + *(int *)(DAT_00982a20 + 4) * 0x1c != (int *)0x0) {
      D3DXMatrixMultiply(&local_5c,(&DAT_009195e0)[*(int *)(DAT_00982a20 + 4) * 0x1c] + 0x40,
                         &local_5c);
    }
  }
  if ((0 < DAT_00901830) && (*(int *)(DAT_00982a20 + 4) == 1)) {
    uVar2 = DAT_00982cf8;
    if (DAT_00982c08 == 0) {
      uVar2 = DAT_00982cf0;
    }
    (**(code **)(**(int **)(param_1 + 0x48) + 0xd0))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc04),uVar2);
    iVar1 = FUN_006c86b0();
    (**(code **)(**(int **)(param_1 + 0x48) + 0x78))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc2c),
               _DAT_0089096c / (float)iVar1);
  }
  return;
}

