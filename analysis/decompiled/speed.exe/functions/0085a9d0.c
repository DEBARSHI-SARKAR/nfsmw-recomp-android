/* speed.exe 0085a9d0 FUN_0085a9d0; analysis pseudocode, not buildable source.
 * calls 0085ad50 FUN_0085ad50
 */

undefined4 FUN_0085a9d0(undefined4 *param_1,int param_2)

{
  *param_1 = 0;
  if (param_2 != 0) {
    *param_1 = 1;
    param_1[1] = 0;
    FUN_0085ad50((int)param_1 + 0x10a,param_2,0x10,0xffffffff);
    FUN_0085ad50(param_1 + 2,param_2 + 0x10,0x10,0xffffffff);
  }
  return *param_1;
}

