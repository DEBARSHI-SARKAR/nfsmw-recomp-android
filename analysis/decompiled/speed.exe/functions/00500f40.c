/* speed.exe 00500f40 FUN_00500f40; analysis pseudocode, not buildable source.
 * calls 00500b50 FUN_00500b50
 * calls 006cb2a0 FUN_006cb2a0
 * calls 004fb210 FUN_004fb210
 * calls 004fb530 FUN_004fb530
 */

void FUN_00500f40(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) &&
      (((param_2 != 0 || (param_2 = FUN_00500b50(param_1), param_2 != 0)) &&
       (*(char *)(param_2 + 0xe) == '\0')))) &&
     (((*(int *)(param_2 + 0x24) != 0 &&
       (iVar1 = FUN_004fb210(param_1,*(int *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),0,0x18
                            ), iVar1 != 0)) &&
      (*(short *)(iVar1 + 0x12) = *(short *)(iVar1 + 0x12) + -1, *(short *)(iVar1 + 0x12) == 0)))) {
    FUN_006cb2a0();
    if ((*(byte *)(iVar1 + 0x11) & 0x10) != 0) {
      *(byte *)(iVar1 + 0x11) = *(byte *)(iVar1 + 0x11) | 0x20;
      return;
    }
    FUN_004fb530(param_2,iVar1);
  }
  return;
}

