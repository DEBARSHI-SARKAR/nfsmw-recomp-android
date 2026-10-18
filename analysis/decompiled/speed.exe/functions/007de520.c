/* speed.exe 007de520 __FillZeroMan; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __FillZeroMan
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void __FillZeroMan(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + local_8 * 4) = 0;
  }
  return;
}

