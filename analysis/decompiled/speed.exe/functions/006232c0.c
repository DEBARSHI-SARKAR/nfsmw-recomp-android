/* speed.exe 006232c0 FUN_006232c0; analysis pseudocode, not buildable source.
 * calls 006f4430 FUN_006f4430
 * calls 00454640 FUN_00454640
 * calls 00455fd0 FUN_00455fd0
 */

void __fastcall FUN_006232c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008770c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7010;
  local_4 = 0;
  if (param_1[2] != 0) {
    uVar1 = FUN_00454640(param_1[2]);
    iVar2 = FUN_00455fd0(0xebcee74c,uVar1);
    if (iVar2 != 0) {
      local_20 = param_1[8];
      local_1c = param_1[6];
      local_24 = -(float)param_1[7];
      local_18 = -(float)param_1[4];
      local_14 = param_1[5];
      local_10 = param_1[3];
      FUN_006f4430(iVar2,&local_18,&local_24,0,0,0,0);
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

