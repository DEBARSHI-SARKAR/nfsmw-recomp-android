/* speed.exe 006a0670 FUN_006a0670; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_006a0670(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == DAT_009261b8) {
    uVar1 = FUN_005d59f0(&LAB_00403f90);
    *(undefined4 *)(param_1 + 0x110) = uVar1;
  }
  if (*param_2 == DAT_0092c658) {
    uVar1 = FUN_005d59f0(&LAB_00404040);
    *(undefined4 *)(param_1 + 0x114) = uVar1;
  }
  if (*param_2 == DAT_0092c5f0) {
    uVar1 = FUN_005d59f0(&LAB_00405240);
    *(undefined4 *)(param_1 + 0x118) = uVar1;
  }
  return;
}

