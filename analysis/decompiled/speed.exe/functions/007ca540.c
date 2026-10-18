/* speed.exe 007ca540 __initterm; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 2003 Debug */

void __initterm(int *param_1,int *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if (*param_1 != 0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

