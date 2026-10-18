/* speed.exe 0054ccf0 FUN_0054ccf0; analysis pseudocode, not buildable source.
 * calls 0078c940 FUN_0078c940
 * calls 00586290 FUN_00586290
 * calls 00796d30 FUN_00796d30
 * calls 0078c730 FUN_0078c730
 * calls 005400b0 FUN_005400b0
 * calls 007992f0 FUN_007992f0
 */

undefined4 * __thiscall FUN_0054ccf0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008705c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  *param_1 = &PTR_FUN_0089b334;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  puVar3 = &DAT_0091c39c;
  local_4 = 0;
  param_1[0xf] = 0;
  FUN_0078c730(&DAT_0091c39c);
  uVar1 = FUN_0078c940(puVar3);
  uVar2 = 0;
  puVar3 = &DAT_0091c39c;
  param_1[0xd] = uVar1;
  param_1[0xf] = 0;
  puVar4 = param_1;
  FUN_00796d30(&DAT_0091c39c,0,param_1);
  FUN_007992f0(puVar3,uVar2,puVar4);
  FUN_005400b0();
  ExceptionList = local_c;
  return param_1;
}

