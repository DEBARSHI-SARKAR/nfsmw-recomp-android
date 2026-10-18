/* speed.exe 004cb560 FUN_004cb560; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004cb560(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar3 = param_3;
  puVar2 = param_3;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3 = puVar3 + 2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  *param_2 = param_3;
  return;
}

