/* speed.exe 006d6aa0 FUN_006d6aa0; analysis pseudocode, not buildable source.
 * calls 006c6450 FUN_006c6450
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006c86c0 FUN_006c86c0
 * calls 006c6300 FUN_006c6300
 * calls 006c86b0 FUN_006c86b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006d6aa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float afStack_74 [3];
  undefined1 auStack_68 [100];
  
  FUN_006c6300(param_1);
  if (*(int *)(*(int *)(param_1 + 0x44) + 0xc7c) != 0) {
    local_a0 = *(undefined4 *)(DAT_009b392c + 0x40);
    local_9c = *(undefined4 *)(DAT_009b392c + 0x44);
    local_98 = *(undefined4 *)(DAT_009b392c + 0x48);
    local_94 = *(undefined4 *)(*(int *)(&DAT_00919648 + *(int *)(DAT_00982a20 + 4) * 0x70) + 0x36a0)
    ;
    (**(code **)(**(int **)(param_1 + 0x48) + 0x88))
              (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc7c),&local_a0
              );
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 0xcf4);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x78))(*(int **)(param_1 + 0x48),iVar1,DAT_008fadc0);
  }
  FUN_006c6450(param_1);
  if (0 < DAT_00901830) {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      if (*(int *)(DAT_00982a20 + 4) == 1) {
        uVar2 = DAT_00982cf8;
        if (DAT_00982c08 == 0) {
          uVar2 = DAT_00982cf0;
        }
        (**(code **)(**(int **)(param_1 + 0x48) + 0xd0))
                  (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc04),uVar2
                  );
        iVar1 = FUN_006c86b0();
        (**(code **)(**(int **)(param_1 + 0x48) + 0x78))
                  (*(int **)(param_1 + 0x48),*(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc2c),
                   _DAT_0089096c / (float)iVar1);
        if ((*(int *)(param_1 + 4) == 0x12) && (0 < *(int *)(param_1 + 0x38))) {
          iVar1 = FUN_006c86b0();
          fVar3 = _DAT_008933d4 / (float)iVar1 + _DAT_008933d4;
          iVar1 = FUN_006c86c0();
          uStack_a8 = 0x3f000000;
          uStack_a4 = 0;
          local_a0 = 0;
          local_9c = 0;
          local_98 = 0;
          local_94 = 0xbf000000;
          uStack_90 = 0;
          uStack_8c = 0;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_80 = 0x3f800000;
          uStack_7c = 0;
          afStack_74[1] = 0.0;
          afStack_74[2] = 1.0;
          afStack_74[0] = _DAT_008933d4 / (float)iVar1 + _DAT_008933d4;
          fStack_78 = fVar3;
          D3DXMatrixMultiply(auStack_68,DAT_00919c70 + 0x40,&uStack_a8);
          (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                    (*(int **)(DAT_00982c80 + 0x48),
                     *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xc54),afStack_74);
        }
      }
    }
  }
  return;
}

