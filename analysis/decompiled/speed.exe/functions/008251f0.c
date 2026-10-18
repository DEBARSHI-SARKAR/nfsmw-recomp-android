/* speed.exe 008251f0 FUN_008251f0; analysis pseudocode, not buildable source.
 */

void FUN_008251f0(uint param_1,float param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  
  do {
    if ((param_1 & 3) == 0) {
      do {
        fVar1 = *(float *)(param_3 + -0xc + param_1 * 4);
        fVar2 = *(float *)(param_3 + -8 + param_1 * 4);
        fVar3 = *(float *)(param_3 + -4 + param_1 * 4);
        *(float *)(param_4 + -0x10 + param_1 * 4) =
             *(float *)(param_3 + -0x10 + param_1 * 4) * param_2 +
             *(float *)(param_4 + -0x10 + param_1 * 4);
        *(float *)(param_4 + -0xc + param_1 * 4) =
             fVar1 * param_2 + *(float *)(param_4 + -0xc + param_1 * 4);
        *(float *)(param_4 + -4 + param_1 * 4) =
             fVar3 * param_2 + *(float *)(param_4 + -4 + param_1 * 4);
        *(float *)(param_4 + -8 + param_1 * 4) =
             fVar2 * param_2 + *(float *)(param_4 + -8 + param_1 * 4);
        uVar5 = param_1 - 4;
        bVar4 = 3 < (int)param_1;
        param_1 = uVar5;
      } while (uVar5 != 0 && bVar4);
      return;
    }
    *(float *)(param_4 + -4 + param_1 * 4) =
         *(float *)(param_3 + -4 + param_1 * 4) * param_2 + *(float *)(param_4 + -4 + param_1 * 4);
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  return;
}

