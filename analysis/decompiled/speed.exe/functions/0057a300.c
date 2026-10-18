/* speed.exe 0057a300 FUN_0057a300; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 005e4940 FUN_005e4940
 * calls 0057a1f0 FUN_0057a1f0
 */

void __thiscall FUN_0057a300(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint *local_36c;
  uint local_364 [17];
  undefined4 local_320 [200];
  
  FUN_00514c70(*(undefined4 *)(param_1 + 0x114));
  puVar7 = local_364;
  for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar5 = FUN_005e4940(local_320,param_2);
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      puVar1 = (ushort *)local_320[iVar6];
      uVar4 = (uint)*puVar1;
      if ((&DAT_008f3abc)[uVar4 * 5] != 0) {
        uVar2 = local_364[uVar4];
        if ((uVar2 < 8) &&
           ((*(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0x40) & (&DAT_008f3abc)[uVar4 * 5]) != 0)) {
          iVar3 = *(int *)(param_1 + 0x118 + (uVar2 + uVar4 * 8) * 4);
          local_364[uVar4] = uVar2 + 1;
          if (iVar3 != 0) {
            FUN_0057a1f0(iVar3,puVar1);
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  local_36c = local_364;
  iVar5 = 0;
  do {
    uVar4 = *local_36c;
    if (uVar4 < 8) {
      piVar8 = (int *)(param_1 + 0x118 + (iVar5 + uVar4) * 4);
      iVar6 = 8 - uVar4;
      do {
        if (*piVar8 != 0) {
          FUN_00514c70(*piVar8);
        }
        piVar8 = piVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_36c = local_36c + 1;
    iVar5 = iVar5 + 8;
  } while (iVar5 < 0x88);
  return;
}

