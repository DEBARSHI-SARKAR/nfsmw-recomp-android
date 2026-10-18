/* speed.exe 007efe53 FUN_007efe53; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007efe53(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)*param_1;
  while ((puVar2 != (undefined4 *)0x0 &&
         (puVar1 = (undefined4 *)*puVar2, puVar1 != (undefined4 *)0x0))) {
    *puVar2 = 0;
    puVar2 = puVar1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  return;
}

