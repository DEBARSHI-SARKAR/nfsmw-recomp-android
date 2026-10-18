/* speed.exe 00653a40 FUN_00653a40; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_00653a40(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087a018;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a8aac;
  puVar1 = (undefined4 *)param_1[4];
  local_4 = 0;
  if ((puVar1 != param_1 + 5) && (puVar1 != (undefined4 *)0x0)) {
    FUN_005d0370(puVar1,(uint)*(byte *)((int)param_1 + 5) << 2,"Average::pData");
  }
  *param_1 = &PTR_LAB_0089496c;
  ExceptionList = local_c;
  return;
}

