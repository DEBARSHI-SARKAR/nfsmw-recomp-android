/* speed.exe 004e5870 FUN_004e5870; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_004e5870(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  
  piVar7 = (int *)0x0;
  puVar6 = DAT_0091494c;
  if ((undefined4 **)DAT_0091494c != &DAT_0091494c) {
    do {
      piVar1 = (int *)puVar6[2];
      if ((*piVar1 >> 4 & 0xfffU) == param_3) {
        uVar2 = *(uint *)(param_1 + 0xc);
        uVar4 = *piVar1 >> 0x10;
        if ((((((uVar2 == 3) || (uVar2 == 5)) || (uVar2 == 0xc)) || (uVar2 == 4)) &&
            ((uVar4 & 0xff) == 2)) || ((uVar4 & 0xff) == uVar2)) {
          if (piVar7 == (int *)0x0) {
            piVar7 = piVar1;
          }
          if ((uVar4 & 0xff) == uVar2) {
            piVar8 = piVar7;
            if (piVar7 == (int *)0x0) {
              piVar8 = piVar1;
            }
            piVar7 = piVar1;
            if (*(byte *)((int)piVar8 + 2) == uVar2) {
              for (piVar3 = (int *)piVar1[2];
                  (piVar7 = piVar8, piVar3 != (int *)0x0 && (piVar7 = piVar1, piVar3 != piVar8));
                  piVar3 = (int *)piVar3[2]) {
              }
            }
          }
        }
      }
      puVar6 = (undefined4 *)*puVar6;
    } while ((undefined4 **)puVar6 != &DAT_0091494c);
    if (piVar7 != (int *)0x0) {
      iVar5 = 0;
      if ((code *)piVar7[3] != (code *)0x0) {
        iVar5 = (*(code *)piVar7[3])(*(byte *)((int)piVar7 + 3) & 0xf);
      }
      *(uint *)(iVar5 + 0x20) = ((*(int *)(param_1 + 0xc) << 5 | param_2) << 7 | param_3) << 4;
      return iVar5;
    }
  }
  return 0;
}

