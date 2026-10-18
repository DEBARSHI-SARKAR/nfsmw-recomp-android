/* speed.exe 0060b140 FUN_0060b140; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 * calls 00607de0 FUN_00607de0
 */

void FUN_0060b140(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < 1) {
    iVar2 = FUN_00605950();
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
  }
  iVar1 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)FUN_00607de0(param_1,*(undefined4 *)(iVar2 + 4),iVar1 + -0x10);
  *puVar3 = *(undefined4 *)(iVar1 + -8);
  puVar3[1] = *(undefined4 *)(iVar1 + -4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -0x10;
  return;
}

