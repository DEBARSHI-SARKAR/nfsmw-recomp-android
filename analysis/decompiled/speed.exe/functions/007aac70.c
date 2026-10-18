/* speed.exe 007aac70 FUN_007aac70; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 007a3140 FUN_007a3140
 * calls 005fbd20 FUN_005fbd20
 * calls 005fab40 FUN_005fab40
 * calls 00576a20 FUN_00576a20
 * calls 00652ad0 _malloc
 * calls 005faab0 FUN_005faab0
 * calls 00576790 FUN_00576790
 * calls 005fc110 FUN_005fc110
 * calls 0056e2b0 FUN_0056e2b0
 * calls 0056dbe0 FUN_0056dbe0
 */

void __thiscall FUN_007aac70(int param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  uVar4 = FUN_005fab40();
  cVar3 = FUN_00576a20(uVar4);
  if ((((cVar3 != '\0') && (cVar3 = FUN_005fc110(), cVar3 == '\0')) &&
      (iVar5 = FUN_005faa20(), iVar5 == *(int *)(DAT_0091cf90 + 0x18))) &&
     (cVar3 = FUN_005fbd20(), cVar3 == '\0')) {
    iVar5 = FUN_0056e2b0();
    if (iVar5 == 0) {
      iVar5 = FUN_0056dbe0(0xb);
      bVar1 = *(byte *)(iVar5 + 0xd);
      uVar7 = FUN_005faab0();
      if ((uVar7 == bVar1) || (bVar1 == 3)) {
        uVar4 = FUN_005fab40(0);
        cVar3 = FUN_00576790(param_3,uVar4);
        piVar6 = _malloc(0x14);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6[2] = param_2;
          *(bool *)(piVar6 + 3) = cVar3 == '\0';
          piVar6[4] = param_4;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x100);
        *puVar2 = piVar6;
        *(int **)(param_1 + 0x100) = piVar6;
        piVar6[1] = (int)puVar2;
        *piVar6 = param_1 + 0xfc;
        if (((*(uint *)(DAT_0091cf90 + 300) >> 3 & 1) == 0) &&
           ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0)) {
          piVar6 = (int *)FUN_0056dbe0(0xb);
          iVar5 = *piVar6;
        }
        else {
          iVar5 = 0;
        }
        iVar8 = FUN_005fab40();
        if (iVar8 == iVar5) {
          *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x100);
        }
      }
    }
    else {
      cVar3 = FUN_007a3140(param_2);
      if (cVar3 != '\0') {
        piVar6 = _malloc(0x14);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6[2] = param_2;
          *(undefined1 *)(piVar6 + 3) = 0;
          piVar6[4] = param_4;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x100);
        *puVar2 = piVar6;
        *(int **)(param_1 + 0x100) = piVar6;
        piVar6[1] = (int)puVar2;
        *piVar6 = param_1 + 0xfc;
        return;
      }
    }
  }
  return;
}

