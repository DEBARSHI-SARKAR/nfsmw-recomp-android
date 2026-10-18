/* speed.exe 0073d0c0 FUN_0073d0c0; analysis pseudocode, not buildable source.
 * calls 006be940 FUN_006be940
 * calls 006bcdb0 FUN_006bcdb0
 * calls 006bcda0 FUN_006bcda0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0073d0c0(int param_1)

{
  int iVar1;
  float local_20;
  float local_1c;
  
  if ((DAT_00925e90 == 6) && (DAT_009b0a74 != '\0')) {
    FUN_006be940(&local_20,&DAT_009b3540);
    iVar1 = FUN_006bcda0();
    local_20 = (_DAT_008ae8f8 / (float)iVar1) * local_20;
    iVar1 = FUN_006bcdb0();
    *(float *)(param_1 + 4) = local_20;
    *(float *)(param_1 + 8) = (_DAT_008af2c0 / (float)iVar1) * local_1c;
  }
  return;
}

