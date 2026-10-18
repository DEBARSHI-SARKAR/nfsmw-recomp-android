/* speed.exe 007de550 __IsZeroMan; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __IsZeroMan
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4 __IsZeroMan(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 1;
    }
    if (*(int *)(param_1 + local_8 * 4) != 0) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

