/* speed.exe 00560ce0 FUN_00560ce0; analysis pseudocode, not buildable source.
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00527940 FUN_00527940
 * calls 005b7780 FUN_005b7780
 * calls 00559e90 FUN_00559e90
 * calls 00660200 FUN_00660200
 */

void FUN_00560ce0(void)

{
  int iVar1;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0xf,8,9);
  }
  *(undefined1 *)(DAT_0091cb20 + 0x17) = 1;
  if (*(int *)(DAT_0091cb20 + 0x40) == 3) {
    *(undefined1 *)(DAT_0091cb20 + 0x1b) = 1;
  }
  if (*(char *)(DAT_0091cb20 + 0x22) != '\0') {
    if ((((byte)DAT_0091cbac & 0xf0) != 0xb0) && (*(int *)(DAT_0091cb20 + 0xcc) == 0)) {
      FUN_00527940(0,0,0x91,0,0,0,0);
      return;
    }
    FUN_00559e90();
    return;
  }
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) != '\0') {
    *(undefined1 *)(DAT_0091cb20 + 0x24) = 1;
  }
  *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
  if (((*(uint *)(DAT_0091cf90 + 300) >> 4 & 1) != 0) && (*DAT_0091cadc != -0xd8)) {
    for (iVar1 = *(int *)(*DAT_0091cadc + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_005b7780(0x7e998e5e,0,iVar1,0xffffffff,0);
    }
  }
  return;
}

