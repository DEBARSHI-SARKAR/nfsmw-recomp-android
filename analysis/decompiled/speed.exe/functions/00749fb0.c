/* speed.exe 00749fb0 FUN_00749fb0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_00749fb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_1 + 0x3830) = param_2;
  *(undefined4 *)(param_1 + 0x3834) = param_3;
  *(undefined4 *)(param_1 + 0x3838) = param_4;
  *(undefined4 *)(param_1 + 0x3840) = param_5;
  *(undefined4 *)(param_1 + 0x3844) = param_6;
  *(undefined4 *)(param_1 + 0x3848) = param_7;
  *(undefined4 *)(param_1 + 0x3850) = param_8;
  *(undefined4 *)(param_1 + 0x3854) = param_9;
  *(undefined4 *)(param_1 + 0x3858) = param_10;
  *(undefined4 *)(param_1 + 0x3860) = param_11;
  *(undefined4 *)(param_1 + 0x3864) = param_12;
  *(undefined4 *)(param_1 + 0x3868) = param_13;
  fVar1 = *(float *)(param_1 + 0x3840) - *(float *)(param_1 + 0x3830);
  fVar2 = *(float *)(param_1 + 0x3844) - *(float *)(param_1 + 0x3834);
  fVar3 = *(float *)(param_1 + 0x3848) - *(float *)(param_1 + 0x3838);
  *(float *)(param_1 + 0x3870) = SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1);
  return;
}

