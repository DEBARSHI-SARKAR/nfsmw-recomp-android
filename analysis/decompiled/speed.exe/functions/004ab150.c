/* speed.exe 004ab150 FUN_004ab150; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 */

void __fastcall FUN_004ab150(undefined4 *param_1)

{
  param_1[4] = 1;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0045a760(DAT_00988e84);
  param_1[3] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  return;
}

