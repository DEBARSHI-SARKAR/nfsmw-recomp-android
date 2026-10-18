/* speed.exe 006dc2c0 FUN_006dc2c0; analysis pseudocode, not buildable source.
 * calls 006d3b80 FUN_006d3b80
 */

void FUN_006dc2c0(char param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = (&DAT_0093def8)[DAT_00982c60];
  local_4 = DAT_00982964;
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  if (param_1 != '\0') {
    FUN_006d3b80(DAT_00982a28,5,&local_8,&local_10,0,0xe,2,0xffffffff);
    return;
  }
  DAT_00982c60 = DAT_00982c60 + 1 & 0x80000001;
  if ((int)DAT_00982c60 < 0) {
    DAT_00982c60 = (DAT_00982c60 - 1 | 0xfffffffe) + 1;
  }
  FUN_006d3b80((&DAT_0093de60)[DAT_00982c60],5,&local_8,&local_10,0,0xe,2,0xffffffff);
  return;
}

