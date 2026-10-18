/* speed.exe 006efd10 FUN_006efd10; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_006efd10(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005d29d0(0xc,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
  }
  return;
}

