/* speed.exe 00573dd0 FUN_00573dd0; analysis pseudocode, not buildable source.
 * calls 00514fd0 FUN_00514fd0
 * calls 00515520 FUN_00515520
 */

void __fastcall FUN_00573dd0(int param_1)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_1 + 0xcc);
  FUN_00514fd0(*(undefined4 *)(param_1 + 0x3c),pfVar1,param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xd0);
  *(float *)(param_1 + 0xd4) = *pfVar1;
  FUN_00514fd0(*(undefined4 *)(param_1 + 0x40),(float *)(param_1 + 0xf4),param_1 + 0xf8);
  FUN_00515520(*(undefined4 *)(param_1 + 0x3c),param_1 + 0xe4,(undefined4 *)(param_1 + 0xe8));
  FUN_00515520(*(undefined4 *)(param_1 + 0x40),param_1 + 0xec,param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xe8);
  *(float *)(param_1 + 0xdc) =
       ABS(*pfVar1 - (*(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0xec)));
  return;
}

