/* speed.exe 007e0420 __store_str; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    __store_str
   
   Library: Visual Studio 2003 Debug */

void __store_str(char *param_1,int *param_2,int *param_3)

{
  while ((*param_3 != 0 && (*param_1 != '\0'))) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    param_1 = param_1 + 1;
    *param_3 = *param_3 + -1;
  }
  return;
}

