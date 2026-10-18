/* speed.exe 004df6d0 FUN_004df6d0; analysis pseudocode, not buildable source.
 * calls 00516e20 FUN_00516e20
 * calls 004af050 FUN_004af050
 * calls 0074b640 FUN_0074b640
 * calls 0073d810 FUN_0073d810
 * calls 00516e10 FUN_00516e10
 */

void __fastcall FUN_004df6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x150) == 1) {
    iVar3 = 0;
    iVar1 = FUN_004af050(0);
    if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x34), iVar1 != 0)) && (DAT_00914a3c != 0)) {
      FUN_0074b640(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44));
      iVar3 = FUN_0073d810(0);
    }
    if (((*(int *)(param_1 + 0x11c) != iVar3) ||
        (*(int *)((&DAT_009121d8)[*(int *)(param_1 + 0x13c)] + 0x38) == 1)) &&
       ((iVar3 < 0xe && (-1 < iVar3)))) {
      *(int *)(param_1 + 0x11c) = iVar3;
    }
    return;
  }
  if ((*(uint *)(DAT_0091cf90 + 300) >> 9 & 1) == 0) {
    FUN_00516e10();
    uVar2 = FUN_00516e20();
    switch(uVar2) {
    case 2:
      *(undefined4 *)(param_1 + 0x11c) = 9;
      return;
    case 3:
    case 4:
      *(undefined4 *)(param_1 + 0x11c) = 10;
      return;
    case 5:
      *(undefined4 *)(param_1 + 0x11c) = 0xc;
      return;
    default:
      *(undefined4 *)(param_1 + 0x11c) = 0xb;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x11c) = 0xd;
  return;
}

