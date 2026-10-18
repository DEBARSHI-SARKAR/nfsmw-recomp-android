/* speed.exe 0047af20 FUN_0047af20; analysis pseudocode, not buildable source.
 * calls 0046ba20 FUN_0046ba20
 * calls 00470890 FUN_00470890
 * calls 00477250 FUN_00477250
 */

undefined4 * __thiscall
FUN_0047af20(undefined4 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a488;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470890(param_2,0x12);
  iVar1 = param_1[7];
  param_1[0x20] = param_3;
  *param_1 = &PTR_LAB_00894ee0;
  *(undefined1 *)(iVar1 + 0x2a0) = 1;
  local_4 = 0;
  *(undefined4 *)(iVar1 + 0x2ac) = DAT_008f82f4;
  FUN_0046ba20();
  if (param_4 != '\0') {
    param_1[0x21] = -(float)param_1[0x21];
  }
  FUN_00477250();
  ExceptionList = local_c;
  return param_1;
}

