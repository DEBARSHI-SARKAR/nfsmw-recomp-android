/* speed.exe 006b4cc0 FUN_006b4cc0; analysis pseudocode, not buildable source.
 * calls 006a6130 FUN_006a6130
 */

int __thiscall FUN_006b4cc0(int param_1,undefined4 param_2,float *param_3,float param_4)

{
  float fVar1;
  
  fVar1 = *param_3;
  FUN_006a6130(param_1,&DAT_009383a4,fVar1 - param_4);
  FUN_006a6130(param_1,&DAT_009383a4,fVar1 + param_4);
  *(int *)(param_1 + 0x30) = param_1;
  fVar1 = param_3[2];
  FUN_006a6130(param_1 + 0x34,&DAT_009383a0,fVar1 - param_4);
  FUN_006a6130(param_1 + 0x34,&DAT_009383a0,fVar1 + param_4);
  *(int *)(param_1 + 100) = param_1;
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return param_1;
}

