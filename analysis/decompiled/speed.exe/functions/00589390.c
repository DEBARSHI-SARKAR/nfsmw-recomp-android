/* speed.exe 00589390 FUN_00589390; analysis pseudocode, not buildable source.
 * calls 00525050 FUN_00525050
 * calls 00589200 FUN_00589200
 * calls 00515520 FUN_00515520
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00589390(int param_1)

{
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  FUN_00589200();
  FUN_00515520(*(undefined4 *)(param_1 + 0x4c),local_4,local_8);
  FUN_00515520(*(undefined4 *)(param_1 + 0x50),local_8,local_4);
  FUN_00525050(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x44),
               *(float *)(param_1 + 0x38) * _DAT_008933d4 + *(float *)(param_1 + 0x48));
  FUN_00525050(*(undefined4 *)(param_1 + 0x50),
               *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x44),
               *(float *)(param_1 + 0x38) * _DAT_008933d4 + *(float *)(param_1 + 0x48));
  return;
}

