/* speed.exe 006a3f60 FUN_006a3f60; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00609c40 FUN_00609c40
 * calls 0040e020 FUN_0040e020
 */

void __thiscall FUN_006a3f60(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == DAT_0092c5a0) {
    uVar2 = FUN_005d59f0(&LAB_00404020);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    uVar2 = FUN_005d59f0(&LAB_00404010);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    return;
  }
  if (iVar1 == DAT_009261b8) {
    uVar2 = FUN_005d59f0(&LAB_00403f90);
    *(undefined4 *)(param_1 + 100) = uVar2;
    return;
  }
  if (iVar1 == DAT_0092c658) {
    uVar2 = FUN_005d59f0(&LAB_00404040);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    uVar2 = FUN_005d59f0(&LAB_00445650);
    *(undefined4 *)(param_1 + 0x80) = uVar2;
    return;
  }
  if (iVar1 == DAT_0092c618) {
    uVar2 = FUN_005d59f0(&LAB_00405000);
    *(undefined4 *)(param_1 + 0x78) = uVar2;
    return;
  }
  if (iVar1 == DAT_0092c5f0) {
    FUN_0040e020(param_1 + 0x70);
    FUN_00609c40(param_1 + 0x74);
  }
  return;
}

