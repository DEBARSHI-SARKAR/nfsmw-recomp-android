/* speed.exe 008450a0 FUN_008450a0; analysis pseudocode, not buildable source.
 * calls 00852fd0 FUN_00852fd0
 * calls 00844fb0 FUN_00844fb0
 * calls 0083e290 FUN_0083e290
 * calls 007c6100 _sprintf
 * calls 0083e2e0 FUN_0083e2e0
 */

void FUN_008450a0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x1834);
  if ((((piVar1 != (int *)0x0) && (*piVar1 != 0)) &&
      (iVar2 = FUN_00852fd0(*piVar1,param_2), iVar2 != 0)) &&
     (iVar3 = FUN_0083e2e0(piVar1[1],iVar2), iVar3 != 0)) {
    if (param_4 == -1) {
      param_4 = *(int *)(iVar3 + 0x14);
    }
    if ((param_3 != *(int *)(iVar3 + 0x10)) || (param_4 != *(int *)(iVar3 + 0x14))) {
      *(int *)(iVar3 + 0x10) = param_3;
      *(int *)(iVar3 + 0x14) = param_4;
      _sprintf((char *)(iVar3 + 0x18),"%d",param_3);
      FUN_0083e290(piVar1[1],iVar2,iVar3);
      FUN_00844fb0(param_1,0,iVar3,0);
    }
  }
  return;
}

