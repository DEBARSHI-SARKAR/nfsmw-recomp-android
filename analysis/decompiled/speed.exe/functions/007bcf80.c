/* speed.exe 007bcf80 FUN_007bcf80; analysis pseudocode, not buildable source.
 * calls 00591e90 FUN_00591e90
 * calls 00544dd0 FUN_00544dd0
 */

void __fastcall FUN_007bcf80(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008836d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7e84;
  local_4 = 1;
  iVar1 = FUN_00591e90("GarageMain.fng");
  *(undefined4 *)(iVar1 + 0x88) = 0xffffffff;
  local_4 = 0xffffffff;
  param_1[0x55] = &PTR_FUN_008b7248;
  param_1[0x59] = &PTR_LAB_008b7244;
  FUN_00544dd0();
  ExceptionList = local_c;
  return;
}

