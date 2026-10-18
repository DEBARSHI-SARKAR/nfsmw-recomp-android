/* speed.exe 0077a8b0 FUN_0077a8b0; analysis pseudocode, not buildable source.
 * calls 00449320 FUN_00449320
 * calls 00779310 FUN_00779310
 * calls 00402690 FUN_00402690
 * calls 004048c0 FUN_004048c0
 * calls 007677d0 FUN_007677d0
 * calls 00773650 FUN_00773650
 * calls 007c5df0 _atexit
 * calls 00763ff0 FUN_00763ff0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0077a8b0(int param_1,int param_2,float *param_3,int param_4)

{
  char cVar1;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [88];
  
  FUN_004048c0();
  FUN_004048c0();
  if (param_2 != 0) {
    FUN_00773650(param_2,param_3,local_58);
  }
  if (param_1 != 0) {
    if ((DAT_009b3bc0 & 1) == 0) {
      DAT_009b3bc0 = DAT_009b3bc0 | 1;
      FUN_00449320(0x3ccccccd);
      _atexit((_func_4879 *)&DAT_0088eec0);
    }
    FUN_00779310(param_1,param_3,param_3 + 4);
    if ((DAT_009b3bb4 & 1) != 0) {
      FUN_00402690(&local_a4);
      local_98 = 0x3f800000;
      cVar1 = FUN_007677d0(param_3,param_3 + 4,&DAT_009b3b84,&local_a4,&local_b4,local_5c);
      if (cVar1 != '\0') {
        local_63 = 1;
        local_60 = 0;
        local_64 = 0;
        if ((param_3[1] - local_b0) * local_a0 +
            (*param_3 - local_b4) * local_a4 + local_9c * (param_3[2] - local_ac) < _DAT_00890968) {
          local_a4 = -local_a4;
          local_a0 = -local_a0;
          local_9c = -local_9c;
        }
      }
    }
  }
  *(undefined1 *)(param_4 + 0x51) = 0;
  FUN_00763ff0(param_3,&local_b4,local_58,param_4);
  return *(char *)(param_4 + 0x51) != '\0';
}

