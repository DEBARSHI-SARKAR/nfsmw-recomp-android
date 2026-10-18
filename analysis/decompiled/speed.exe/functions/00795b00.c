/* speed.exe 00795b00 FUN_00795b00; analysis pseudocode, not buildable source.
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00460d20 FUN_00460d20
 * calls 00794f80 FUN_00794f80
 * calls 007ec1bd FUN_007ec1bd
 * calls 0083c880 FUN_0083c880
 * calls 00793340 FUN_00793340
 * calls 0056e340 FUN_0056e340
 * calls EXTERNAL:00000010 InterlockedDecrement
 * calls EXTERNAL:0000000f InterlockedIncrement
 */

undefined4 __thiscall FUN_00795b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_208;
  undefined4 local_207;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if (*(int *)(param_1 + 8) != -1) {
    uVar1 = FUN_0056e340();
    iVar2 = FUN_00460d20(param_1 + 0x40,uVar1);
    if (iVar2 == 0) {
      iVar3 = FUN_00794f80();
      iVar2 = *(int *)(iVar3 + 0x40);
      if ((iVar2 == 0) || (*(int *)(iVar2 + 8) != 0x67737461)) {
        for (puVar4 = *(undefined4 **)(iVar3 + 0x30); puVar4 != (undefined4 *)(iVar3 + 0x30);
            puVar4 = (undefined4 *)*puVar4) {
          if (puVar4[2] == 0x67737461) {
            iVar2 = puVar4[8];
            goto LAB_00795b94;
          }
        }
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x20);
LAB_00795b94:
        if (iVar2 != -1) goto LAB_00795c23;
      }
      if (*(int *)(param_1 + 0x170) <= *(int *)(param_1 + 0x214)) {
        local_208 = 0;
        puVar4 = &local_207;
        for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        *(undefined1 *)((int)puVar4 + 2) = 0;
        FUN_0083c880(&local_208,0x200,&DAT_008b4cbc,param_1 + 0xc);
        uVar8 = 0;
        uVar7 = 0;
        puVar6 = &LAB_00794ff0;
        puVar5 = &local_208;
        uVar1 = 0x67737461;
        FUN_00794f80(0x67737461,puVar5,&LAB_00794ff0,0,param_2,param_3,0);
        uVar1 = FUN_00793340(uVar1,puVar5,puVar6,uVar7,param_2,param_3,uVar8);
        InterlockedDecrement(&DAT_009b4438);
        FUN_007ec1c8();
        return uVar1;
      }
    }
  }
LAB_00795c23:
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return 0xffffffff;
}

