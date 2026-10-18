/* speed.exe 00454830 FUN_00454830; analysis pseudocode, not buildable source.
 * calls 004517c0 FUN_004517c0
 */

undefined4 FUN_00454830(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    uVar2 = FUN_004517c0();
    return uVar2;
  }
  return 0;
}

