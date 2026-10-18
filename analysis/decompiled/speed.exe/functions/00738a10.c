/* speed.exe 00738a10 FUN_00738a10; analysis pseudocode, not buildable source.
 * calls 00787580 FUN_00787580
 * calls 005cc240 FUN_005cc240
 * calls 006813b0 FUN_006813b0
 * calls 0066a690 FUN_0066a690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00738a10(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x28) = 2;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 100) == 0) {
      uVar4 = FUN_00787580(*(undefined4 *)(param_1 + 0x30),1,0x1c,0);
      *(undefined4 *)(param_1 + 100) = uVar4;
    }
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x44) = param_2;
  if (*(int **)(param_2 + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x40) + 4))();
  }
  *(undefined4 *)(param_2 + 0x17c8) = 0;
  uVar4 = FUN_005cc240(*(int *)(param_1 + 0x2c) * 0xd0 + DAT_009b09d8,DAT_009b09d8);
  iVar5 = FUN_006813b0(uVar4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x44);
    uVar1 = *(undefined4 *)(iVar5 + 0xb8);
    uVar4 = *(undefined4 *)(iVar5 + 0xb4);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar5 + 0xb0);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
  }
  else {
    iVar5 = FUN_0066a690();
    if (iVar5 != 0) {
      fVar2 = (float)(int)*(short *)(iVar5 + 0x18) * _DAT_00890d60;
      fVar3 = (float)(int)*(short *)(iVar5 + 0x1a) * _DAT_00890d60;
      *(float *)(param_1 + 0x50) = (float)(int)*(short *)(iVar5 + 0x1c) * _DAT_00890d60;
      *(float *)(param_1 + 0x54) = -fVar2;
      *(float *)(param_1 + 0x58) = fVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x17a8) = *(undefined4 *)(iVar5 + 0x20);
      return;
    }
  }
  return;
}

