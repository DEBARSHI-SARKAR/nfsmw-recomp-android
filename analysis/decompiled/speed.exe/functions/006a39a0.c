/* speed.exe 006a39a0 FUN_006a39a0; analysis pseudocode, not buildable source.
 * calls 00668070 FUN_00668070
 * calls 00667fc0 FUN_00667fc0
 * calls 005d0370 FUN_005d0370
 * calls 00667e70 FUN_00667e70
 * calls 005d29d0 FUN_005d29d0
 * calls 0066fb40 FUN_0066fb40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006a39a0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087c8bf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar2 = (**(code **)(*(int *)(param_1 + 0x34) + 0x40))();
  fStack_18 = (float)(int)*(short *)(iVar2 + 0x10) * _DAT_00890d60;
  fStack_14 = (float)(int)*(short *)(iVar2 + 0x12) * _DAT_00890d60;
  fStack_10 = (float)(int)*(short *)(iVar2 + 0x14) * _DAT_00890d60;
  fVar1 = fStack_18 * fStack_18 + fStack_14 * fStack_14 + fStack_10 * fStack_10;
  if (fVar1 < _DAT_00890968 != (fVar1 == _DAT_00890968)) {
    iVar2 = *(int *)(param_1 + 0xa0);
    if (iVar2 != 0) {
      FUN_0066fb40();
      FUN_005d0370(iVar2,8,0);
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    ExceptionList = pvStack_c;
    return;
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    iVar2 = FUN_005d29d0(8,0);
    uStack_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_00667e70(*(undefined4 *)(param_1 + 0x3c),0,param_2,&fStack_18,0);
      *(undefined4 *)(param_1 + 0xa0) = uVar3;
      ExceptionList = pvStack_c;
      return;
    }
    *(undefined4 *)(param_1 + 0xa0) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00668070(param_2,&fStack_18,0);
  FUN_00667fc0();
  ExceptionList = pvStack_c;
  return;
}

