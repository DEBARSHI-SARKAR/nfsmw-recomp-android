/* speed.exe 005bc160 FUN_005bc160; analysis pseudocode, not buildable source.
 * calls 005b7c30 FUN_005b7c30
 */

void __thiscall FUN_005bc160(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x4c); (iVar1 != 0 && (*(int *)(iVar1 + 0x30) != param_2));
      iVar1 = *(int *)(iVar1 + 4)) {
  }
  if ((param_3 != '\0') || (iVar1 != *(int *)(param_1 + 0x54))) {
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 != 0) {
      FUN_005b7c30();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x10) = 0;
  }
  return;
}

