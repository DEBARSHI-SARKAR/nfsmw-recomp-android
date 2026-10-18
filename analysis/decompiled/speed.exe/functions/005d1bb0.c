/* speed.exe 005d1bb0 FUN_005d1bb0; analysis pseudocode, not buildable source.
 */

void FUN_005d1bb0(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    uVar1 = *(uint *)(param_1 + iVar2 * 8);
    if (param_4 <= uVar1) break;
    *(uint *)(param_1 + param_2 * 8) = uVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 8) = *(undefined4 *)(param_1 + 4 + iVar2 * 8);
    param_2 = iVar2;
  }
  *(uint *)(param_1 + param_2 * 8) = param_4;
  *(undefined4 *)(param_1 + 4 + param_2 * 8) = param_5;
  return;
}

