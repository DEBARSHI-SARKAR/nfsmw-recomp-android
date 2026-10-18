/* speed.exe 007f5ac3 FUN_007f5ac3; analysis pseudocode, not buildable source.
 */

undefined4 * __fastcall FUN_007f5ac3(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  param_1[2] = 4;
  *param_1 = &PTR_FUN_008c24f4;
  puVar2 = param_1;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

