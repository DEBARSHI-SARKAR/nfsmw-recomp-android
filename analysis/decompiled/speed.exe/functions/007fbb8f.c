/* speed.exe 007fbb8f FUN_007fbb8f; analysis pseudocode, not buildable source.
 * calls 007c66d0 _malloc
 */

void FUN_007fbb8f(size_t param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (DAT_009c1948 != (undefined4 *)0x0) {
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    (**(code **)*DAT_009c1948)(param_1,&local_10);
    return;
  }
  _malloc(param_1);
  return;
}

