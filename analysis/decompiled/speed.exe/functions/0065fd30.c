/* speed.exe 0065fd30 FUN_0065fd30; analysis pseudocode, not buildable source.
 * calls 0065fca0 FUN_0065fca0
 * calls 00466340 FUN_00466340
 */

void __thiscall
FUN_0065fd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a15b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00466340(DAT_00925878,param_1);
  local_4 = 0;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_0065fca0(param_2,param_3,param_4,param_5,param_6);
  }
  *DAT_009259a8 = puVar3;
  puVar1 = puVar3;
  puVar3[1] = DAT_009259a8;
  DAT_009259a8 = puVar1;
  *puVar3 = &DAT_009259a4;
  ExceptionList = local_c;
  return;
}

