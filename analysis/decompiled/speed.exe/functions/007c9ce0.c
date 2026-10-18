/* speed.exe 007c9ce0 __chgsign; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __chgsign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

double __cdecl __chgsign(double _X)

{
  return (double)CONCAT44(_X._4_4_ & 0x7fffffff | ~_X._4_4_ & 0x80000000,_X._0_4_);
}

