/* speed.exe 005d5a50 FUN_005d5a50; analysis pseudocode, not buildable source.
 * calls 005d3480 FUN_005d3480
 */

void __thiscall FUN_005d5a50(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_005d3480(&param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_2);
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = param_2;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2 = param_2 + 2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return;
}

