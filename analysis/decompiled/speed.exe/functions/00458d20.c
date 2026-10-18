/* speed.exe 00458d20 FUN_00458d20; analysis pseudocode, not buildable source.
 * calls 00402570 FUN_00402570
 * calls 004588f0 FUN_004588f0
 * calls 004025a0 FUN_004025a0
 * calls 00454210 FUN_00454210
 * calls 00457db0 FUN_00457db0
 * calls 00456780 FUN_00456780
 * calls 004589f0 FUN_004589f0
 */

char __thiscall FUN_00458d20(int param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_10 [4];
  
  cVar4 = FUN_00454210(param_2);
  if (cVar4 != '\0') {
    return '\0';
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  iVar3 = *(int *)(iVar2 + 0x30);
  local_10[0] = param_2;
  uVar7 = (uint)*(ushort *)(iVar2 + 0x2e) * 0x10 + iVar3;
  cVar4 = '\0';
  uVar5 = FUN_00456780(iVar3,uVar7,local_10,0);
  if ((uVar5 < uVar7) && (uVar5 != 0)) {
    if ((*(byte *)(uVar5 + 0xe) & 1) == 0) {
      if (*(ushort *)(uVar5 + 10) < 5) {
        puVar8 = (undefined4 *)0x0;
        param_3 = 0x20;
      }
      else {
        puVar8 = (undefined4 *)FUN_00402570(*(ushort *)(uVar5 + 10),"Attrib::attribute_data");
        param_3 = 1;
        if (puVar8 != (undefined4 *)0x0) {
          uVar1 = *(ushort *)(uVar5 + 10);
          puVar9 = puVar8;
          for (uVar7 = (uint)(uVar1 >> 2); uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          for (uVar7 = uVar1 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar9 = 0;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
      }
      cVar4 = FUN_00457db0(param_2,*(undefined4 *)(uVar5 + 4),puVar8,1,param_3,0,
                           *(undefined4 *)(param_1 + 0x18));
      if ((cVar4 == '\0') && ((param_3 & 1) != 0)) {
        FUN_004025a0(puVar8,*(undefined2 *)(uVar5 + 10),"Attrib::attribute_data");
      }
    }
    else {
      uVar6 = FUN_004588f0(*(undefined4 *)(uVar5 + 4),param_3);
      cVar4 = FUN_00457db0(param_2,*(undefined4 *)(uVar5 + 4),uVar6,1,3,0,
                           *(undefined4 *)(param_1 + 0x18));
      if (cVar4 == '\0') {
        FUN_004589f0(uVar6);
        return '\0';
      }
    }
  }
  return cVar4;
}

