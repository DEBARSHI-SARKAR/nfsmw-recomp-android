/* speed.exe 00512f90 FUN_00512f90; analysis pseudocode, not buildable source.
 * calls 005fab40 FUN_005fab40
 * calls 00576790 FUN_00576790
 * calls 00652b10 thunk_FUN_007c7250
 * calls 00652ad0 _malloc
 * calls 005fd160 FUN_005fd160
 * calls 00576a20 FUN_00576a20
 * calls 005dc920 FUN_005dc920
 * calls 005dc930 FUN_005dc930
 * calls 005faa20 FUN_005faa20
 * calls 0045da30 FUN_0045da30
 */

undefined4 FUN_00512f90(int *param_1)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  uVar2 = FUN_005dc920();
  pvVar3 = _malloc(uVar2 << 2);
  iVar8 = 0;
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = FUN_005dc930(uVar7);
      cVar1 = FUN_005fd160(1);
      if (cVar1 != '\0') {
        uVar5 = FUN_005fab40();
        cVar1 = FUN_00576a20(uVar5);
        if (cVar1 != '\0') {
          uVar5 = FUN_005fab40(0);
          cVar1 = FUN_00576790(7,uVar5);
          if (cVar1 != '\0') {
            if (*param_1 == 0xb) {
              iVar6 = FUN_005faa20();
              if ((iVar6 != 1) && (iVar6 = FUN_005faa20(), iVar6 != 0)) {
                iVar6 = FUN_005faa20();
                bVar9 = iVar6 == 2;
                goto LAB_0051304a;
              }
            }
            else {
              iVar6 = FUN_005faa20();
              bVar9 = *param_1 == iVar6;
LAB_0051304a:
              if (!bVar9) goto LAB_00513050;
            }
            *(undefined4 *)((int)pvVar3 + iVar8 * 4) = uVar4;
            iVar8 = iVar8 + 1;
          }
        }
      }
LAB_00513050:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  FUN_0045da30(iVar8);
  uVar4 = FUN_005fab40();
  iVar8 = FUN_005faa20();
  *param_1 = iVar8;
  thunk_FUN_007c7250(pvVar3);
  return uVar4;
}

