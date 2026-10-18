/* speed.exe 0060e250 FUN_0060e250; analysis pseudocode, not buildable source.
 * calls 0060bea0 FUN_0060bea0
 * calls 0060e960 FUN_0060e960
 * calls 00605950 FUN_00605950
 * calls 00607d80 FUN_00607d80
 */

void FUN_0060e250(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (param_2 < 1) {
    piVar1 = (int *)FUN_00605950();
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0xc) + -8 + param_2 * 8);
  }
  iVar4 = *(int *)(param_1 + 8) + -8;
  if (*piVar1 == 5) {
    piVar2 = (int *)FUN_00607d80(piVar1[1],iVar4);
    if (*piVar2 == 0) {
      puVar3 = (undefined4 *)FUN_0060e960(param_1,piVar1,iVar4,1);
      iVar4 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar4 + -8) = *puVar3;
      *(undefined4 *)(iVar4 + -4) = puVar3[1];
      return;
    }
  }
  else {
    piVar2 = (int *)FUN_0060bea0(iVar4,1);
  }
  iVar4 = *(int *)(param_1 + 8);
  *(int *)(iVar4 + -8) = *piVar2;
  *(int *)(iVar4 + -4) = piVar2[1];
  return;
}

