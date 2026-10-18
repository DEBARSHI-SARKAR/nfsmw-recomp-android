/* speed.exe 006165a0 FUN_006165a0; analysis pseudocode, not buildable source.
 * calls 00616000 FUN_00616000
 * calls 00607ee0 FUN_00607ee0
 * calls 0060b0f0 FUN_0060b0f0
 * calls 00605950 FUN_00605950
 * calls 00615eb0 FUN_00615eb0
 * calls 007c4b80 FUN_007c4b80
 * calls 0060e3b0 FUN_0060e3b0
 * calls 00607cb0 FUN_00607cb0
 */

int FUN_006165a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_8 [8];
  
  if ((param_2 < 1) && (-10000 < param_2)) {
    param_2 = param_2 + 1 + (*(int *)(param_1 + 8) - *(int *)(param_1 + 0xc) >> 3);
  }
  puVar1 = *(undefined4 **)(param_1 + 8);
  piVar2 = puVar1 + -2;
  if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
    *(int **)(param_1 + 8) = piVar2;
    return -1;
  }
  if (param_2 < 1) {
    iVar4 = FUN_00605950();
  }
  else {
    iVar4 = *(int *)(param_1 + 0xc) + -8 + param_2 * 8;
  }
  puVar3 = (undefined4 *)FUN_00607cb0(*(undefined4 *)(iVar4 + 4),1);
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  piVar2 = *(int **)(param_1 + 8);
  *(int **)(param_1 + 8) = piVar2 + 2;
  if ((piVar2 != (int *)0x0) && (*piVar2 != 3)) {
    FUN_00607ee0(piVar2,local_8);
  }
  iVar4 = FUN_007c4b80();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  if (iVar4 == 0) {
    iVar4 = FUN_00616000(param_1,param_2);
    if (iVar4 < 2) {
      iVar4 = 2;
    }
    iVar4 = iVar4 + 1;
    FUN_00615eb0(param_1,param_2,iVar4);
    FUN_0060e3b0(param_1,param_2,iVar4);
    return iVar4;
  }
  FUN_0060b0f0(param_1,param_2,iVar4);
  FUN_0060e3b0(param_1,param_2,1);
  FUN_0060e3b0(param_1,param_2,iVar4);
  return iVar4;
}

