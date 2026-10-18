/* speed.exe 004afb90 FUN_004afb90; analysis pseudocode, not buildable source.
 * calls 004eb610 FUN_004eb610
 */

undefined4 * __fastcall FUN_004afb90(undefined4 *param_1)

{
  FUN_004eb610();
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *param_1 = &PTR_FUN_00896a60;
  *(undefined1 *)((int)param_1 + 0x139) = 1;
  return param_1;
}

