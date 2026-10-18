/* speed.exe 004522f0 FUN_004522f0; analysis pseudocode, not buildable source.
 * calls 00451a30 FUN_00451a30
 */

undefined4 FUN_004522f0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    uVar3 = FUN_00451a30((int)param_1 - (int)pcVar1,0x11223344,0xabcdef00);
    return uVar3;
  }
  return 0;
}

