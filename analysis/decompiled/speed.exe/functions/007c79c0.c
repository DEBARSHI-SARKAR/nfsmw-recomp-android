/* speed.exe 007c79c0 _CheckBytes; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _CheckBytes
   
   Library: Visual Studio 2003 Debug */

undefined4 _CheckBytes(char *param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_8;
  
  local_8 = 1;
  while (iVar2 = param_3 + -1, param_3 != 0) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    param_3 = iVar2;
    if (cVar1 != param_2) {
      local_8 = 0;
    }
  }
  return local_8;
}

