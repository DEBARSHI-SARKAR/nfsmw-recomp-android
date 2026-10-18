/* speed.exe 00461180 FUN_00461180; analysis pseudocode, not buildable source.
 */

void FUN_00461180(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_2;
  *param_1 = sVar1;
  if (sVar1 != 0) {
    psVar2 = param_1;
    do {
      sVar1 = *(short *)((int)param_2 + (2 - (int)param_1) + (int)psVar2);
      psVar2 = psVar2 + 1;
      *psVar2 = sVar1;
    } while (sVar1 != 0);
  }
  return;
}

