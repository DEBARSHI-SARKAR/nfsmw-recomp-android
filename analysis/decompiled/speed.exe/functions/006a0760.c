/* speed.exe 006a0760 FUN_006a0760; analysis pseudocode, not buildable source.
 * calls 00691ed0 FUN_00691ed0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a0760(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  fVar1 = *(float *)(*(int *)(param_1 + 0x14c) + 0x5c) * _DAT_008a9398;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(float *)(param_1 + 0xec) = fVar1;
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(*(int *)(param_1 + 0x14c) + 0x5c);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x84) = 2;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  FUN_00691ed0();
  return;
}

