/* speed.exe 005cc240 FUN_005cc240; analysis pseudocode, not buildable source.
 * calls 005cc090 FUN_005cc090
 */

undefined4 FUN_005cc240(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_005cc090();
    return uVar2;
  }
  return 0;
}

