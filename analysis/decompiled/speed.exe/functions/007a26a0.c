/* speed.exe 007a26a0 FUN_007a26a0; analysis pseudocode, not buildable source.
 * calls 00739a70 FUN_00739a70
 */

int __fastcall FUN_007a26a0(int param_1)

{
  FUN_00739a70(0xffffffff,0,0,0);
  FUN_00739a70(0xffffffff,0,0,0);
  *(undefined1 *)(param_1 + 0x620) = 0;
  *(undefined1 *)(param_1 + 0x621) = 0;
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined1 *)(param_1 + 0x62c) = 0;
  *(undefined1 *)(param_1 + 0x62d) = 1;
  return param_1;
}

