/* speed.exe 00615aa0 FUN_00615aa0; analysis pseudocode, not buildable source.
 * calls 00605d60 FUN_00605d60
 * calls 00605f40 FUN_00605f40
 * calls 00607d80 FUN_00607d80
 * calls 00614c50 FUN_00614c50
 */

undefined4 FUN_00615aa0(int param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  bool bVar9;
  
  iVar3 = FUN_00605f40(param_1,param_2);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 8);
  puVar1 = (undefined4 *)(iVar3 + -8);
  puVar4 = (undefined4 *)FUN_00607d80(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x30),puVar1);
  *puVar1 = *puVar4;
  *(undefined4 *)(iVar3 + -4) = puVar4[1];
  iVar3 = *(int *)(param_1 + 8);
  piVar8 = (int *)(iVar3 + -8);
  if (piVar8 != (int *)0x0) {
    if (*piVar8 == 4) {
      pbVar5 = (byte *)(*(int *)(iVar3 + -4) + 0x10);
    }
    else {
      iVar6 = FUN_00614c50(param_1,piVar8);
      if (iVar6 == 0) {
        pbVar5 = (byte *)0x0;
      }
      else {
        pbVar5 = (byte *)(*(int *)(iVar3 + -4) + 0x10);
      }
    }
    if (pbVar5 != (byte *)0x0) {
      do {
        bVar2 = *pbVar5;
        bVar9 = bVar2 < *param_3;
        if (bVar2 != *param_3) {
LAB_00615b39:
          iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_00615b3e;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar9 = bVar2 < param_3[1];
        if (bVar2 != param_3[1]) goto LAB_00615b39;
        pbVar5 = pbVar5 + 2;
        param_3 = param_3 + 2;
      } while (bVar2 != 0);
      iVar3 = 0;
LAB_00615b3e:
      if (iVar3 == 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
        uVar7 = FUN_00605d60(param_1,param_2);
        return uVar7;
      }
    }
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -8;
  return 0;
}

