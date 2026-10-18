/* speed.exe 00622860 FUN_00622860; analysis pseudocode, not buildable source.
 * calls 00469b90 FUN_00469b90
 * calls 0065faf0 FUN_0065faf0
 * calls 00454640 FUN_00454640
 * calls 005cc240 FUN_005cc240
 */

void __fastcall FUN_00622860(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876fc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6e5c;
  local_4 = 0;
  if ((param_1[0x10] == 0) && (param_1[0xf] != 0)) {
    uVar1 = FUN_00454640(param_1[0xf]);
    param_1[0x10] = uVar1;
  }
  uVar1 = FUN_005cc240("MomentStrm");
  iVar2 = FUN_00469b90(param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],param_1[7],param_1[8],
                       param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],param_1[0xe],
                       param_1[0x10]);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  FUN_0065faf0();
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

