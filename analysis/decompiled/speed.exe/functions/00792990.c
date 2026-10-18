/* speed.exe 00792990 FUN_00792990; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00792990(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 2;
  *param_1 = &PTR_FUN_008b6cfc;
  *(undefined1 *)(param_1 + 1) = 0;
  *puVar1 = puVar1;
  param_1[3] = puVar1;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  return;
}

