/* speed.exe 007265e0 FUN_007265e0; analysis pseudocode, not buildable source.
 */

void FUN_007265e0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    iVar1 = *(int *)(param_1 + iVar2 * 4);
    if (param_4 <= iVar1) break;
    *(int *)(param_1 + param_2 * 4) = iVar1;
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(int *)(param_1 + param_2 * 4) = param_4;
  return;
}

