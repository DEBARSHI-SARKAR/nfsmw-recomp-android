/* speed.exe 007c9d10 __scalb; analysis pseudocode, not buildable source.
 * calls 007d9a50 _ldexp
 */

/* Library Function - Single Match
    __scalb
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

double __cdecl __scalb(double _X,long _Y)

{
  double dVar1;
  
  dVar1 = _ldexp(_X,_Y);
  return dVar1;
}

