/* speed.exe 00648190 FUN_00648190; analysis pseudocode, not buildable source.
 * calls 005cf0d0 FUN_005cf0d0
 * calls 005cef70 FUN_005cef70
 * calls 005cc240 FUN_005cc240
 * calls 00647eb0 FUN_00647eb0
 */

void FUN_00648190(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_4;
  
  uVar5 = 0;
  iVar1 = FUN_005cef70(0x65452020);
  if (iVar1 != 0) {
    do {
      if (uVar5 == 0xffffffff) {
        uVar2 = 0x65452020;
      }
      else {
        uVar2 = uVar5 | 0x65450000;
      }
      iVar1 = FUN_005cf0d0(uVar2);
      puVar3 = *(undefined4 **)(iVar1 + 0xc);
      if ((*(byte *)(iVar1 + 4) & 2) != 0) {
        puVar3 = (undefined4 *)((int)puVar3 + iVar1);
      }
      local_4 = FUN_005cc240(*puVar3);
      piVar4 = (int *)FUN_00647eb0(&local_4);
      *piVar4 = iVar1;
      uVar5 = uVar5 + 1;
      uVar2 = FUN_005cef70(0x65452020);
    } while (uVar5 < uVar2);
  }
  return;
}

