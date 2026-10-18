/* speed.exe 00526f60 FUN_00526f60; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 005b7780 FUN_005b7780
 * calls 004655f0 FUN_004655f0
 * calls 007f3ca0 FUN_007f3ca0
 * calls 0064c9a0 FUN_0064c9a0
 * calls 006cbee0 FUN_006cbee0
 * calls 00518570 FUN_00518570
 * calls 00660200 FUN_00660200
 * calls 00660270 FUN_00660270
 * calls 00518df0 FUN_00518df0
 */

void FUN_00526f60(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(0xd,8,9);
  }
  iVar1 = FUN_00660270(param_2,0x10,9);
  iVar2 = FUN_00660270(param_1,8,9);
  uVar3 = 0x8867412d;
  if (*(int *)(DAT_0091cb20 + 0x44) != 0) {
    FUN_004655f0(*(int *)(DAT_0091cb20 + 0x44));
    *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
  }
  if (*(int *)(*(int *)(DAT_0091cb20 + 0xd0) + 8) != 0) {
    FUN_006cbee0();
  }
  if ((*(char *)(DAT_0091cb20 + 0x1e) != '\0') || (*(char *)(DAT_0091cb20 + 0x20) != '\0')) {
    *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
    iVar1 = DAT_0091cb20;
    if (*(char *)(DAT_0091cb20 + 0x25) == '\0') {
      *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
    }
    *(undefined1 *)(iVar1 + 0x20) = 0;
    *(undefined1 *)(iVar1 + 0x22) = 0;
    *(undefined1 *)(iVar1 + 0x1e) = 0;
    *DAT_0091cae0 = 0;
    *(undefined1 *)(iVar1 + 0x1a) = 1;
    FUN_007f3ca0(0,0xffffffff);
    FUN_00518df0();
    if ((((byte)DAT_0091cbac & 0xf0) == 0xb0) && (*DAT_0091cadc != -0xd8)) {
      for (iVar1 = *(int *)(*DAT_0091cadc + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        FUN_005b7780(0x8867412d,0,iVar1,0xffffffff,0);
      }
    }
    *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
    return;
  }
  if (*(char *)(DAT_0091cb20 + 0x1d) != '\0') {
    *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
    FUN_00518570();
    return;
  }
  if (*(char *)(DAT_0091cb20 + 0x25) != '\0') {
    *(undefined1 *)(DAT_0091cb20 + 0x25) = 0;
    *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
    if ((iVar2 == 2) || (iVar1 == 4)) {
      uVar3 = 0xfe202e3b;
    }
  }
  if (((DAT_0091cbac & 0xf0) == 0x60) && (*(int *)(DAT_0091cb20 + 0x40) == 7)) {
    *(undefined1 *)(DAT_0091cb20 + 0x29) = 0;
    *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
    FUN_00516be0(0x5a051729,*(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x10),0xffffffff,0xff);
    return;
  }
  switch(*(undefined4 *)(DAT_0091cb20 + 0x40)) {
  case 1:
    FUN_006cbee0();
    break;
  case 3:
    if (((iVar1 == 1) || ((4 < iVar1 && (iVar1 < 7)))) && ((DAT_0091cbac & 0xf0) == 0x60)) {
      *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x38) = 0;
    }
    uVar3 = 0xdc12af2e;
  case 5:
    if (*(int *)(DAT_0091cb20 + 0xbc) == 0) {
      FUN_004655f0(*(undefined4 *)(DAT_0091cb20 + 0x44));
    }
    *(undefined4 *)(DAT_0091cb20 + 0x44) = 0;
    *(short *)(DAT_0091cb20 + 0x4a) = (short)iVar1;
    break;
  case 7:
    if (iVar1 == 4) {
      uVar3 = 0x5a051729;
    }
  }
  *(short *)(DAT_0091cb20 + 0x48) = (short)iVar1;
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  FUN_00516be0(uVar3,*(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x10),0xffffffff,0xff);
  return;
}

