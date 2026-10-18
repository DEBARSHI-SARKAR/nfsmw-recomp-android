/* speed.exe 007960c0 FUN_007960c0; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 0083c880 FUN_0083c880
 */

undefined4 __thiscall FUN_007960c0(int param_1,char *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_88;
  undefined4 local_87;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) && (-1 < *(int *)(param_1 + 8))) {
    local_88 = 0;
    puVar2 = &local_87;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined2 *)puVar2 = 0;
    *(undefined1 *)((int)puVar2 + 2) = 0;
    FUN_0083c880(&local_88,0x80,&DAT_008b4cbc,param_1 + 0xc);
    FUN_0083c880(&local_88,0x80,&DAT_008b6ea8,param_2);
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &LAB_00794ff0;
    puVar4 = &local_88;
    uVar3 = 0x67736574;
    FUN_00794f80(0x67736574,puVar4,&LAB_00794ff0,0,0,0,0);
    uVar3 = FUN_00793340(uVar3,puVar4,puVar5,uVar6,uVar7,uVar8,uVar9);
    return uVar3;
  }
  return 0xffffffff;
}

