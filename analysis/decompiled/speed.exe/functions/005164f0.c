/* speed.exe 005164f0 FUN_005164f0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

undefined4 FUN_005164f0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_3 + 0x10);
    do {
      if (puVar1[-2] == 4) {
        FUN_004655f0(*puVar1);
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 1;
}

