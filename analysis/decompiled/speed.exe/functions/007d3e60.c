/* speed.exe 007d3e60 __strcats; analysis pseudocode, not buildable source.
 * calls 007d0be0 FUN_007d0be0
 */

/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2003 Debug */

void __strcats(undefined4 param_1,int param_2)

{
  int local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)&stack0x0000000c;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    FUN_007d0be0(param_1,*local_8);
    local_8 = local_8 + 1;
  }
  return;
}

