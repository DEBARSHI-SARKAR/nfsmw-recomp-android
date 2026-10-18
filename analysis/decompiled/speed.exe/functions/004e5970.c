/* speed.exe 004e5970 FUN_004e5970; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004e5970(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  
  puVar6 = (uint *)0x0;
  if ((undefined4 **)DAT_009145b0 != &DAT_009145b0) {
    puVar8 = DAT_009145b0;
    do {
      puVar1 = (uint *)puVar8[2];
      if ((*puVar1 >> 0x10 & 0xff) == *(uint *)(param_1 + 0xc)) {
        puVar7 = puVar6;
        if (puVar6 == (uint *)0x0) {
          puVar7 = puVar1;
        }
        puVar6 = puVar7;
        if (((*puVar1 & 0xffff) == param_2) && (puVar6 = puVar1, (*puVar7 & 0xffff) == param_2)) {
          for (puVar2 = (uint *)puVar1[2];
              (puVar6 = puVar7, puVar2 != (uint *)0x0 && (puVar6 = puVar1, puVar2 != puVar7));
              puVar2 = (uint *)puVar2[2]) {
          }
        }
      }
      puVar8 = (undefined4 *)*puVar8;
    } while ((undefined4 **)puVar8 != &DAT_009145b0);
    if (puVar6 != (uint *)0x0) {
      iVar5 = 0;
      if ((code *)puVar6[3] != (code *)0x0) {
        iVar5 = (*(code *)puVar6[3])(*(byte *)((int)puVar6 + 3) & 0xf);
      }
      *(int *)(iVar5 + 0xc) = param_1;
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(param_1 + 0xc);
      *(uint *)(iVar5 + 0x18) = param_2;
      iVar3 = *(int *)(param_1 + 0x10);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x10) = iVar5;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        return iVar5;
      }
      iVar4 = *(int *)(iVar3 + 4);
      while (iVar4 != 0) {
        iVar3 = *(int *)(iVar3 + 4);
        iVar4 = *(int *)(iVar3 + 4);
      }
      *(int *)(iVar5 + 8) = iVar3;
      *(int *)(iVar3 + 4) = iVar5;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      return iVar5;
    }
  }
  return 0;
}

