/* speed.exe 005eb460 FUN_005eb460; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005e84d0 FUN_005e84d0
 */

int __fastcall FUN_005eb460(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x150) = 0;
  fVar1 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x14c) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  fVar1 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x158) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x168) = 0;
  fVar1 = (float10)FUN_006e8de0();
  *(float *)(param_1 + 0x164) = (float)fVar1;
  FUN_005e84d0();
  return param_1;
}

