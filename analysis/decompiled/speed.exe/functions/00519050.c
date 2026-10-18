/* speed.exe 00519050 FUN_00519050; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 00660200 FUN_00660200
 * calls 00660320 FUN_00660320
 * calls 0056db00 FUN_0056db00
 * calls 00460d20 FUN_00460d20
 * calls 006cbe20 FUN_006cbe20
 * calls 00460c50 FUN_00460c50
 * calls 0064c9a0 FUN_0064c9a0
 * calls 005ab9c0 FUN_005ab9c0
 */

void FUN_00519050(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(8,8,9);
  }
  FUN_00660320(param_1,9);
  uVar2 = FUN_006cbe20();
  iVar1 = FUN_00460c50(uVar2);
  uVar2 = FUN_0056db00();
  iVar1 = FUN_00460d20(iVar1 + param_1,uVar2);
  if (iVar1 == 0) {
    FUN_005ab9c0();
    *(undefined1 *)(DAT_0091cf90 + 3) = 0;
  }
  *(undefined4 *)(DAT_0091cb20 + 0x40) = 0;
  FUN_00516be0(0x461a18ee,*(undefined4 *)(*(int *)(DAT_0091cb20 + 0xcc) + 0x10),0xffffffff,0xff);
  return;
}

