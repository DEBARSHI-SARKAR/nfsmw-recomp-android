/* speed.exe 006717f0 FUN_006717f0; analysis pseudocode, not buildable source.
 * calls 006ee860 FUN_006ee860
 * calls 006688f0 FUN_006688f0
 * calls 006269b0 FUN_006269b0
 * calls 00454810 FUN_00454810
 */

undefined4 * __thiscall FUN_006717f0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a888;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006ee860(param_3 + 1);
  *param_1 = &PTR_FUN_00890f28;
  param_1[2] = &PTR_LAB_00890f20;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  param_1[0xc] = *(undefined4 *)(param_2 + 4);
  local_4 = 0;
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 4) + 0x2c;
  }
  param_1[0xd] = iVar2;
  param_1[0xe] = **(undefined4 **)(param_2 + 0xc);
  param_1[0xf] = **(undefined4 **)(param_2 + 8);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  (**(code **)(*(int *)(*(int *)(param_2 + 4) + 0x2c) + 0x44))();
  uVar1 = FUN_006688f0();
  uVar3 = param_1[0x10];
  while( true ) {
    if (uVar1 <= uVar3) {
      ExceptionList = pvStack_c;
      return param_1;
    }
    iVar2 = FUN_00454810(0x104e9d16,param_1[0x10]);
    if (iVar2 == 0) {
      iVar2 = FUN_006269b0(0x10);
    }
    if (*(int *)(iVar2 + 8) == param_1[0xe]) break;
    uVar3 = param_1[0x10] + 1;
    param_1[0x10] = uVar3;
  }
  ExceptionList = pvStack_c;
  return param_1;
}

