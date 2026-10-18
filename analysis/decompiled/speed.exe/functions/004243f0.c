/* speed.exe 004243f0 FUN_004243f0; analysis pseudocode, not buildable source.
 * calls 0076e220 FUN_0076e220
 * calls 00501480 FUN_00501480
 * calls 006f82f0 FUN_006f82f0
 * calls 00770060 FUN_00770060
 * calls 00463ca0 FUN_00463ca0
 * calls 006e9c90 FUN_006e9c90
 */

void __fastcall FUN_004243f0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086808a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00891204;
  param_1[2] = &PTR_LAB_008911fc;
  param_1[0xb] = &PTR_LAB_008911e8;
  param_1[0xe] = &PTR_LAB_008911cc;
  local_4 = 2;
  FUN_00770060();
  FUN_006e9c90(param_1[0x15]);
  iVar1 = param_1[0x19];
  if (iVar1 != 0) {
    FUN_00501480();
    FUN_00463ca0(DAT_00915fb4,iVar1);
  }
  param_1[0x19] = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0076e220();
  DAT_0090d8e4 = 0;
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

