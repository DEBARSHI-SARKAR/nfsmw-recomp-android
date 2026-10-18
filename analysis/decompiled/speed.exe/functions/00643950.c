/* speed.exe 00643950 FUN_00643950; analysis pseudocode, not buildable source.
 * calls 0063ff30 FUN_0063ff30
 */

undefined4 __thiscall FUN_00643950(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar1 = param_1 + 0xc;
  piVar2 = (int *)(iVar1 + iVar3 * 4);
  piVar4 = (int *)FUN_0063ff30(iVar1,piVar2,&param_2,0);
  if ((piVar4 < piVar2) && (*piVar4 == param_2)) {
    return *(undefined4 *)(param_1 + 0xc + (((int)piVar4 - iVar1 >> 2) + iVar3) * 4);
  }
  return 0;
}

