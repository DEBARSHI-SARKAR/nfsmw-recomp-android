/* speed.exe 00526ac0 FUN_00526ac0; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 * calls 005268b0 FUN_005268b0
 * calls 00660320 FUN_00660320
 * calls 004655f0 FUN_004655f0
 * calls 007f3ca0 FUN_007f3ca0
 * calls 0064c9a0 FUN_0064c9a0
 * calls 006cbee0 FUN_006cbee0
 * calls 00660200 FUN_00660200
 * calls 00518df0 FUN_00518df0
 */

void FUN_00526ac0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(5,8,9);
  }
  FUN_00660320(param_1,9);
  if (*(int *)(DAT_0091cb20 + 0xbc) == 0) {
    FUN_004655f0(*(undefined4 *)(DAT_0091cb20 + 0x44));
  }
  FUN_006cbee0();
  *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  *(undefined1 *)(DAT_0091cf90 + 3) = 1;
  *(undefined1 *)(DAT_0091cf90 + 4) = 0;
  *(undefined1 *)(DAT_0091cb20 + 0x24) = 0;
  if ((*(char *)(DAT_0091cb20 + 0x1a) != '\0') && (((byte)DAT_0091cbac & 0xf0) != 0xb0)) {
    if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) != '\0') {
      *(undefined1 *)(DAT_0091cb20 + 0x25) = 0;
      FUN_005268b0();
      return;
    }
    if (*DAT_0091cadc == -0xd8) {
      return;
    }
    iVar1 = *(int *)(*DAT_0091cadc + 0xe0);
    if (iVar1 == 0) {
      return;
    }
    do {
      FUN_005b7780(0x461a18ee,0,iVar1,0xffffffff,0);
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
    return;
  }
  if ((*(char *)(DAT_0091cb20 + 0x1e) == '\0') && (((byte)DAT_0091cbac & 0xf0) != 0xb0)) {
    return;
  }
  *(undefined1 *)(DAT_0091cb20 + 0x17) = 0;
  if (*(char *)(DAT_0091cb20 + 0x25) != '\0') {
    *(undefined1 *)(DAT_0091cb20 + 0x1a) = 0;
    FUN_007f3ca0(1,0xffffffff);
    *(undefined1 *)(DAT_0091cb20 + 0x25) = 0;
    FUN_005268b0(1);
    iVar1 = DAT_0091cb20;
    if (*(char *)(DAT_0091cb20 + 0x25) != '\0') goto LAB_00526c1d;
  }
  iVar1 = DAT_0091cb20;
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
LAB_00526c1d:
  *(undefined1 *)(iVar1 + 0x20) = 0;
  *(undefined1 *)(iVar1 + 0x22) = 0;
  *(undefined1 *)(iVar1 + 0x1e) = 0;
  *DAT_0091cae0 = 0;
  *(undefined1 *)(iVar1 + 0x1a) = 1;
  FUN_007f3ca0(0,0xffffffff);
  FUN_00518df0();
  if ((((byte)DAT_0091cbac & 0xf0) == 0xb0) && (*DAT_0091cadc != -0xd8)) {
    for (iVar1 = *(int *)(*DAT_0091cadc + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_005b7780(0x461a18ee,0,iVar1,0xffffffff,0);
    }
  }
  return;
}

