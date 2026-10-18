/* speed.exe 007de4d0 __CopyMan; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __CopyMan
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __CopyMan(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *local_10;
  int local_c;
  undefined4 *local_8;
  
  local_8 = param_2;
  local_10 = param_1;
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    *local_10 = *local_8;
    local_10 = local_10 + 1;
    local_8 = local_8 + 1;
  }
  return;
}

