/* speed.exe 0060e3b0 FUN_0060e3b0; analysis pseudocode, not buildable source.
 * calls 00605950 FUN_00605950
 * calls 0060bd50 FUN_0060bd50
 * calls 00607cb0 FUN_00607cb0
 */

void FUN_0060e3b0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  float local_4;
  
  if (param_2 < 1) {
    iVar2 = FUN_00605950();
  }
  else {
    iVar2 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
  }
  uVar1 = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 8);
  puVar3 = (undefined4 *)FUN_00607cb0(uVar1,param_3);
  if (puVar3 == &DAT_008a3c5c) {
    local_4 = (float)param_3;
    local_8 = 3;
    puVar3 = (undefined4 *)FUN_0060bd50(param_1,uVar1,&local_8);
  }
  *puVar3 = *(undefined4 *)(iVar2 + -8);
  puVar3[1] = *(undefined4 *)(iVar2 + -4);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return;
}

