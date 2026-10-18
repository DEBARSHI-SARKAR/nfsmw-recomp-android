/* speed.exe 005e2440 FUN_005e2440; analysis pseudocode, not buildable source.
 */

void FUN_005e2440(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(uint *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    uVar1 = *(uint *)(param_1 + iVar2 * 4);
    if (param_4 <= uVar1) break;
    *(uint *)(param_1 + param_2 * 4) = uVar1;
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(uint *)(param_1 + param_2 * 4) = param_4;
  return;
}

