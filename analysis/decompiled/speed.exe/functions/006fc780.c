/* speed.exe 006fc780 FUN_006fc780; analysis pseudocode, not buildable source.
 * calls 006fbb80 FUN_006fbb80
 * calls 005d59f0 FUN_005d59f0
 * calls 006faf50 FUN_006faf50
 */

void __thiscall FUN_006fc780(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar1 = FUN_005d59f0(&LAB_00402830);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x30) = iVar1;
      (**(code **)(*(int *)(param_1 + -0x2c) + 8))();
    }
  }
  param_2 = (int *)FUN_005d59f0(&LAB_0068b7e0);
  if (param_2 != (int *)0x0) {
    if (param_1 == 0x2c) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1 + 8;
    }
    iVar2 = (**(code **)(*param_2 + 0x58))();
    if (iVar2 == iVar1) {
      if (*(int *)(param_1 + 0x2c) != 0) {
        if (*(int *)(param_1 + 0x48) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48) >> 2;
        }
        uVar4 = (uint)*(byte *)(*(int *)(param_1 + 0x2c) + 0x16);
        if (uVar3 < uVar4) {
          FUN_006faf50(uVar4);
        }
      }
      FUN_006fbb80(&param_2);
    }
  }
  return;
}

