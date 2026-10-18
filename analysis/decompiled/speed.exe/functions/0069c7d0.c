/* speed.exe 0069c7d0 FUN_0069c7d0; analysis pseudocode, not buildable source.
 * calls 00625760 FUN_00625760
 * calls 00627400 FUN_00627400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069c7d0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087c45f;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar4 = 0;
    pfVar3 = (float *)(param_1 + 0xc4);
    ExceptionList = &local_c;
    do {
      local_4 = 0xffffffff;
      if (((*(char *)(param_1 + 0xd4 + uVar4) == '\x01') && (_DAT_00890968 < *pfVar3)) &&
         (fVar1 = *pfVar3, *pfVar3 = fVar1 - param_2, fVar1 - param_2 < _DAT_00890968)) {
        *(undefined1 *)(param_1 + 0xd4 + uVar4) = 2;
        *pfVar3 = 0.0;
        iVar2 = FUN_00627400(0x10);
        local_4 = 0;
        if (iVar2 != 0) {
          FUN_00625760(*(undefined4 *)(*(int *)(param_1 + 0x34) + 8),uVar4);
        }
      }
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar4 < 4);
  }
  if (((_DAT_00890968 < *(float *)(param_1 + 0x68)) &&
      (_DAT_00890968 < *(float *)(*(int *)(param_1 + 0x78) + 0x50))) &&
     (param_2 = param_2 / *(float *)(*(int *)(param_1 + 0x78) + 0x50),
     param_2 < *(float *)(param_1 + 0x68))) {
    *(float *)(param_1 + 0x68) = *(float *)(param_1 + 0x68) - param_2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  ExceptionList = local_c;
  return;
}

