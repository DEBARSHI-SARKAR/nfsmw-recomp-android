/* speed.exe 0069a1d0 FUN_0069a1d0; analysis pseudocode, not buildable source.
 * calls 0069a170 FUN_0069a170
 * calls 004884a0 FUN_004884a0
 * calls 004866c0 FUN_004866c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069a1d0(int param_1,float param_2)

{
  float *pfVar1;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar1 = (float *)**(undefined4 **)(param_1 + 0x60);
  FUN_0069a170();
  if ((*(byte *)((int)pfVar1 + 0x1e) & 8) != 0) {
    pfVar1[4] = param_2 * pfVar1[8] + pfVar1[4];
    pfVar1[5] = param_2 * pfVar1[9] + pfVar1[5];
    pfVar1[6] = param_2 * pfVar1[10] + pfVar1[6];
  }
  if ((*(byte *)((int)pfVar1 + 0x1f) & 2) != 0) {
    local_20 = param_2 * pfVar1[0xc];
    local_14 = 0;
    local_1c = param_2 * pfVar1[0xd];
    local_18 = param_2 * pfVar1[0xe];
    FUN_004866c0(pfVar1,&local_20,&local_10);
    *pfVar1 = local_10 * _DAT_008933d4 + *pfVar1;
    pfVar1[1] = local_c * _DAT_008933d4 + pfVar1[1];
    pfVar1[2] = local_8 * _DAT_008933d4 + pfVar1[2];
    pfVar1[3] = local_4 * _DAT_008933d4 + pfVar1[3];
    FUN_004884a0(pfVar1,pfVar1);
  }
  return;
}

