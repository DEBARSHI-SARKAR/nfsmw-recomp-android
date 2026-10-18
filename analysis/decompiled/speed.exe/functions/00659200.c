/* speed.exe 00659200 FUN_00659200; analysis pseudocode, not buildable source.
 * calls 0045c380 FUN_0045c380
 * calls 00452880 FUN_00452880
 * calls 00659260 FUN_00659260
 */

void FUN_00659200(undefined4 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  if (*param_2 == 0) {
    FUN_0045c380();
    FUN_00452880(0x3c,0);
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(param_2,0x3c,0);
  }
  return;
}

