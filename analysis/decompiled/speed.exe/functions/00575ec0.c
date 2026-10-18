/* speed.exe 00575ec0 FUN_00575ec0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00575ec0(int param_1,float param_2,float param_3,undefined4 param_4,float param_5)

{
  float fVar1;
  
  fVar1 = (param_2 + param_3) * _DAT_008933d4;
  *(float *)(param_1 + 0xe0) = param_2;
  *(float *)(param_1 + 0xe4) = param_3;
  *(float *)(param_1 + 0xe8) = param_5;
  *(undefined4 *)(param_1 + 0xec) = param_4;
  (**(code **)(*(int *)(param_1 + 0x60) + 0x10))
            (param_2,fVar1,0,(fVar1 + param_2) - param_5,0xc2a40000);
  (**(code **)(*(int *)(param_1 + 0x9c) + 0x10))
            ((*(float *)(param_1 + 0xe4) + *(float *)(param_1 + 0xe0)) * _DAT_008933d4,
             *(undefined4 *)(param_1 + 0xe4),0,*(undefined4 *)(param_1 + 0xe8),0x42a40000);
  return;
}

