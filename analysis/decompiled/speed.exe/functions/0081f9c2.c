/* speed.exe 0081f9c2 FUN_0081f9c2; analysis pseudocode, not buildable source.
 * calls 0085eb90 _vprintf
 * calls 007c9b40 _vsprintf
 */

void FUN_0081f9c2(int *param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 != (char *)0x0) {
    if ((char *)*param_1 == (char *)0x0) {
      _vprintf(param_2,&stack0x0000000c);
    }
    else {
      iVar1 = _vsprintf((char *)*param_1,param_2,&stack0x0000000c);
      *param_1 = *param_1 + iVar1;
    }
  }
  return;
}

