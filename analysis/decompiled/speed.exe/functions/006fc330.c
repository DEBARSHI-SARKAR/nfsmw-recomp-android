/* speed.exe 006fc330 FUN_006fc330; analysis pseudocode, not buildable source.
 * calls 006fb150 FUN_006fb150
 * calls 006fb050 FUN_006fb050
 */

int __fastcall FUN_006fc330(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087f5ab;
  local_c = ExceptionList;
  DAT_00988ecc = param_1;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  local_4 = 2;
  FUN_006fb050(0xa0);
  FUN_006fb150(0x100);
  ExceptionList = local_c;
  return param_1;
}

