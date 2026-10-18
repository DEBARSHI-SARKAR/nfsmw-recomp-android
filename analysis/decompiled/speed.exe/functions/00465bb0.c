/* speed.exe 00465bb0 FUN_00465bb0; analysis pseudocode, not buildable source.
 * calls 00461d00 FUN_00461d00
 * calls 00652b10 thunk_FUN_007c7250
 * calls 0065d8b0 FUN_0065d8b0
 * calls 004655f0 FUN_004655f0
 * calls 0065f860 FUN_0065f860
 * calls 00464720 FUN_00464720
 * calls 00464a70 FUN_00464a70
 * calls 00461b40 FUN_00461b40
 */

void __thiscall FUN_00465bb0(int *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_278;
  int local_274;
  int local_270 [20];
  undefined4 local_220 [64];
  int local_120;
  int local_118;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a09b;
  local_c = ExceptionList;
  local_10 = &DAT_00461b30;
  local_278 = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_0065f860(param_2,&local_278,0);
  FUN_0065d8b0();
  FUN_00461d00(param_2,uVar2,local_278);
  FUN_004655f0(uVar2);
  local_4 = 0;
  if (*param_1 + local_274 < 5) {
    iVar6 = 0;
    if (0 < local_120) {
      iVar4 = 0;
      do {
        if (param_1[0x55] == param_1[0x56]) {
          FUN_00461b40((param_1[0x56] * 4) / 3 + 1);
        }
        pcVar1 = (char *)(param_1[0x57] + param_1[0x55] * 0xc);
        param_1[0x55] = param_1[0x55] + 1;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        pcVar1[4] = '\0';
        pcVar1[5] = '\0';
        pcVar1[6] = '\0';
        pcVar1[7] = '\0';
        pcVar1[8] = '\0';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        puVar8 = (undefined4 *)(iVar4 + local_118);
        *(undefined4 *)pcVar1 = *puVar8;
        *(undefined4 *)(pcVar1 + 4) = puVar8[1];
        *(undefined4 *)(pcVar1 + 8) = puVar8[2];
        *pcVar1 = *pcVar1 + (char)*param_1;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar6 < local_120);
    }
    iVar6 = 0;
    if (0 < local_274) {
      piVar3 = local_270;
      do {
        piVar5 = piVar3;
        piVar7 = param_1 + (*param_1 + iVar6) * 0x15 + 1;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar7 = piVar7 + 1;
        }
        iVar6 = iVar6 + 1;
        piVar3 = piVar3 + 0x15;
      } while (iVar6 < local_274);
    }
    *param_1 = *param_1 + local_274;
    local_274 = 0;
  }
  else {
    uVar2 = FUN_00464a70();
    FUN_00464720(param_1,"Too many nested INCLUDESCRIPT commands at %s\n",uVar2);
  }
  iVar6 = 0;
  if (0 < local_274) {
    puVar8 = local_220;
    do {
      thunk_FUN_007c7250(*puVar8);
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 0x15;
    } while (iVar6 < local_274);
  }
  if (local_118 != 0) {
    thunk_FUN_007c7250(local_118);
  }
  ExceptionList = local_c;
  return;
}

