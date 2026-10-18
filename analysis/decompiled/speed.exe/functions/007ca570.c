/* speed.exe 007ca570 __initterm_e; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __initterm_e
   
   Library: Visual Studio 2003 Debug */

int __initterm_e(int *param_1,int *param_2)

{
  int local_8;
  
  local_8 = 0;
  while ((param_1 < param_2 && (local_8 == 0))) {
    if (*param_1 != 0) {
      local_8 = (*(code *)*param_1)();
    }
    param_1 = param_1 + 1;
  }
  return local_8;
}

