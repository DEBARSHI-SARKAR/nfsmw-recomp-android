/* speed.exe 007c9cb0 __copysign; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __copysign
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44(_Number._4_4_ & 0x7fffffff | _Sign._4_4_ & 0x80000000,_Number._0_4_);
}

