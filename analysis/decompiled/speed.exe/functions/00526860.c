/* speed.exe 00526860 FUN_00526860; analysis pseudocode, not buildable source.
 * calls 007f3ca0 FUN_007f3ca0
 * calls 00518df0 FUN_00518df0
 */

void __fastcall FUN_00526860(int param_1)

{
  if (*(char *)(param_1 + 0x25) == '\0') {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *DAT_0091cae0 = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  FUN_007f3ca0(0,0xffffffff);
  FUN_00518df0();
  return;
}

