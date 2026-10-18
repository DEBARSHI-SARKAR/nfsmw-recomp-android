/* speed.exe 005271e0 FUN_005271e0; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 005b7780 FUN_005b7780
 * calls 007f3ca0 FUN_007f3ca0
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00660200 FUN_00660200
 * calls 00660270 FUN_00660270
 * calls 00526860 FUN_00526860
 */

void FUN_005271e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0x10,8,9);
  }
  FUN_00660270(param_1,8,9);
  iVar1 = FUN_00660270(param_2,0x10,9);
  iVar2 = FUN_00660270(param_3,0x20,9);
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  *(bool *)(DAT_0091cb20 + 0x16) = iVar2 == 1;
  *(undefined1 *)(DAT_0091cb20 + 0x17) = 0;
  *(undefined1 *)(DAT_0091cb20 + 0x1b) = 0;
  if (*(char *)(DAT_0091cb20 + 0x27) != '\0') {
    *(undefined1 *)(DAT_0091cb20 + 0x27) = 0;
    *(undefined1 *)(DAT_0091cb20 + 0x1a) = 1;
    FUN_007f3ca0(0,0xffffffff);
    FUN_00516be0(0xc6c6b68f,-(uint)(*(char *)(DAT_0091cb20 + 0x23) != '\0') & DAT_0091cbb8,
                 0xffffffff,0xff);
    return;
  }
  uVar3 = 0x461a18ee;
  if ((iVar1 != 0) && (iVar2 != 1)) {
    if ((iVar1 == 1) || (iVar1 == 3)) {
      uVar3 = 0xb57fdb17;
    }
    *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
  }
  if (DAT_0091cbc8 == 0x20) {
    uVar3 = 0xa4bb7ae1;
  }
  if (*(char *)(DAT_0091cb20 + 0x1e) == '\0') {
    if (*DAT_0091cadc != -0xd8) {
      for (iVar1 = *(int *)(*DAT_0091cadc + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        FUN_005b7780(uVar3,0,iVar1,0xffffffff,0);
      }
    }
  }
  else {
    if ((iVar2 != 1) && (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) != '\0')) {
      *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
      *(undefined1 *)(DAT_0091cb20 + 0x24) = 1;
    }
    FUN_00526860();
  }
  if (iVar2 == 1) {
    *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 1;
    *(undefined1 *)(DAT_0091cb20 + 0x24) = 0;
  }
  return;
}

