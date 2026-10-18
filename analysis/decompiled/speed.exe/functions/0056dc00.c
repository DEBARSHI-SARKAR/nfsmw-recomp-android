/* speed.exe 0056dc00 FUN_0056dc00; analysis pseudocode, not buildable source.
 * calls 005fab40 FUN_005fab40
 * calls 004519d0 FUN_004519d0
 */

undefined4 FUN_0056dc00(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_0091e000 == 0) {
    return 0;
  }
  if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
    iVar1 = FUN_005fab40();
    iVar2 = FUN_004519d0("1.8.1");
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  return 0;
}

