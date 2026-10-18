/* speed.exe 0069d410 FUN_0069d410; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_0069d410(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == DAT_0092c5a0) {
    uVar2 = FUN_005d59f0(&LAB_00404010);
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    uVar2 = FUN_005d59f0(&LAB_00404020);
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    uVar2 = FUN_005d59f0(&LAB_0068a830);
    *(undefined4 *)(param_1 + 100) = uVar2;
    uVar2 = FUN_005d59f0(&LAB_00604250);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    return;
  }
  if (iVar1 == DAT_009261b8) {
    uVar2 = FUN_005d59f0(&LAB_00403f90);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    return;
  }
  if (iVar1 == DAT_0092c5e0) {
    uVar2 = FUN_005d59f0(&LAB_004039c0);
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    return;
  }
  if (iVar1 == DAT_0092c618) {
    uVar2 = FUN_005d59f0(&LAB_0068cc70);
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  return;
}

