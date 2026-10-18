/* speed.exe 007ee299 FUN_007ee299; analysis pseudocode, not buildable source.
 * calls 007ee073 FUN_007ee073
 */

void FUN_007ee299(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_007ee073(param_1,param_2,local_14,&local_c);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_c;
    param_3[1] = local_8;
  }
  return;
}

