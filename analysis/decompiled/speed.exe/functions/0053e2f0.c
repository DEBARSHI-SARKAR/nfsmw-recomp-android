/* speed.exe 0053e2f0 FUN_0053e2f0; analysis pseudocode, not buildable source.
 * calls 005b5b70 FUN_005b5b70
 * calls 005257f0 FUN_005257f0
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 00591d90 FUN_00591d90
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0056e340 FUN_0056e340
 * calls 00513b50 FUN_00513b50
 * calls 0078c730 FUN_0078c730
 * calls 00572070 FUN_00572070
 * calls 008370c0 FUN_008370c0
 * calls 00460d20 FUN_00460d20
 */

void __thiscall FUN_0053e2f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = "ControllerUnplugged.fng";
  if (DAT_0091d218 < 1) {
    iVar1 = FUN_005b5b70("ControllerUnplugged.fng");
  }
  else {
    FUN_00572070();
    iVar1 = FUN_00591d90(pcVar5);
  }
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_0056c6e0(*(int *)(param_1 + 0x2c));
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    if (param_3 != 0) {
      FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
      return;
    }
    iVar1 = FUN_0078c730();
    iVar1 = FUN_008370c0(*(undefined4 *)(iVar1 + 0xf8),0);
    iVar2 = FUN_0078c730();
    iVar2 = FUN_008370c0(*(undefined4 *)(iVar2 + 0xf8),1);
    if (iVar1 == 0) {
LAB_0053e3bf:
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_0056bc10(0x8b207e1a);
      FUN_00598970(uVar3,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar4);
      return;
    }
    if (iVar2 == 0) {
      uVar3 = FUN_0056e340();
      iVar1 = FUN_00460d20(iVar1,uVar3);
      if (iVar1 == 0) goto LAB_0053e3bf;
    }
    FUN_005257f0("OLX_FindResults.fng",0,0,0);
  }
  return;
}

