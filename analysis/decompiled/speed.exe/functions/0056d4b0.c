/* speed.exe 0056d4b0 FUN_0056d4b0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_0056d4b0(int param_1,int param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)(*(char *)(param_1 + 7) != '\0');
  iVar2 = *(int *)(param_1 + 8);
  if (param_3 != '\0') {
    iVar2 = 0;
    uVar1 = 1;
  }
  if (param_2 != 0) {
    if (param_2 != 1) {
      return 0;
    }
    return *(undefined4 *)(&UNK_0089f6ac + (uVar1 + iVar2 * 2) * 4);
  }
  return *(undefined4 *)(&DAT_0089f6d4 + (uVar1 + iVar2 * 2) * 4);
}

