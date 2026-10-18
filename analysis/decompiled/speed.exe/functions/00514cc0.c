/* speed.exe 00514cc0 FUN_00514cc0; analysis pseudocode, not buildable source.
 * calls 00514cc0 FUN_00514cc0
 */

void FUN_00514cc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != 0) && ((*(uint *)(param_1 + 0x1c) & 0x40) == 0)) &&
     (*(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe | 0x2400000,
     *(int *)(param_1 + 0x18) == 5)) {
    iVar1 = *(int *)(param_1 + 100);
    iVar2 = *(int *)(param_1 + 0x60);
    if (0 < iVar2) {
      do {
        FUN_00514cc0(iVar1);
        iVar1 = *(int *)(iVar1 + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

