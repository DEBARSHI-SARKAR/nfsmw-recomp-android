/* speed.exe 0054f6d0 FUN_0054f6d0; analysis pseudocode, not buildable source.
 * calls 0054f5d0 FUN_0054f5d0
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00518570 FUN_00518570
 * calls 00526800 FUN_00526800
 * calls 00660200 FUN_00660200
 * calls 00660270 FUN_00660270
 * calls 00516be0 FUN_00516be0
 */

void FUN_0054f6d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0xb,8,9);
  }
  FUN_00660270(param_1,0x10,9);
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  *(undefined1 *)(DAT_0091cb20 + 0x29) = 0;
  if (*(char *)(DAT_0091cb20 + 0x1d) != '\0') {
    FUN_00518570();
    return;
  }
  if (*(char *)(DAT_0091cb20 + 0x22) == '\0') {
    FUN_00516be0(0x5a051729,*(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x10),0xffffffff,0xff);
    return;
  }
  *(undefined1 *)(DAT_0091cb20 + 0x22) = 0;
  if (*(char *)(DAT_0091cb20 + 0x21) != '\0') {
    FUN_0054f5d0();
    return;
  }
  FUN_00526800();
  return;
}

