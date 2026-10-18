/* speed.exe 0082d780 FUN_0082d780; analysis pseudocode, not buildable source.
 */

void FUN_0082d780(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar1 = DAT_009c2980;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined2 *)(param_1 + 0x4c) = param_4;
  uVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x44))();
  *(undefined2 *)(param_1 + 0x48) = uVar2;
  *(short *)(param_1 + 0x4a) = (short)param_2;
  if (param_2 < 0) {
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
  if (0x3fff < param_2) {
    *(undefined2 *)(param_1 + 0x4a) = 0x4000;
  }
  return;
}

