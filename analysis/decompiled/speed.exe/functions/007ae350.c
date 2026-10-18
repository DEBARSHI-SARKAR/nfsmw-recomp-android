/* speed.exe 007ae350 FUN_007ae350; analysis pseudocode, not buildable source.
 * calls 007ad730 FUN_007ad730
 * calls 00591e90 FUN_00591e90
 * calls 00516c90 FUN_00516c90
 * calls 007a3db0 FUN_007a3db0
 * calls 007a3b80 FUN_007a3b80
 * calls 0056dbe0 FUN_0056dbe0
 */

void __thiscall FUN_007ae350(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x34) = param_2;
  if (((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) &&
     ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) == 0)) {
    if (param_2 == 0) {
      return;
    }
    uVar1 = FUN_007a3db0();
    FUN_007ad730(uVar1);
  }
  if (param_2 != 0) {
    iVar2 = FUN_007a3b80();
    *(undefined4 *)(param_1 + 0x50 + iVar2 * 4) = *(undefined4 *)(param_2 + 8);
    iVar2 = FUN_00591e90("GarageMain.fng");
    if (*(int *)(iVar2 + 0x34) != 0) {
      *(undefined4 *)(*(int *)(iVar2 + 0x34) + 0x574) = 0;
    }
    FUN_00516c90(0xa05a328e,0,0);
    FUN_00516c90(0x9c0a27eb,*(undefined4 *)(param_1 + 0x10),0);
    *(undefined1 *)(param_1 + 0x1a4) = 1;
    if ((*(byte *)(DAT_0091cf90 + 300) & 1) == 0) {
      if ((*(uint *)(DAT_0091cf90 + 300) >> 5 & 1) == 0) {
        uVar1 = *(undefined4 *)(param_2 + 8);
        iVar2 = FUN_0056dbe0(0xb);
        *(undefined4 *)(iVar2 + 0x10 + param_3 * 4) = uVar1;
      }
    }
    else if ((*(uint *)(DAT_0091cf90 + 300) >> 0xf & 1) == 0) {
      *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x38) = DAT_00925b14;
      return;
    }
    *(undefined4 *)(param_1 + 0x38) = DAT_00925b14;
  }
  return;
}

