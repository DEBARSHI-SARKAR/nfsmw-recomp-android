/* speed.exe 00717190 FUN_00717190; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00717190(int param_1)

{
  undefined4 local_8;
  int local_4;
  
  if (DAT_00993cc8 != 0) {
    local_8 = *(undefined4 *)(param_1 + 0xc);
    local_4 = ((*(uint *)(DAT_00993cc8 + 0x54) >> 0xb & 1) != 0) + 1;
    FUN_00713b20(8,&local_8,&PTR_s_AnytimeEvents_DispPursEscGen_00901e3c,&DAT_0099237c,param_1);
  }
  return;
}

