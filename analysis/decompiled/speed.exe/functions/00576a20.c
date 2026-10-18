/* speed.exe 00576a20 FUN_00576a20; analysis pseudocode, not buildable source.
 * calls 006530a0 FUN_006530a0
 * calls 004519d0 FUN_004519d0
 */

bool FUN_00576a20(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_004519d0("99.1.1");
  if (param_1 == iVar2) {
    return false;
  }
  iVar2 = FUN_004519d0("21.1.1");
  if ((((param_1 == iVar2) || (iVar2 = FUN_004519d0("21.2.1"), param_1 == iVar2)) ||
      (iVar2 = FUN_004519d0("21.2.2"), param_1 == iVar2)) ||
     (iVar2 = FUN_004519d0("19.9.70"), param_1 == iVar2)) {
    return DAT_008f8718 != '\0';
  }
  iVar2 = FUN_004519d0("19.8.31");
  if (param_1 == iVar2) {
    cVar1 = FUN_006530a0(3);
    if (cVar1 == '\0') {
      return false;
    }
    if ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) >> 0xd & 1) != 0) {
      return false;
    }
  }
  return true;
}

