/* speed.exe 004cb3f0 FUN_004cb3f0; analysis pseudocode, not buildable source.
 * calls 004c71a0 FUN_004c71a0
 */

int * __thiscall FUN_004cb3f0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int local_c [2];
  undefined2 local_4;
  undefined2 local_2;
  
  local_c[1] = 0;
  local_4 = 0;
  local_2 = 0;
  iVar2 = *(int *)(param_1 + 0xc) * 0xc;
  local_c[0] = param_2;
  piVar1 = (int *)FUN_004c71a0(*(int *)(param_1 + 4),*(int *)(param_1 + 4) + iVar2,local_c,0);
  if ((piVar1 != (int *)(*(int *)(param_1 + 4) + iVar2)) && (*piVar1 == param_2)) {
    return piVar1 + 1;
  }
  return (int *)0x0;
}

