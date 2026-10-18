/* speed.exe 006442e0 FUN_006442e0; analysis pseudocode, not buildable source.
 * calls 0063ff30 FUN_0063ff30
 * calls 00634130 FUN_00634130
 */

undefined4 __thiscall FUN_006442e0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar4 = param_2;
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    iVar1 = iVar3 + 0x10;
    piVar2 = (int *)(iVar1 + *(int *)(iVar3 + 4) * 4);
    piVar5 = (int *)FUN_0063ff30(iVar1,piVar2,&param_2,0);
    if ((piVar5 < piVar2) && (*piVar5 == iVar4)) {
      uVar6 = (int)piVar5 - iVar1 >> 2;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if (uVar6 < *(uint *)(iVar3 + 4)) {
      FUN_00634130(1,uVar6,param_3);
      return 1;
    }
  }
  return 0;
}

