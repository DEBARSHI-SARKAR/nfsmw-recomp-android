/* speed.exe 007cab40 FID_conflict:___iscsymf; analysis pseudocode, not buildable source.
 * calls 007ca6b0 _isalpha
 */

/* Library Function - Multiple Matches With Different Base Names
    ___iscsym
    ___iscsymf
   
   Library: Visual Studio 2003 Debug */

int __cdecl FID_conflict____iscsymf(int _C)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = _isalpha(_C);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    local_8 = 0;
  }
  else {
    local_8 = 1;
  }
  return local_8;
}

