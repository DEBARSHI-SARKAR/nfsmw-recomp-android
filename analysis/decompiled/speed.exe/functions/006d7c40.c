/* speed.exe 006d7c40 FUN_006d7c40; analysis pseudocode, not buildable source.
 * calls 006c9810 FUN_006c9810
 * calls 006c9860 FUN_006c9860
 * calls 006beeb0 FUN_006beeb0
 * calls 006d7b30 FUN_006d7b30
 * calls 007c94b0 __chkstk
 * calls 00466340 FUN_00466340
 * calls 0073d4e0 FUN_0073d4e0
 * calls 007e66e0 __strnicmp
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_006d7c40(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_8088;
  int local_8084;
  int local_8080;
  int local_807c;
  int local_8078;
  int local_8074;
  int local_8070;
  undefined1 local_8060 [48];
  undefined4 local_8030;
  undefined4 local_802c;
  undefined4 local_8028;
  undefined4 local_8024;
  int aiStack_8020 [4096];
  int aiStack_4020 [4095];
  undefined4 uStack_24;
  int iStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0087e44e;
  local_1c = ExceptionList;
  uStack_24 = 0x6d7c66;
  local_8088 = 0;
  local_807c = 0;
  local_8074 = 0;
  local_8070 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    local_8080 = 0;
    ExceptionList = &local_1c;
    iStack_20 = param_1;
    do {
      iVar4 = (int)*(short *)(*(int *)(param_2 + 0x20) + 0x3e + local_8080);
      iVar8 = *(int *)(param_2 + 0x20) + local_8080;
      iVar5 = *(int *)(param_2 + 0x18);
      cVar3 = FUN_0073d4e0(*(undefined4 *)(iVar5 + 0x18 + iVar4 * 0x48));
      if ((((cVar3 == '\0') && ((*(uint *)(iVar8 + 0x18) & 0x40000000) == 0)) &&
          ((*(uint *)(iVar8 + 0x18) & 0x300000) != 0)) &&
         ((iVar5 = *(int *)(iVar5 + iVar4 * 0x48 + 0x28), iVar5 != 0 &&
          (piVar7 = *(int **)(iVar5 + 0xc), piVar7 != (int *)0x0)))) {
        iVar5 = *(int *)(*piVar7 + 0x10);
        iVar4 = 0;
        local_8084 = 0;
        local_8078 = 0;
        if (0 < iVar5) {
          piVar6 = (int *)(*(int *)(*piVar7 + 0x14) + 0x30);
          do {
            iVar4 = iVar4 + piVar6[0xb];
            if (piVar6[8] != 0) {
              local_8084 = local_8084 + (uint)piVar6[8] / *(uint *)(piVar6[1] + 8);
            }
            iVar1 = *piVar6;
            if (((((iVar1 != 0) && (iVar1 != 3)) && ((iVar1 != 5 && ((iVar1 != 1 && (iVar1 != 6)))))
                 ) || (iVar1 = *(int *)(piVar7[0xb] + 4 + (uint)*(byte *)(piVar6 + -6) * 8),
                      iVar1 == 0)) || (*(char *)(iVar1 + 0x55) == '\x01')) goto LAB_006d7da4;
            local_8078 = local_8078 + 1;
            piVar6 = piVar6 + 0x1a;
          } while (local_8078 < iVar5);
          local_807c = local_807c + iVar4;
          local_8074 = local_8074 + local_8084;
          aiStack_8020[local_8088] = iVar8;
          aiStack_4020[local_8088] = (int)piVar7;
          local_8088 = local_8088 + 1;
        }
LAB_006d7da4:
        iVar5 = __strnicmp((char *)(piVar7 + 0x28),"SHADOW",6);
        if (iVar5 == 0) {
          *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | 0x10;
        }
      }
      local_8070 = local_8070 + 1;
      local_8080 = local_8080 + 0x40;
    } while (local_8070 < *(int *)(param_2 + 0x24));
    if (((0 < local_807c) && (0 < local_8074)) && (0 < DAT_00901830)) {
      iVar5 = FUN_00466340(*(undefined4 *)(DAT_00982d10 + 8));
      local_14 = 0;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = FUN_006d7b30(*(undefined4 *)(param_2 + 0xc),local_807c,local_8074);
      }
      local_14 = 0xffffffff;
      FUN_006c9810();
      iVar4 = 0;
      if (0 < local_8088) {
        do {
          iVar8 = aiStack_8020[iVar4];
          FUN_006beeb0(local_8060);
          local_802c = *(undefined4 *)(iVar8 + 0x24);
          local_8028 = *(undefined4 *)(iVar8 + 0x28);
          local_8030 = *(undefined4 *)(iVar8 + 0x20);
          local_8024 = 0x3f800000;
          FUN_006c9860(aiStack_4020[iVar4],local_8060);
          iVar4 = iVar4 + 1;
          *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | 0x4000000;
        } while (iVar4 < local_8088);
      }
      piVar7 = *(int **)(iVar5 + 0x34);
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x30))(piVar7);
      }
      piVar7 = *(int **)(iVar5 + 0x48);
      *(undefined4 *)(iVar5 + 0x38) = 0;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x30))(piVar7);
      }
      *(undefined4 *)(iVar5 + 0x44) = 0;
      puVar2 = *(undefined4 **)(param_1 + 4);
      piVar7 = (int *)(iVar5 + 0x10);
      *puVar2 = piVar7;
      *(int **)(param_1 + 4) = piVar7;
      *(undefined4 **)(iVar5 + 0x14) = puVar2;
      *piVar7 = param_1;
    }
  }
  ExceptionList = local_1c;
  return;
}

