/* speed.exe 0042c890 FUN_0042c890; analysis pseudocode, not buildable source.
 * calls 0041c1d0 FUN_0041c1d0
 */

int __thiscall FUN_0042c890(int param_1,undefined4 param_2,float *param_3,float param_4)

{
  float fVar1;
  
  fVar1 = *param_3;
  FUN_0041c1d0(param_1,&DAT_0090d8f4,fVar1 - param_4);
  FUN_0041c1d0(param_1,&DAT_0090d8f4,fVar1 + param_4);
  *(int *)(param_1 + 0x30) = param_1;
  fVar1 = param_3[2];
  FUN_0041c1d0(param_1 + 0x34,&DAT_0090d8f0,fVar1 - param_4);
  FUN_0041c1d0(param_1 + 0x34,&DAT_0090d8f0,fVar1 + param_4);
  *(int *)(param_1 + 100) = param_1;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return param_1;
}

