/* speed.exe 006439a0 FUN_006439a0; analysis pseudocode, not buildable source.
 * calls 0063ff30 FUN_0063ff30
 */

int * __thiscall FUN_006439a0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *param_1;
  piVar1 = param_1 + 2;
  piVar3 = (int *)FUN_0063ff30(piVar1,piVar1 + iVar2,&param_2,0);
  if ((piVar3 < piVar1 + iVar2) && (*piVar3 == param_2)) {
    return param_1 + iVar2 + 2 + ((int)piVar3 - (int)piVar1 >> 2) * 2;
  }
  return (int *)0x0;
}

