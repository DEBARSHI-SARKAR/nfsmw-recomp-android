/* speed.exe 0045b2a0 thunk_FUN_0045b2b0; analysis pseudocode, not buildable source.
 */

void __fastcall thunk_FUN_0045b2b0(undefined4 *param_1)

{
  if ((*(byte *)(param_1 + 3) & 1) == 0) {
    (**(code **)(*(int *)PTR_PTR_008f7ea8 + 4))(*param_1,param_1[1] * 0xc,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  param_1[2] = 0;
  param_1[3] = param_1[3] & 1;
  return;
}

