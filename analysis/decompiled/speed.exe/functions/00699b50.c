/* speed.exe 00699b50 FUN_00699b50; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00627400 FUN_00627400
 * calls 006211d0 FUN_006211d0
 * calls 0068a2d0 FUN_0068a2d0
 * calls 006e9660 FUN_006e9660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00699b50(int param_1,int param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 auStack_164 [30];
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float *pfStack_e4;
  undefined4 uStack_e0;
  undefined1 *puStack_dc;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  undefined4 *puStack_d0;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [20];
  undefined1 local_8c [104];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c240;
  pvStack_c = ExceptionList;
  iVar3 = **(int **)(param_1 + 0x14);
  ExceptionList = &pvStack_c;
  *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x1c) | 4;
  puStack_d0 = *(undefined4 **)(param_2 + 0x40);
  puStack_d4 = (undefined1 *)0x699b8e;
  FUN_006e9660();
  local_4 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  if (_DAT_00890968 < *(float *)(param_2 + 0x1c)) {
    fVar2 = *(float *)(param_2 + 0x1c);
    fVar1 = *(float *)(param_2 + 0x14);
    local_b0 = *(float *)(param_2 + 0x18);
    local_b8 = fVar2 * *(float *)(param_2 + 0x10);
    *(float *)(iVar3 + 0x10) = local_b8 + *(float *)(iVar3 + 0x10);
    *(float *)(iVar3 + 0x14) = fVar1 * fVar2 + *(float *)(iVar3 + 0x14);
    *(float *)(iVar3 + 0x18) = local_b0 * fVar2 + *(float *)(iVar3 + 0x18);
  }
  puStack_d0 = (undefined4 *)0x699c00;
  FUN_0068a2d0();
  local_b8 = *(float *)(param_2 + 0x10);
  uStack_d8 = *(undefined4 *)(param_4 + 0x48);
  local_b4 = *(undefined4 *)(param_2 + 0x14);
  local_b0 = *(float *)(param_2 + 0x18);
  puStack_d0 = &local_ac;
  puStack_d4 = local_a0;
  puStack_dc = local_8c;
  uStack_e0 = param_3;
  pfStack_e4 = &local_b8;
  uStack_e8 = 0x699c44;
  fVar6 = (float10)(**(code **)(*(int *)(param_1 + -100) + 0x44))();
  if ((float10)_DAT_00890968 < fVar6) {
    uStack_e8 = 0x88;
    uStack_ec = 0x699c5b;
    puStack_d4 = (undefined1 *)FUN_00627400();
    uStack_1c = CONCAT31(uStack_1c._1_3_,1);
    if (puStack_d4 != (undefined1 *)0x0) {
      puVar4 = &local_a4;
      puVar5 = auStack_164;
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_006211d0();
    }
  }
  uStack_1c = 0xffffffff;
  uStack_e8 = 0x699c9f;
  FUN_0045a430();
  ExceptionList = pvStack_24;
  return 1;
}

