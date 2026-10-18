/* speed.exe 005eda20 FUN_005eda20; analysis pseudocode, not buildable source.
 * calls 005dd670 FUN_005dd670
 * calls 00454640 FUN_00454640
 * calls 005ec420 FUN_005ec420
 * calls 00654af0 FUN_00654af0
 * calls 005de4b0 FUN_005de4b0
 */

void __thiscall FUN_005eda20(int param_1,undefined4 **param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *local_30;
  int local_1c [7];
  
  puVar2 = param_2;
  local_30 = param_2;
  param_2 = (undefined4 **)FUN_00454640();
  local_30 = &param_2;
  FUN_005ec420(local_1c);
  puVar3 = param_3;
  *(undefined4 **)(local_1c[0] + 0x14) = param_3;
  if (*(int *)(local_1c[0] + 0x18) != -0x40800000) {
    if ((*(byte *)(local_1c[0] + 0x1c) & 1) == 0) {
      if (*(float *)(local_1c[0] + 0x18) <= (float)param_3) {
        return;
      }
    }
    else if ((float)param_3 <= *(float *)(local_1c[0] + 0x18)) {
      return;
    }
  }
  param_2 = &local_30;
  *(undefined4 **)(local_1c[0] + 0x18) = param_3;
  local_30 = (undefined4 *)0x20d60dbf;
  FUN_005dd670(puVar2,param_3);
  FUN_00654af0();
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 0)) {
    piVar5 = (int *)(*(int *)(param_1 + 0xa8) + -0x14);
    while (piVar4 = piVar5 + 5,
          piVar4 < (int *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 0x14)) {
      piVar1 = piVar5 + 7;
      if (((char)*piVar1 == '\x02') || (piVar5 = piVar4, (char)*piVar1 == '\x03'))
      goto LAB_005edaf8;
    }
    piVar4 = (int *)0x0;
LAB_005edaf8:
    if (piVar4 != (int *)0x0) {
      do {
        if (*piVar4 == *(int *)(local_1c[0] + 0x10)) {
          local_30 = puVar3;
          FUN_005de4b0();
        }
        piVar5 = piVar4;
        do {
          piVar4 = piVar5 + 5;
          if ((int *)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 0x14) <= piVar4) {
            return;
          }
          piVar1 = piVar5 + 7;
        } while (((char)*piVar1 != '\x02') && (piVar5 = piVar4, (char)*piVar1 != '\x03'));
      } while( true );
    }
  }
  return;
}

