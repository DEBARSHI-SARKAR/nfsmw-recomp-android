/* speed.exe 00464d30 FUN_00464d30; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00464d30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 1;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  *param_1 = 1;
  return;
}

