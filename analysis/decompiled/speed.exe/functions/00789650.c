/* speed.exe 00789650 FUN_00789650; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00789420 FUN_00789420
 * calls 007890c0 FUN_007890c0
 * calls 00722460 FUN_00722460
 * calls 00722450 FUN_00722450
 * calls 0076ceb0 FUN_0076ceb0
 * calls 00771120 FUN_00771120
 * calls 0045e1a0 FUN_0045e1a0
 * calls 007839b0 FUN_007839b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00789650(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _malloc(0x3c);
  if (param_1 == 0) {
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      DAT_009b3890 = 0;
    }
    else {
      DAT_009b3890 = FUN_00789420();
    }
    local_4 = 0xffffffff;
    FUN_007890c0();
    FUN_0076ceb0(0);
    FUN_00771120();
    ExceptionList = local_c;
    return;
  }
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    DAT_009b3890 = 0;
  }
  else {
    DAT_009b3890 = FUN_00789420();
  }
  local_4 = 0xffffffff;
  if (param_2 == 0) {
    *(undefined4 *)(DAT_009b3890 + 0x34) = 0;
    _DAT_009b389c = 0;
    _DAT_009b3898 = 0;
  }
  FUN_007890c0();
  FUN_0076ceb0(param_1);
  iVar2 = FUN_00722450();
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    iVar3 = FUN_00722460(iVar2);
    puVar5 = (undefined4 *)(iVar3 + 0x10);
    puVar6 = local_4c;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_0045e1a0(local_4c,(undefined4 *)(iVar3 + 0x10));
    local_58 = ABS(-*(float *)(iVar3 + 0x54));
    local_54 = ABS(*(float *)(iVar3 + 0x58));
    local_50 = ABS(*(float *)(iVar3 + 0x50));
    FUN_007839b0(&local_58,local_4c,0);
  }
  ExceptionList = local_c;
  return;
}

