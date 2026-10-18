/* speed.exe 006a3c70 FUN_006a3c70; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_006a3c70(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == DAT_0092c658) {
    uVar1 = FUN_005d59f0(&LAB_00404040);
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    uVar1 = FUN_005d59f0(&LAB_00445650);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
  }
  if (*param_2 == DAT_0092c5e0) {
    uVar1 = FUN_005d59f0(&LAB_004039e0);
    *(undefined4 *)(param_1 + 0x98) = uVar1;
  }
  if (*param_2 == DAT_0092c618) {
    uVar1 = FUN_005d59f0(&LAB_00405000);
    *(undefined4 *)(param_1 + 0x8c) = uVar1;
    uVar1 = FUN_005d59f0(&LAB_00620fd0);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    uVar1 = FUN_005d59f0(&LAB_0068cc70);
    *(undefined4 *)(param_1 + 0xa0) = uVar1;
  }
  return;
}

