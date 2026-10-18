/* speed.exe 007f9f29 FUN_007f9f29; analysis pseudocode, not buildable source.
 * calls 007fc574 FUN_007fc574
 * calls 007fa354 FUN_007fa354
 * calls 007fbb7b FUN_007fbb7b
 */

void __fastcall FUN_007f9f29(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  
  puVar1 = param_1 + 9;
  *param_1 = &PTR_FUN_008c2850;
  puVar2 = (undefined4 *)*puVar1;
  while (puVar2 != puVar1) {
    piVar3 = (int *)*puVar1;
    iVar4 = *piVar3;
    piVar5 = (int *)piVar3[1];
    *piVar5 = iVar4;
    *(int **)(iVar4 + 4) = piVar5;
    *piVar3 = 0xb;
    piVar3[1] = 0xb;
    if (piVar3 != (int *)&DAT_00000008) {
      FUN_007fa354(1);
    }
    puVar2 = (undefined4 *)*puVar1;
  }
  puVar2 = param_1 + 0xb;
  puVar6 = (undefined4 *)*puVar2;
  while (puVar6 != puVar2) {
    piVar3 = (int *)*puVar2;
    iVar4 = *piVar3;
    piVar5 = (int *)piVar3[1];
    *piVar5 = iVar4;
    *(int **)(iVar4 + 4) = piVar5;
    *piVar3 = 0xb;
    piVar3[1] = 0xb;
    if (piVar3 != (int *)&DAT_00000008) {
      FUN_007fa354(1);
    }
    puVar6 = (undefined4 *)*puVar2;
  }
  FUN_007fc574(param_1 + 1);
  FUN_007fbb7b();
  *puVar2 = 7;
  param_1[0xc] = 7;
  *puVar1 = 7;
  param_1[10] = 7;
  *param_1 = &PTR_FUN_008c27a8;
  return;
}

