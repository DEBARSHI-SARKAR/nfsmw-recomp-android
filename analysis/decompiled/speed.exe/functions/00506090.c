/* speed.exe 00506090 FUN_00506090; analysis pseudocode, not buildable source.
 * calls 00502d40 FUN_00502d40
 */

void __thiscall FUN_00506090(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_4) {
    do {
      FUN_00502d40(param_2,param_3,*(int *)(*(int *)(param_1 + 0x14) + 0x74) + iVar1 * 8);
      iVar1 = iVar1 + 1;
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x7c;
    } while (iVar1 < param_4);
  }
  return;
}

