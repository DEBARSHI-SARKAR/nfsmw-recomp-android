/* speed.exe 004a7ca0 FUN_004a7ca0; analysis pseudocode, not buildable source.
 * calls 004a6ba0 FUN_004a6ba0
 * calls 0048d7d0 FUN_0048d7d0
 * calls 007c5e60 _printf
 * calls 0048dec0 FUN_0048dec0
 */

undefined4 __thiscall FUN_004a7ca0(int param_1,float *param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20 [2];
  float local_18;
  undefined1 local_10 [16];
  
  FUN_004a6ba0();
  FUN_004a6ba0();
  FUN_0048d7d0(*(undefined4 *)(param_1 + 0x18),&local_30,local_20,local_10);
  local_30 = 0;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0x3f800000;
  FUN_0048dec0(local_10,&local_30,local_20);
  *param_2 = local_20[0];
  param_2[1] = local_18;
  _printf("Facing: %g %g\n",(double)local_20[0],(double)local_18);
  return 1;
}

