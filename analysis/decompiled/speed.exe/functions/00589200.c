/* speed.exe 00589200 FUN_00589200; analysis pseudocode, not buildable source.
 * calls 00525050 FUN_00525050
 * calls 005b8190 FUN_005b8190
 * calls 00524cc0 FUN_00524cc0
 * calls 00564bc0 FUN_00564bc0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00589200(int param_1)

{
  int iVar1;
  float fVar2;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  fVar2 = *(float *)(param_1 + 0x38) * _DAT_008933d4 + *(float *)(param_1 + 0x10);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x6c) & 1) == 0) {
      local_10 = *(float *)(param_1 + 0x34);
      if ((*(uint *)(iVar1 + 0x6c) & 2) == 0) {
        local_10 = local_10 * _DAT_008933d4;
      }
      local_10 = local_10 + *(float *)(param_1 + 0xc);
    }
    else {
      local_10 = *(float *)(param_1 + 0xc);
    }
    FUN_00525050(iVar1,local_10,fVar2);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x6c) & 1) == 0) {
      if ((*(uint *)(iVar1 + 0x6c) & 2) != 0) {
        FUN_00564bc0(iVar1,fVar2);
        local_c = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x3c);
        iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x2c);
        local_8 = *(undefined4 *)(iVar1 + 0x20);
        local_4 = *(undefined4 *)(iVar1 + 0x24);
        FUN_005b8190(&local_c,0);
        goto LAB_005892ca;
      }
      fVar2 = *(float *)(param_1 + 0x44);
    }
    else {
      fVar2 = *(float *)(param_1 + 0x3c) * _DAT_008933d4 + *(float *)(param_1 + 0x44);
    }
    FUN_00525050(iVar1,fVar2);
  }
LAB_005892ca:
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_00524cc0(*(int *)(param_1 + 0x24),*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x1c),
                 *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x20));
  }
  return;
}

