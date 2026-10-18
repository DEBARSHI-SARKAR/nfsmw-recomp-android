/* speed.exe 00749c90 FUN_00749c90; analysis pseudocode, not buildable source.
 * calls 0045fed0 FUN_0045fed0
 * calls 00501570 FUN_00501570
 */

undefined4 FUN_00749c90(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  puVar3 = DAT_009b0f90;
  if ((undefined4 **)DAT_009b0f90 != &DAT_009b0f90) {
    do {
      if (*(char *)(puVar3 + 10) != '\0') {
        iVar2 = puVar3[0xc];
        piVar1 = (int *)(iVar2 + 0x90);
        if (iVar2 == 0) {
          piVar1 = puVar3 + 0x1c;
        }
        local_1c = piVar1[1];
        local_18 = piVar1[2];
        local_20 = *piVar1;
        piVar1 = (int *)(iVar2 + 0x90);
        if (iVar2 == 0) {
          piVar1 = puVar3 + 0x1c;
        }
        local_2c = piVar1[1];
        local_30 = *piVar1;
        local_28 = piVar1[2];
        if ((puVar3[2] != 0) ||
           ((puVar3[4] != 0 && (*(int *)((puVar3[5] + 1) * 0x10 + puVar3[4]) != 0)))) {
          FUN_00501570(&local_20,&local_30);
        }
        iVar2 = FUN_0045fed0(param_1,param_2,&local_20,&local_30);
        if (iVar2 != 0) {
          return 1;
        }
      }
      puVar3 = (undefined4 *)*puVar3;
    } while ((undefined4 **)puVar3 != &DAT_009b0f90);
  }
  return 0;
}

