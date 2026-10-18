/* speed.exe 007a4df0 FUN_007a4df0; analysis pseudocode, not buildable source.
 * calls 007a4b80 FUN_007a4b80
 * calls 007a4d10 FUN_007a4d10
 * calls 007a4cd0 FUN_007a4cd0
 */

undefined4 FUN_007a4df0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x1c) == '\0') {
      iVar2 = FUN_007a4b80(*(undefined4 *)(param_1 + 0x10));
      if (iVar2 == *(int *)(param_1 + 0xc)) {
        return 1;
      }
    }
    else {
      if (*(char *)(param_1 + 0x28) != '\0') {
        uVar1 = FUN_007a4cd0(*(undefined4 *)(param_1 + 0x18));
        return uVar1;
      }
      iVar2 = FUN_007a4d10(*(undefined4 *)(param_1 + 0x18));
      if (*(int *)(param_1 + 0x14) == iVar2) {
        return 1;
      }
    }
  }
  return 0;
}

