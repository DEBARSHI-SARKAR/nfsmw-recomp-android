/* speed.exe 0075f200 FUN_0075f200; analysis pseudocode, not buildable source.
 * calls 007343c0 FUN_007343c0
 * calls 00732e40 FUN_00732e40
 * calls 00733ec0 FUN_00733ec0
 * calls 0075f200 FUN_0075f200
 * calls 0075f1d0 FUN_0075f1d0
 * calls 00732f90 FUN_00732f90
 * calls 0078a3a0 FUN_0078a3a0
 * calls 0074d510 FUN_0074d510
 * calls 007349b0 FUN_007349b0
 * calls 0075db90 FUN_0075db90
 * calls 0078b2c0 FUN_0078b2c0
 * calls 00652ac0 _malloc
 * calls 007ec1c8 FUN_007ec1c8
 * calls 006e8de0 FUN_006e8de0
 * calls 005d29d0 FUN_005d29d0
 * calls 007ec1bd FUN_007ec1bd
 * calls 0078f980 FUN_0078f980
 * calls 006e8d20 FUN_006e8d20
 * calls 00740a30 FUN_00740a30
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0075f200(int param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float local_24;
  int local_20;
  void *local_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0088166d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_006e8d20();
  uVar1 = param_2;
  if ((iVar4 == 3) &&
     (FUN_0078f980(&local_24),
     local_24 < *(float *)(param_1 + 0xeec) == (local_24 == *(float *)(param_1 + 0xeec)))) {
    if ((param_3 & 8) != 0) {
      *(float *)(param_1 + 0xf80) = local_24;
    }
    FUN_007ec1bd();
    if (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0xf7c) + 0x68)) {
      uVar7 = *(int *)(param_1 + 0xf88) + 1;
      uVar7 = (0x1f < (int)uVar7) - 1 & uVar7;
      if (uVar7 == *(uint *)(param_1 + 0xf8c)) {
        FUN_007ec1c8();
        ExceptionList = local_c;
        return;
      }
      *(int *)(param_1 + 0xf7c) = *(int *)(param_1 + 0xf88) * 0x74 + param_1;
      *(uint *)(param_1 + 0xf88) = uVar7;
    }
    fVar10 = (float10)FUN_006e8de0();
    local_1c = (void *)(float)fVar10;
    puVar8 = (undefined4 *)(param_1 + 0xe80);
    puVar9 = *(undefined4 **)(param_1 + 0xf7c);
    for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    if (_DAT_008b2c0c <= (float)local_1c - *(float *)(param_1 + 0xf80)) {
      FUN_00733ec0();
    }
    else {
      FUN_00740a30(local_24);
    }
    uVar3 = FUN_007343c0(local_24,uVar1,param_3);
    param_2 = (void *)CONCAT31(param_2._1_3_,uVar3);
    local_20 = 0;
    FUN_0078a3a0(&local_20,1);
    *(bool *)(param_1 + 0xf9e) = local_20 != 0;
    if (((char)param_2 != *(char *)(param_1 + 0xf9d)) ||
       (_DAT_008b2c0c < (float)local_1c - *(float *)(*(int *)(param_1 + 0xf7c) + 0x6c))) {
      FUN_007349b0(param_1 + 0xe80,0x3e4ccccd);
      *(char *)(param_1 + 0xf9d) = (char)param_2;
    }
    puVar8 = *(undefined4 **)(param_1 + 0xf7c);
    puVar9 = (undefined4 *)(param_1 + 0xe80);
    for (iVar4 = 0x1d; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    iVar4 = FUN_0078b2c0();
    *(int *)(param_1 + 0xf98) = iVar4 - DAT_009b0fc0;
    iVar4 = FUN_00732e40();
    if (1 < iVar4) {
      if (*(int *)(param_1 + 0xf6c) == 0) {
        param_2 = (void *)FUN_005d29d0(0xc,0);
        uStack_4 = 0;
        if (param_2 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0075f1d0();
        }
        uStack_4 = 0xffffffff;
        *(undefined4 *)(param_1 + 0xf6c) = uVar5;
      }
      FUN_00732f90(&param_2,&DAT_009b1710);
      pvVar2 = param_2;
      FUN_00732f90(&param_2,&DAT_009b15cc);
      uVar5 = (&DAT_008b2be0)[(int)param_2];
      local_1c = pvVar2;
      uStack_18 = 0;
      piVar6 = (int *)FUN_0075db90(auStack_14,&local_1c);
      iVar4 = *piVar6;
      if ((char)piVar6[1] != '\0') {
        param_2 = _malloc(0xfa4);
        uStack_4 = 1;
        if (param_2 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0074d510(uVar5);
        }
        uStack_4 = 0xffffffff;
        *(undefined4 *)(iVar4 + 0x10) = uVar5;
      }
      FUN_0075f200(uVar1,param_3);
    }
    FUN_007ec1c8();
  }
  ExceptionList = local_c;
  return;
}

