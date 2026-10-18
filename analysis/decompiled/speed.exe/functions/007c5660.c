/* speed.exe 007c5660 swap; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _swap
   
   Library: Visual Studio 2003 Debug */

void __cdecl swap(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_1 != param_2) {
    while (param_3 != 0) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
  }
  return;
}

