/* speed.exe 004cf6b0 FUN_004cf6b0; analysis pseudocode, not buildable source.
 * calls 004cd920 FUN_004cd920
 * calls 004c9940 FUN_004c9940
 */

void __thiscall FUN_004cf6b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = param_2;
  local_4 = param_3;
  FUN_004c9940(&param_2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_8,0);
  FUN_004cd920(param_2,1,&local_8);
  return;
}

