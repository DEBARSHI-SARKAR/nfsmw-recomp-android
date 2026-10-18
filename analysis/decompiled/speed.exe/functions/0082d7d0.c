/* speed.exe 0082d7d0 FUN_0082d7d0; analysis pseudocode, not buildable source.
 */

void FUN_0082d7d0(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar1 = DAT_009c2980;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  *(undefined2 *)(param_1 + 0x5c) = param_4;
  uVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x4c))();
  *(undefined2 *)(param_1 + 0x58) = uVar2;
  *(short *)(param_1 + 0x5a) = (short)param_2;
  if (param_2 < 0x800) {
    *(undefined2 *)(param_1 + 0x5a) = 0x800;
  }
  if (0x1fff < param_2) {
    *(undefined2 *)(param_1 + 0x5a) = 0x2000;
  }
  return;
}

