/* speed.exe 00626c90 thunk_FUN_00454640; analysis pseudocode, not buildable source.
 */

undefined4 thunk_FUN_00454640(char *param_1)

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

