/* speed.exe 0082d700 FUN_0082d700; analysis pseudocode, not buildable source.
 */

void FUN_0082d700(int param_1,char param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar1 = DAT_009c2980;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined2 *)(param_1 + 0x2c) = param_4;
  uVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x3c))(0);
  *(undefined2 *)(param_1 + 0x28) = uVar2;
  *(short *)(param_1 + 0x2a) = (short)param_2;
  return;
}

