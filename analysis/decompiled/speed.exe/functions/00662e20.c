/* speed.exe 00662e20 FUN_00662e20; analysis pseudocode, not buildable source.
 * calls 00659260 FUN_00659260
 */

void __fastcall FUN_00662e20(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*param_1,param_1[1] << 4,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  param_1[2] = 0;
  param_1[3] = param_1[3] & 1;
  return;
}

