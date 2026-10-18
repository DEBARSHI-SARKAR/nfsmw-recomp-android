/* speed.exe 0069e9e0 FUN_0069e9e0; analysis pseudocode, not buildable source.
 * calls 0069e820 FUN_0069e820
 * calls 0068d6a0 FUN_0068d6a0
 * calls 0068ed50 FUN_0068ed50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069e9e0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  float10 fVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0xf4) + 8))();
    if (cVar1 != '\0') {
      fVar2 = (float10)FUN_0069e820(param_2);
      goto LAB_0069ea47;
    }
  }
  *(undefined4 *)(param_1 + 0x128) = 0x42340000;
  if (*(short *)(param_2 + 200) != 1) {
    *(float *)(param_1 + 0x128) = *(float *)(*(int *)(param_1 + 0xa0) + 0x48) * _DAT_008a0dbc;
  }
  fVar2 = (float10)*(float *)(param_2 + 0x8c) * (float10)*(float *)(param_1 + 0x128) *
          (float10)_DAT_0089095c;
LAB_0069ea47:
  FUN_0068d6a0((float)fVar2,param_2,&local_20,&local_10);
  *param_3 = local_10;
  param_3[1] = uStack_c;
  param_3[2] = uStack_8;
  *param_4 = local_20;
  param_4[1] = uStack_1c;
  param_4[2] = uStack_18;
  *(undefined4 *)(param_1 + 0x124) = uStack_4;
  *(undefined4 *)(param_1 + 0x120) = uStack_14;
  FUN_0068ed50(param_2);
  return;
}

