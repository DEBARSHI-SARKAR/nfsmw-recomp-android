/* speed.exe 0065aa00 FUN_0065aa00; analysis pseudocode, not buildable source.
 */

void FUN_0065aa00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = DAT_00925a94;
  *DAT_00925a94 = param_1;
  DAT_00925a94 = param_1;
  param_1[1] = puVar1;
  iVar3 = 0;
  *param_1 = &DAT_00925a90;
  if (0 < (int)param_1[3]) {
    piVar2 = param_1 + 8;
    do {
      *piVar2 = piVar2[-3] + (int)param_1;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar3 < (int)param_1[3]);
  }
  return;
}

