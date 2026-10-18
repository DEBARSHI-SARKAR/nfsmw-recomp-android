/* speed.exe 007891b0 FUN_007891b0; analysis pseudocode, not buildable source.
 * calls 00772030 FUN_00772030
 */

undefined4 * __fastcall FUN_007891b0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_008b5d9c;
  iVar1 = FUN_00772030();
  param_1[2] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)(param_1[2] + 4) = param_1[2];
  *(undefined4 *)param_1[2] = param_1[2];
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[3] = 0;
  return param_1;
}

