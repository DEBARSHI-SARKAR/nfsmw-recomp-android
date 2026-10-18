/* speed.exe 00717b70 FUN_00717b70; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00717b70(int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0xc);
  if ((DAT_00993cc8 == 0) || (local_4 = 1, *(char *)(*(int *)(DAT_00993cc8 + 0x204) + 0x59) == '\0')
     ) {
    local_4 = 8;
  }
  FUN_00713b20(8,&local_8,&PTR_s_HeliSpecific_HeliLostVisual_00901ecc,&DAT_009925b4,param_1);
  return;
}

