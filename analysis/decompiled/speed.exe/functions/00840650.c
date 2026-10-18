/* speed.exe 00840650 FUN_00840650; analysis pseudocode, not buildable source.
 * calls 008521b0 FUN_008521b0
 */

void FUN_00840650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < (int)param_1[0x748]) {
    piVar2 = param_1 + 0x688;
    do {
      if (*piVar2 == param_4) break;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar1 < (int)param_1[0x748]);
  }
  param_1[iVar1 * 6 + 0x68b] = param_1[0x74d];
  param_1[0x74d] = param_1[0x74d] + 1;
  FUN_008521b0(*param_1,param_2,0,param_3,0xffffffff);
  return;
}

