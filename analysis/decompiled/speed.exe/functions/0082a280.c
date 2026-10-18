/* speed.exe 0082a280 FUN_0082a280; analysis pseudocode, not buildable source.
 * calls 00829480 FUN_00829480
 * calls 0082cfe0 FUN_0082cfe0
 */

undefined4 * __fastcall FUN_0082a280(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_0082cfe0();
  *param_1 = &PTR_FUN_008c5e08;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  uVar1 = FUN_00829480(0x18);
  param_1[0x3f] = uVar1;
  param_1[9] = uVar1;
  (**(code **)(*DAT_009c29ac + 0xc))(uVar1);
  param_1[0x40] = (uint)*(ushort *)(param_1[0x3f] + 0xc);
  param_1[1] = 0xffffffff;
  return param_1;
}

