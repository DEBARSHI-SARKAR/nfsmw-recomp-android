/* speed.exe 0082d6c0 FUN_0082d6c0; analysis pseudocode, not buildable source.
 */

void FUN_0082d6c0(int param_1,char param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar1 = DAT_009c2980;
  *(undefined2 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  uVar2 = (**(code **)(**(int **)(param_1 + 300) + 0x2c))();
  *(undefined2 *)(param_1 + 0x18) = uVar2;
  *(short *)(param_1 + 0x1a) = (short)param_2;
  *(char *)(param_1 + 3) = param_2;
  return;
}

