/* speed.exe 006d1220 FUN_006d1220; analysis pseudocode, not buildable source.
 */

void FUN_006d1220(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0xc);
    iVar2 = 0;
    if (0 < *(int *)(iVar1 + 0x10)) {
      iVar3 = 0;
      do {
        *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x34 + iVar3) = DAT_0093decc;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x68;
      } while (iVar2 < *(int *)(iVar1 + 0x10));
    }
  }
  return;
}

