/* speed.exe 00499c20 FUN_00499c20; analysis pseudocode, not buildable source.
 * calls 0048d7d0 FUN_0048d7d0
 */

void FUN_00499c20(int param_1,float param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    if (0 < param_1) {
      do {
        FUN_0048d7d0(param_2,param_3 + 0x10,param_4 + 0x10,param_5 + 0x10);
        param_1 = param_1 + -1;
        *(float *)(param_5 + 0x20) =
             (*(float *)(param_4 + 0x20) - *(float *)(param_3 + 0x20)) * param_2 +
             *(float *)(param_3 + 0x20);
        *(float *)(param_5 + 0x24) =
             (*(float *)(param_4 + 0x24) - *(float *)(param_3 + 0x24)) * param_2 +
             *(float *)(param_3 + 0x24);
        *(float *)(param_5 + 0x28) =
             (*(float *)(param_4 + 0x28) - *(float *)(param_3 + 0x28)) * param_2 +
             *(float *)(param_3 + 0x28);
        param_4 = param_4 + 0x30;
        param_3 = param_3 + 0x30;
        param_5 = param_5 + 0x30;
      } while (param_1 != 0);
      return;
    }
  }
  else {
    iVar1 = 0;
    if (0 < param_1) {
      do {
        if ((*(uint *)(param_6 + (iVar1 >> 5) * 4) & 1 << ((byte)iVar1 & 0x1f)) != 0) {
          FUN_0048d7d0(param_2,param_3 + 0x10,param_4 + 0x10,param_5 + 0x10);
          *(float *)(param_5 + 0x20) =
               (*(float *)(param_4 + 0x20) - *(float *)(param_3 + 0x20)) * param_2 +
               *(float *)(param_3 + 0x20);
          *(float *)(param_5 + 0x24) =
               (*(float *)(param_4 + 0x24) - *(float *)(param_3 + 0x24)) * param_2 +
               *(float *)(param_3 + 0x24);
          *(float *)(param_5 + 0x28) =
               (*(float *)(param_4 + 0x28) - *(float *)(param_3 + 0x28)) * param_2 +
               *(float *)(param_3 + 0x28);
        }
        param_5 = param_5 + 0x30;
        param_3 = param_3 + 0x30;
        param_4 = param_4 + 0x30;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_1);
    }
  }
  return;
}

