/* speed.exe 007239b0 FUN_007239b0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_007239b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  param_1[10] = 0;
  if (0 < param_1[1]) {
    do {
      iVar3 = *param_1 + iVar1;
      if (*(int *)(*param_1 + 0xc + iVar1) == 1) {
        FUN_004655f0(*(undefined4 *)(iVar3 + 0x4c));
        *(undefined4 *)(iVar3 + 0x50) = 0;
        *(undefined4 *)(iVar3 + 0x4c) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x5c;
    } while (iVar2 < param_1[1]);
  }
  return;
}

