/* speed.exe 0053f630 FUN_0053f630; analysis pseudocode, not buildable source.
 * calls 00515e20 FUN_00515e20
 * calls 005b5b70 FUN_005b5b70
 * calls 00598970 FUN_00598970
 * calls 00516af0 FUN_00516af0
 * calls 00798380 FUN_00798380
 * calls 0045d3a0 FUN_0045d3a0
 * calls 00790370 FUN_00790370
 * calls 00513b50 FUN_00513b50
 * calls 00460d20 FUN_00460d20
 * calls 00572070 FUN_00572070
 * calls 0078c900 FUN_0078c900
 * calls 0079a9e0 FUN_0079a9e0
 * calls 0053f560 FUN_0053f560
 * calls 008375e0 FUN_008375e0
 * calls 0056bc10 FUN_0056bc10
 * calls 00591d90 FUN_00591d90
 * calls 005b7780 FUN_005b7780
 * calls 0078c8d0 FUN_0078c8d0
 * calls 0078c730 FUN_0078c730
 * calls 00572e80 FUN_00572e80
 * calls 0083d9c0 FUN_0083d9c0
 */

void __thiscall FUN_0053f630(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined1 local_108;
  undefined4 local_107;
  
  FUN_0053f560(0);
  local_108 = 0;
  puVar6 = &local_107;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  if (param_3 == 0) {
    FUN_0079a9e0();
    iVar5 = FUN_0045d3a0(0);
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      iVar7 = iVar5;
      FUN_0079a9e0(iVar5);
      iVar2 = FUN_00790370(iVar7);
      iVar7 = iVar2 + 0xc;
      iVar3 = FUN_00460d20(iVar7,&DAT_0091c39c);
      if (iVar3 == 0) {
        uVar4 = *(undefined4 *)(iVar2 + 8);
        uVar8 = 1;
        FUN_0079a9e0(iVar7,uVar4,1);
        FUN_00798380(iVar7,uVar4,uVar8);
      }
    }
    FUN_0079a9e0();
    iVar5 = FUN_0045d3a0(0);
    if (iVar5 == 0) {
      FUN_00572e80(1,0);
    }
    puVar9 = &DAT_0091c39c;
    FUN_0078c730(&DAT_0091c39c);
    cVar1 = FUN_0078c900(puVar9);
    if (cVar1 != '\0') {
      DAT_0091ca8c = 0;
      FUN_0078c730(0);
      uVar4 = FUN_0078c8d0();
      FUN_0083d9c0(uVar4);
      FUN_00572e80(2,0);
    }
    FUN_008375e0(DAT_0091c398,0);
    uVar4 = FUN_0056bc10(0x50185f4,&DAT_0091c39c,&DAT_0091c39c);
    FUN_00515e20(&local_108,0x100,uVar4);
    FUN_00598970(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,
                 &local_108);
    FUN_00572e80(0,0);
    DAT_0091ca90 = 1;
  }
  else if (param_3 == -5) {
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    uVar8 = FUN_0056bc10(0xd7a26411);
    FUN_00598970(uVar4,&DAT_00890978,1,0x417b2601,0x34dc1bec,0x34dc1bec,uVar8);
  }
  else if ((*(char *)(param_1 + 0xf6) == '\0') || (param_3 != -0x6c)) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
  }
  pcVar10 = "OLX_Message.fng";
  if (DAT_0091d218 < 1) {
    iVar5 = FUN_005b5b70("OLX_Message.fng");
  }
  else {
    FUN_00572070();
    iVar5 = FUN_00591d90(pcVar10);
  }
  if (iVar5 != 0) {
    uVar4 = FUN_00516af0("OLX_Message.fng");
    FUN_005b7780(0xe1fde1d1,0,uVar4,0xffffffff,0);
  }
  return;
}

