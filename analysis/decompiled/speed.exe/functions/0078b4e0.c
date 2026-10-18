/* speed.exe 0078b4e0 FUN_0078b4e0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 */

void __thiscall FUN_0078b4e0(int *param_1,char *param_2)

{
  if ((((*param_1 != 0) && (param_2 != (char *)0x0)) && (*param_2 != '\0')) && (param_1[0x21] < 4))
  {
    FUN_00460c70(param_1 + param_1[0x21] * 8 + 1,param_2);
    param_1[0x21] = param_1[0x21] + 1;
  }
  return;
}

