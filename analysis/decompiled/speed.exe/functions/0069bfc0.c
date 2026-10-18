/* speed.exe 0069bfc0 FUN_0069bfc0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall FUN_0069bfc0(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (*param_2 == DAT_0092c5e0) {
    uVar1 = FUN_005d59f0(&LAB_004039c0);
    *(undefined4 *)(param_1 + 0x8c) = uVar1;
    uVar1 = FUN_005d59f0(&LAB_004039f0);
    *(undefined4 *)(param_1 + 0x90) = uVar1;
  }
  if (*param_2 == DAT_0092c590) {
    uVar1 = FUN_005d59f0(&LAB_00404ff0);
    *(undefined4 *)(param_1 + 0x94) = uVar1;
  }
  return;
}

