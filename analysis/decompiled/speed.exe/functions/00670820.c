/* speed.exe 00670820 FUN_00670820; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 006fbf80 FUN_006fbf80
 */

uint __thiscall FUN_00670820(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1[0x1f] == 0) {
    return 0;
  }
  if (param_1[0x15] == 0) {
    uVar2 = 0;
    if (param_2 != 0) goto LAB_00670858;
  }
  else if ((param_2 == 0) ||
          (iVar1 = *(int *)(param_1[0x15] + 4), bVar3 = iVar1 == *(int *)(param_2 + 4),
          uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),bVar3), !bVar3)) {
LAB_00670858:
    iVar1 = FUN_005d59f0(&LAB_00667bd0);
    if (iVar1 != 0) {
      if (param_1[0x15] != 0) {
        (**(code **)(*param_1 + 0x10))(param_1[0x15]);
        param_1[0x15] = 0;
        param_1[0x16] = 0;
      }
      param_1[0x15] = iVar1;
      iVar1 = FUN_005d59f0(&LAB_006200d0);
      param_1[0x16] = iVar1;
    }
    uVar2 = FUN_006fbf80(param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

