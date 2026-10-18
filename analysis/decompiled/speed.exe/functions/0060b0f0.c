/* speed.exe 0060b0f0 FUN_0060b0f0; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 * calls 00607cb0 FUN_00607cb0
 */

void FUN_0060b0f0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < 1) {
    iVar2 = FUN_00605950();
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
  }
  puVar3 = (undefined4 *)FUN_00607cb0(*(undefined4 *)(iVar2 + 4),param_3);
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
  return;
}

