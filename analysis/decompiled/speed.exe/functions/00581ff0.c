/* speed.exe 00581ff0 FUN_00581ff0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00410320 FUN_00410320
 */

void __fastcall FUN_00581ff0(int param_1)

{
  undefined4 local_c;
  
  FUN_00410320(0xeec2271a,0,0);
  *(float *)(param_1 + 0xc) = *(float *)(local_c + 0xa8) * *(float *)(param_1 + 0xc);
  FUN_0045a430();
  return;
}

