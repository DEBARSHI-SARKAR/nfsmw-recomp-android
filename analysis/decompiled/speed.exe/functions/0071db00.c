/* speed.exe 0071db00 FUN_0071db00; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 * calls 00704e00 FUN_00704e00
 */

void FUN_0071db00(char param_1)

{
  int iVar1;
  int local_4;
  
  if (DAT_00993cc8 != 0) {
    iVar1 = FUN_00704e00();
    if (iVar1 != 0) {
      local_4 = (param_1 != '\0') + 1;
      FUN_00713b20(4,&local_4,&PTR_s_ExtraCops_ExtraRBEngage_00901fcc,&DAT_00993ca8,0);
    }
  }
  return;
}

