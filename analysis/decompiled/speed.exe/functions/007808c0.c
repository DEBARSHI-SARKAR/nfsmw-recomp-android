/* speed.exe 007808c0 FUN_007808c0; analysis pseudocode, not buildable source.
 * calls 0077c7c0 FUN_0077c7c0
 * calls 0077da30 FUN_0077da30
 */

void __thiscall FUN_007808c0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x28;
  }
  if (param_2 <= uVar1) {
    if ((iVar2 != 0) && (param_2 < (uint)((*(int *)(param_1 + 8) - iVar2) / 0x28))) {
      FUN_0077c7c0(&param_2,iVar2 + param_2 * 0x28,*(int *)(param_1 + 8));
    }
    return;
  }
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(param_1 + 8) - iVar2) / 0x28;
  }
  FUN_0077da30(*(undefined4 *)(param_1 + 8),param_2 - iVar2,&stack0x00000008);
  return;
}

