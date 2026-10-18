/* speed.exe 006454d0 FUN_006454d0; analysis pseudocode, not buildable source.
 * calls 0063ff30 FUN_0063ff30
 */

int __thiscall FUN_006454d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = param_1 + 8;
  piVar2 = (int *)(iVar1 + *(int *)(param_1 + 4) * 4);
  piVar3 = (int *)FUN_0063ff30(iVar1,piVar2,&param_2,0);
  if ((piVar3 < piVar2) && (*piVar3 == param_2)) {
    return (int)piVar3 - iVar1 >> 2;
  }
  return -1;
}

