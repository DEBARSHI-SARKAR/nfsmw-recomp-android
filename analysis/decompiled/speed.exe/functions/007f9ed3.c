/* speed.exe 007f9ed3 FUN_007f9ed3; analysis pseudocode, not buildable source.
 * calls 007fbb31 FUN_007fbb31
 * calls 007fbb7c FUN_007fbb7c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_007f9ed3(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_008c2850;
  puVar1 = param_1 + 9;
  *puVar1 = puVar1;
  param_1[10] = puVar1;
  puVar1 = param_1 + 0xb;
  *puVar1 = puVar1;
  param_1[0xc] = puVar1;
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[1] = 0;
  _DAT_009bfe20 = 0xffffffff;
  _DAT_009bfe1c = 0;
  FUN_007fbb7c(&PTR_PTR_00909e60);
  FUN_007fbb31();
  return param_1;
}

