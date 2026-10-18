/* speed.exe 006be460 FUN_006be460; analysis pseudocode, not buildable source.
 */

undefined4 FUN_006be460(int param_1)

{
  uint uVar1;
  
  for (uVar1 = param_1 + 8; uVar1 < (uint)(*(int *)(param_1 + 4) + 8 + param_1);
      uVar1 = uVar1 + 8 + *(int *)(uVar1 + 4)) {
  }
  return 1;
}

