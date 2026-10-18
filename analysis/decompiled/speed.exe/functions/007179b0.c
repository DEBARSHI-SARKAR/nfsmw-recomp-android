/* speed.exe 007179b0 FUN_007179b0; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_007179b0(int param_1)

{
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  if (DAT_00993cc8 != 0) {
    local_c = *(undefined4 *)(param_1 + 0xc);
    if ((*(int **)(DAT_00993cc8 + 0x230) != (int *)0x0) &&
       (local_8 = **(int **)(DAT_00993cc8 + 0x230), local_8 != 0)) {
      local_4 = *(undefined4 *)(*(int *)(DAT_00993cc8 + 0x170) + 0x40);
      FUN_00713b20(0xc,&local_c,&PTR_s_Setup_DispVehDescrip_00901c2c,&DAT_00992354,param_1);
    }
  }
  return;
}

