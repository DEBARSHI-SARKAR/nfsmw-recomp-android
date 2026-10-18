/* speed.exe 005982a0 FUN_005982a0; analysis pseudocode, not buildable source.
 * calls 0058f720 FUN_0058f720
 * calls 00586290 FUN_00586290
 * calls 0056c5e0 FUN_0056c5e0
 */

undefined4 * __thiscall FUN_005982a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872d68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a0fe0;
  FUN_0056c5e0();
  param_1[0x9d] = 0xff;
  param_1[0x9e] = 0;
  param_1[0xb] = 0;
  puVar2 = *(undefined4 **)(param_2 + 8);
  puVar3 = param_1 + 0xd;
  for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_0058f720();
  param_1[0x9e] = DAT_00925b14;
  ExceptionList = local_c;
  return param_1;
}

