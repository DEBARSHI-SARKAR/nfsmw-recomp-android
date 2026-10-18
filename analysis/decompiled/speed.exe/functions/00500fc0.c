/* speed.exe 00500fc0 FUN_00500fc0; analysis pseudocode, not buildable source.
 * calls 00500b50 FUN_00500b50
 * calls 006cb2a0 FUN_006cb2a0
 * calls 004fb210 FUN_004fb210
 * calls 004fb530 FUN_004fb530
 */

void FUN_00500fc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_2) {
    do {
      iVar2 = *(int *)(param_1 + iVar3 * 4);
      if ((((iVar2 != 0) && (iVar1 = FUN_00500b50(iVar2), iVar1 != 0)) &&
          (*(char *)(iVar1 + 0xe) == '\0')) &&
         (((*(int *)(iVar1 + 0x24) != 0 &&
           (iVar2 = FUN_004fb210(iVar2,*(int *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x28),0,0x18),
           iVar2 != 0)) &&
          (*(short *)(iVar2 + 0x12) = *(short *)(iVar2 + 0x12) + -1, *(short *)(iVar2 + 0x12) == 0))
         )) {
        FUN_006cb2a0();
        if ((*(byte *)(iVar2 + 0x11) & 0x10) == 0) {
          FUN_004fb530(iVar1,iVar2);
        }
        else {
          *(byte *)(iVar2 + 0x11) = *(byte *)(iVar2 + 0x11) | 0x20;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_2);
  }
  return;
}

