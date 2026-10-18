/* speed.exe 007f1a47 FUN_007f1a47; analysis pseudocode, not buildable source.
 */

int __fastcall FUN_007f1a47(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x18) != 0) {
      do {
        if (*(char *)(iVar1 + 0x74) == '\0') {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x7c;
      } while (uVar2 < *(uint *)(param_1 + 0x18));
    }
  }
  return 0;
}

