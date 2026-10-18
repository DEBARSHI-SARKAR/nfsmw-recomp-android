/* speed.exe 00546510 FUN_00546510; analysis pseudocode, not buildable source.
 * calls 0056db00 FUN_0056db00
 * calls 00586290 FUN_00586290
 * calls 005252d0 FUN_005252d0
 */

undefined4 * __thiscall FUN_00546510(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086ffd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089e5b4;
  iVar1 = *(int *)(param_2 + 8);
  local_4 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xb] = iVar1;
  if (iVar1 == 2) {
    uVar2 = param_1[4];
    uVar3 = FUN_0056db00();
    FUN_005252d0(uVar2,0x3cc94d6,&DAT_0089d398,uVar3);
  }
  ExceptionList = local_c;
  return param_1;
}

