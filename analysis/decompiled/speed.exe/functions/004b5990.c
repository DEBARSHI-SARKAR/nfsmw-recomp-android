/* speed.exe 004b5990 FUN_004b5990; analysis pseudocode, not buildable source.
 * calls 004d61d0 FUN_004d61d0
 */

undefined4 * __fastcall FUN_004b5990(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004d61d0();
  param_1[9] = 0;
  *param_1 = &PTR_FUN_00896db8;
  puVar2 = &DAT_00911ee4;
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

