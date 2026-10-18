/* speed.exe 00408b00 FUN_00408b00; analysis pseudocode, not buildable source.
 * calls 00404390 FUN_00404390
 * calls 007658a0 FUN_007658a0
 * calls 00778250 FUN_00778250
 * calls 00777d30 FUN_00777d30
 * calls 0076dda0 FUN_0076dda0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00408b00(short *param_1,int param_2)

{
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_1c = *(float *)(param_1 + 4);
  FUN_0076dda0(*param_1 * 0x16 + DAT_009b38c0,&local_18);
  if (*(int *)(param_1 + 2) == 0) {
    local_1c = _DAT_0089096c - local_1c;
    local_18 = -local_18;
    local_14 = -local_14;
    local_10 = -local_10;
  }
  FUN_00404390(local_c);
  FUN_007658a0(0);
  *(undefined4 *)(param_2 + 0x80) = 3;
  *(undefined4 *)(param_2 + 0x78) = 2;
  FUN_00777d30(*param_1,local_1c,local_c,&local_18,1);
  FUN_00778250(*(undefined4 *)(param_1 + 6),0);
  return;
}

