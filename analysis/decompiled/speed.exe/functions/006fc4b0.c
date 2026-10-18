/* speed.exe 006fc4b0 FUN_006fc4b0; analysis pseudocode, not buildable source.
 * calls 006fbf80 FUN_006fbf80
 * calls 005d59f0 FUN_005d59f0
 */

uint __thiscall FUN_006fc4b0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1[6] == 0) {
    uVar2 = 0;
    if (param_2 != 0) goto LAB_006fc4db;
  }
  else if ((param_2 == 0) ||
          (iVar1 = *(int *)(param_1[6] + 4), bVar3 = iVar1 == *(int *)(param_2 + 4),
          uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),bVar3), !bVar3)) {
LAB_006fc4db:
    iVar1 = FUN_005d59f0(&LAB_00402830);
    if (iVar1 != 0) {
      if (param_1[6] != 0) {
        (**(code **)(*param_1 + 0x20))(param_1[6]);
        param_1[6] = 0;
      }
      param_1[6] = iVar1;
    }
    uVar2 = FUN_006fbf80(param_2);
    return uVar2;
  }
  return uVar2 & 0xffffff00;
}

