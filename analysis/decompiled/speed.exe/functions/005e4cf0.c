/* speed.exe 005e4cf0 FUN_005e4cf0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 005e2580 FUN_005e2580
 * calls 004647c0 FUN_004647c0
 * calls 004549b0 FUN_004549b0
 */

undefined4 __fastcall FUN_005e4cf0(int param_1)

{
  undefined4 uVar1;
  int local_50;
  int local_3c;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875170;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(*(undefined4 *)(param_1 + 0x11c),0,0);
  local_4 = 0;
  if (local_50 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x11c);
    local_4 = 0xffffffff;
    FUN_0045a430();
    ExceptionList = local_c;
    return uVar1;
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10c);
  }
  FUN_005e2580(uVar1,0,0);
  local_4._0_1_ = 1;
  if (local_3c == 0) {
    FUN_004647c0(local_2c,"career_start_%s",DAT_009a3a20 + 0x40);
    uVar1 = FUN_004549b0(local_2c);
    *(undefined4 *)(param_1 + 0x108) = uVar1;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return uVar1;
}

