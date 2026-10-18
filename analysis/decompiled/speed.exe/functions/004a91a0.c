/* speed.exe 004a91a0 FUN_004a91a0; analysis pseudocode, not buildable source.
 * calls 00491660 FUN_00491660
 * calls 004a2200 FUN_004a2200
 */

undefined4 * __thiscall
FUN_004a91a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[4] = param_2;
  param_1[7] = param_4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_00491660(param_4);
  FUN_004a2200();
  return param_1;
}

