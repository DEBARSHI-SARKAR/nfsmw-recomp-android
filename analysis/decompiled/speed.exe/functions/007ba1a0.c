/* speed.exe 007ba1a0 FUN_007ba1a0; analysis pseudocode, not buildable source.
 * calls 005dc930 FUN_005dc930
 * calls 004519d0 FUN_004519d0
 * calls 0056f180 FUN_0056f180
 * calls 0051e1a0 FUN_0051e1a0
 * calls 00576a20 FUN_00576a20
 * calls 00576790 FUN_00576790
 * calls 00652ad0 _malloc
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00516c50 FUN_00516c50
 * calls 005faa20 FUN_005faa20
 * calls 0056ecf0 FUN_0056ecf0
 * calls 005dc920 FUN_005dc920
 * calls 00452430 FUN_00452430
 * calls 005fab40 FUN_005fab40
 * calls 0045a430 FUN_0045a430
 */

void __fastcall FUN_007ba1a0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint local_28;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883588;
  piVar8 = (int *)(param_1 + 0x2c);
  piVar3 = *(int **)(param_1 + 0x2c);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  while (piVar3 != piVar8) {
    iVar10 = *piVar3;
    piVar5 = (int *)piVar3[1];
    *piVar5 = iVar10;
    *(int **)(iVar10 + 4) = piVar5;
    thunk_FUN_007c7250(piVar3);
    piVar3 = (int *)*piVar8;
  }
  uVar9 = (uint)*(byte *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0);
  iVar10 = 0;
  do {
    piVar3 = (int *)FUN_0056ecf0(iVar10);
    if ((*piVar3 != -1) && (cVar2 = FUN_0056f180(0xf0001), cVar2 != '\0')) {
      FUN_0051e1a0(piVar3[1],0,0);
      local_4 = 0;
      if (((int)(uVar9 - 1) <= (int)(uint)*(byte *)(local_18 + 0x59)) &&
         (((uint)*(byte *)(local_18 + 0x59) <= uVar9 + 3 &&
          (iVar4 = FUN_00452430(), iVar4 != -0x3e3cd251)))) {
        piVar5 = _malloc(0x10);
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5[2] = *piVar3;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        puVar1 = *(undefined4 **)(param_1 + 0x30);
        *puVar1 = piVar5;
        *(int **)(param_1 + 0x30) = piVar5;
        piVar5[1] = (int)puVar1;
        *piVar5 = (int)piVar8;
      }
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 < 200);
  local_28 = 0;
  iVar10 = FUN_005dc920();
  if (iVar10 != 0) {
    do {
      iVar10 = FUN_005dc930(local_28);
      iVar4 = FUN_005faa20();
      if ((((iVar4 != 8) && (iVar4 = FUN_005faa20(), iVar4 != 9)) &&
          (iVar4 = FUN_005faa20(), iVar4 != 10)) &&
         ((iVar4 = FUN_005faa20(), iVar4 != -1 && (iVar4 = FUN_005faa20(), iVar4 != 4)))) {
        iVar4 = FUN_005fab40();
        iVar6 = FUN_004519d0("19.8.31");
        if (iVar4 != iVar6) {
          uVar7 = FUN_005fab40();
          cVar2 = FUN_00576a20(uVar7);
          if (cVar2 != '\0') {
            uVar7 = FUN_005fab40(0);
            cVar2 = FUN_00576790(1,uVar7);
            if (cVar2 != '\0') {
              piVar8 = _malloc(0x14);
              if (piVar8 == (int *)0x0) {
                piVar8 = (int *)0x0;
              }
              else {
                piVar8[2] = iVar10;
                *(undefined1 *)(piVar8 + 3) = 1;
                piVar8[4] = 0;
              }
              puVar1 = *(undefined4 **)(param_1 + 0x3c);
              *puVar1 = piVar8;
              *(int **)(param_1 + 0x3c) = piVar8;
              piVar8[1] = (int)puVar1;
              *piVar8 = param_1 + 0x38;
            }
          }
        }
      }
      local_28 = local_28 + 1;
      uVar9 = FUN_005dc920();
    } while (local_28 < uVar9);
  }
  FUN_00516c50(0xc519bfc4,*(undefined4 *)(param_1 + 0x10),0xff);
  ExceptionList = local_c;
  return;
}

