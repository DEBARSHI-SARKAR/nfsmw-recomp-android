/* speed.exe 00408bc0 FUN_00408bc0; analysis pseudocode, not buildable source.
 * calls 007658a0 FUN_007658a0
 * calls 007749a0 FUN_007749a0
 * calls 00778250 FUN_00778250
 * calls 00777d30 FUN_00777d30
 * calls 0076dda0 FUN_0076dda0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00408bc0(short *param_1,int param_2,undefined4 param_3)

{
  float10 fVar1;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_10 = *(float *)(param_1 + 4);
  FUN_0076dda0(*param_1 * 0x16 + DAT_009b38c0,&local_c);
  if (*(int *)(param_1 + 2) == 0) {
    local_10 = _DAT_0089096c - local_10;
    local_c = -local_c;
    local_8 = -local_8;
    local_4 = -local_4;
  }
  FUN_007658a0(0);
  *(undefined4 *)(param_2 + 0x80) = 3;
  *(undefined4 *)(param_2 + 0x78) = 2;
  FUN_00777d30(*param_1,local_10,param_3,&local_c,0);
  fVar1 = (float10)FUN_007749a0(*(undefined4 *)(param_2 + 0x2c4));
  FUN_00778250((float)fVar1,0);
  return;
}

