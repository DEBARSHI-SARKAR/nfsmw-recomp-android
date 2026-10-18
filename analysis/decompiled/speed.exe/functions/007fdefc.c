/* speed.exe 007fdefc FUN_007fdefc; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000041 GlobalAlloc
 */

void FUN_007fdefc(SIZE_T param_1)

{
  GlobalAlloc(0x40,param_1);
  return;
}

