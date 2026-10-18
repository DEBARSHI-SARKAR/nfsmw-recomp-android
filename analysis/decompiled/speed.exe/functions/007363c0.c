/* speed.exe 007363c0 FUN_007363c0; analysis pseudocode, not buildable source.
 * calls 00465af0 FUN_00465af0
 * calls 00464b90 FUN_00464b90
 * calls 00464c20 FUN_00464c20
 * calls 00464ae0 FUN_00464ae0
 * calls 00461fb0 FUN_00461fb0
 * calls 00464bd0 FUN_00464bd0
 * calls 00461af0 FUN_00461af0
 * calls 0065f7a0 FUN_0065f7a0
 * calls 00462060 FUN_00462060
 */

int FUN_007363c0(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  undefined1 local_2a0 [644];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0088088b;
  local_1c = ExceptionList;
  puVar5 = param_2;
  ExceptionList = &local_1c;
  for (iVar6 = (param_3 & 0x7ffffff) << 3; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar7 = 0;
  iVar6 = FUN_0065f7a0(param_1);
  if (iVar6 != 0) {
    FUN_00465af0(param_1,1);
    local_14 = 0;
    if (0 < (int)param_3) {
      do {
        iVar6 = FUN_00461fb0("HOTPOSITION:");
        if (iVar6 == 0) break;
        iVar7 = iVar7 + 1;
        puVar5 = (undefined4 *)FUN_00464c20(local_2a0);
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        *param_2 = *puVar5;
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        FUN_00464ae0();
        uVar4 = FUN_00464b90();
        *(undefined2 *)(param_2 + 4) = uVar4;
        param_2[5] = 0;
        cVar3 = FUN_00462060();
        if (cVar3 != '\0') {
          FUN_00464ae0();
          fVar8 = (float10)FUN_00464bd0();
          param_2[5] = (float)fVar8;
        }
        param_2 = param_2 + 8;
      } while (iVar7 < (int)param_3);
    }
    local_14 = 0xffffffff;
    FUN_00461af0();
  }
  ExceptionList = local_1c;
  return iVar7;
}

