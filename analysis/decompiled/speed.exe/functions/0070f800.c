/* speed.exe 0070f800 FUN_0070f800; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 * calls 00705390 FUN_00705390
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070f800(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087fd73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b259c;
  local_4 = 1;
  FUN_00705390();
  if (param_1[0x24] != 0) {
    FUN_00664cc0(param_1[0x24]);
  }
  if (param_1[0x26] != 0) {
    FUN_00664cc0(param_1[0x26]);
  }
  if (param_1[0x25] != 0) {
    FUN_00664cc0(param_1[0x25]);
  }
  if (param_1[0x27] != 0) {
    FUN_00664cc0(param_1[0x27]);
  }
  local_4 = local_4 & 0xffffff00;
  param_1[4] = &PTR_LAB_008967fc;
  FUN_00705390();
  if (param_1[6] != 0) {
    FUN_005d0370(param_1[6],0x18,0);
  }
  param_1[6] = 0;
  *param_1 = &PTR_LAB_008b1e98;
  ExceptionList = local_c;
  return;
}

