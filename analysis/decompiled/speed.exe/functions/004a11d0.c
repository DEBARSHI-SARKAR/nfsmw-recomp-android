/* speed.exe 004a11d0 FUN_004a11d0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_004a11d0(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_0086aeb8;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00895df0;
  local_4 = 0;
  if (param_1[4] != 0) {
    uVar1 = (uint)*(ushort *)(param_1[3] + 8);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      (**(code **)(*DAT_009117f4 + 0x2c))(*(undefined4 *)(param_1[4] + uVar1 * 4));
    }
    (**(code **)(*DAT_009117f4 + 0x18))(param_1[4]);
  }
  *param_1 = &PTR_LAB_00895520;
  ExceptionList = local_c;
  return;
}

