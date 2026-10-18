/* speed.exe 00575aa0 FUN_00575aa0; analysis pseudocode, not buildable source.
 */

void FUN_00575aa0(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = (short *)0x0;
  while ((sVar1 != 0 && (psVar2 == (short *)0x0))) {
    if ((sVar1 == 10) || (psVar2 = (short *)0x0, sVar1 == 0x5e)) {
      psVar2 = param_1;
    }
    sVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  return;
}

