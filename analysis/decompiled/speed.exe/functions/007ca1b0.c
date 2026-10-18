/* speed.exe 007ca1b0 __isnan; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __isnan
   
   Library: Visual Studio */

int __cdecl __isnan(double _X)

{
  int iVar1;
  
  if ((((_X._6_2_ & 0x7ff8) == 0x7ff0) &&
      ((((ulonglong)_X & 0x7ffff00000000) != 0 || (_X._0_4_ != 0)))) ||
     ((_X._6_2_ & 0x7ff8) == 0x7ff8)) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

