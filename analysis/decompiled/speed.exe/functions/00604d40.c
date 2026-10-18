/* speed.exe 00604d40 FUN_00604d40; analysis pseudocode, not buildable source.
 * calls 00601320 FUN_00601320
 * calls 005e2970 FUN_005e2970
 * calls 005dacf0 FUN_005dacf0
 */

void FUN_00604d40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  if ((((param_2 != 0) && (param_1 != 0)) && (cVar1 = FUN_005e2970(local_c), cVar1 != '\0')) &&
     (cVar1 = FUN_005dacf0(local_18), cVar1 != '\0')) {
    FUN_00601320(local_c,local_18,param_3,param_4);
  }
  return;
}

