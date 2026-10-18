/* speed.exe 0078fa00 FUN_0078fa00; analysis pseudocode, not buildable source.
 * calls 0065f7a0 FUN_0065f7a0
 * calls 0064d8f0 FUN_0064d8f0
 * calls 0065f830 FUN_0065f830
 * calls 0078a900 FUN_0078a900
 * calls 0065aed0 FUN_0065aed0
 * calls 0065f680 FUN_0065f680
 * calls 00460ca0 FUN_00460ca0
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0078fa00(char *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 local_a38 [3];
  undefined1 auStack_a35 [301];
  undefined1 local_908 [3];
  undefined1 auStack_905 [301];
  char local_7d8 [2004];
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = s_online_cfg_00905d58;
  }
  iVar4 = FUN_0065f7a0(param_1);
  if (iVar4 != 0) {
    uVar5 = FUN_0065f680(param_1,1,1);
    pcVar8 = local_7d8;
    for (iVar4 = 500; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + 4;
    }
    uVar6 = FUN_0064d8f0(uVar5);
    FUN_0065f830(uVar5,local_7d8,uVar6);
    FUN_0065aed0(uVar5);
    local_a38[0] = 0;
    puVar9 = (undefined4 *)((int)local_a38 + 1);
    for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    *(undefined1 *)((int)puVar9 + 2) = 0;
    local_908[0] = 0;
    puVar9 = (undefined4 *)((int)local_908 + 1);
    for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    *(undefined2 *)puVar9 = 0;
    bVar2 = false;
    *(undefined1 *)((int)puVar9 + 2) = 0;
    uVar7 = 0;
    do {
      pcVar8 = local_7d8 + uVar7;
      cVar1 = local_7d8[uVar7];
      uVar3 = uVar7;
      while (cVar1 != '=') {
        uVar7 = uVar3 + 1;
        if (2000 < uVar7) {
          bVar2 = true;
          goto LAB_0078fb53;
        }
        cVar1 = local_7d8[uVar3 + 1];
        uVar3 = uVar7;
      }
      puVar9 = (undefined4 *)local_a38;
      for (iVar4 = 0x4b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      FUN_00460ca0(local_a38,pcVar8,local_7d8 + (uVar3 - (int)pcVar8));
      cVar1 = local_7d8[uVar3 + 1];
      uVar7 = uVar3;
      while ((cVar1 != '\r' && (cVar1 != '\0'))) {
        cVar1 = local_7d8[uVar7 + 2];
        uVar7 = uVar7 + 1;
      }
      puVar9 = (undefined4 *)local_908;
      for (iVar4 = 0x4b; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      FUN_00460ca0(local_908,local_7d8 + uVar3 + 1,
                   local_7d8 + ((uVar7 + 1) - (int)(local_7d8 + uVar3 + 1)));
      uVar7 = uVar7 + 2;
      FUN_0078a900(local_a38,local_908);
LAB_0078fb53:
      for (; ((cVar1 = local_7d8[uVar7], cVar1 == ' ' || (cVar1 == '\n')) || (cVar1 == '\r'));
          uVar7 = uVar7 + 1) {
      }
    } while (((uVar7 < 0x7d1) && (local_7d8[uVar7] != '\0')) && (!bVar2));
  }
  return;
}

