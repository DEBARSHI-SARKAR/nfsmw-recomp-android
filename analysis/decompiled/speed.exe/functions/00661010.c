/* speed.exe 00661010 FUN_00661010; analysis pseudocode, not buildable source.
 * calls 006609f0 FUN_006609f0
 * calls 00466340 FUN_00466340
 */

void __thiscall
FUN_00661010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a1db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00466340(DAT_00925900,param_1);
  local_4 = 0;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006609f0(param_2,param_3,param_4,param_5,param_6,param_7,param_9);
  }
  puVar3[0xd] = param_8;
  puVar3[0xe] = 1;
  *DAT_00925b20 = puVar3;
  puVar1 = puVar3;
  puVar3[1] = DAT_00925b20;
  DAT_00925b20 = puVar1;
  *puVar3 = &DAT_00925b1c;
  ExceptionList = local_c;
  return;
}

