/* speed.exe 0047f9f0 FUN_0047f9f0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 0046e760 FUN_0046e760
 */

/* WARNING: Removing unreachable block (ram,0x0047fabd) */
/* WARNING: Removing unreachable block (ram,0x0047fac2) */
/* WARNING: Removing unreachable block (ram,0x0047fac8) */
/* WARNING: Removing unreachable block (ram,0x0047fad1) */
/* WARNING: Removing unreachable block (ram,0x0047fae9) */
/* WARNING: Removing unreachable block (ram,0x0047faef) */

void FUN_0047f9f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = 4;
  switch(*param_1) {
  case 0x8003b200:
    uVar5 = 0;
    break;
  case 0x8003b201:
    uVar5 = 1;
    break;
  case 0x8003b202:
    uVar5 = 2;
    break;
  case 0x8003b203:
    uVar5 = 3;
  }
  puVar6 = param_1 + 2;
  if (puVar6 != (undefined4 *)(param_1[1] + 8 + (int)param_1)) {
    do {
      iVar4 = FUN_0046e760(uVar5,puVar6[2]);
      if (iVar4 != 0) {
        piVar1 = (int *)(iVar4 + 0xc);
        *(undefined4 *)(iVar4 + 8) = 0;
        piVar2 = (int *)*piVar1;
        while (piVar2 != piVar1) {
          piVar2 = (int *)*piVar1;
          iVar4 = *piVar2;
          piVar3 = (int *)piVar2[1];
          *piVar3 = iVar4;
          *(int **)(iVar4 + 4) = piVar3;
          if (*(char *)((int)piVar2 + 0x16) != '\0') {
            thunk_FUN_007c7250(piVar2);
          }
          piVar2 = (int *)*piVar1;
        }
      }
      puVar6 = (undefined4 *)(puVar6[1] + 8 + (int)puVar6);
    } while (puVar6 != (undefined4 *)(param_1[1] + 8 + (int)param_1));
  }
  if (3 < uVar5) {
    return;
  }
  (*(code *)(&PTR_LAB_0047fb0c)[uVar5])();
  return;
}

