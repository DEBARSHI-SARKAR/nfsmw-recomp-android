/* speed.exe 0071d860 FUN_0071d860; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 * calls 00701540 FUN_00701540
 */

void FUN_0071d860(undefined4 param_1)

{
  char cVar1;
  undefined1 local_8 [8];
  
  cVar1 = FUN_00701540(param_1,local_8);
  if (cVar1 != '\0') {
    FUN_00713b20(8,local_8,&PTR_s_CellCall_00901f64,&DAT_0099262c,0);
  }
  return;
}

