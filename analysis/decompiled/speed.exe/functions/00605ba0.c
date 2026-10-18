/* speed.exe 00605ba0 FUN_00605ba0; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 */

void FUN_00605ba0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 < 1) {
    puVar2 = (undefined4 *)FUN_00605950();
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

