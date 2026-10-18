/* speed.exe 0051b870 FUN_0051b870; analysis pseudocode, not buildable source.
 * calls 00516be0 FUN_00516be0
 * calls 007c4b80 FUN_007c4b80
 * calls 00574bc0 FUN_00574bc0
 */

void __thiscall FUN_0051b870(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_retaddr;
  
  FUN_00574bc0(param_3);
  iVar2 = DAT_0091ca20;
  iVar1 = *(int *)(DAT_0091ca20 + 4);
  uVar3 = FUN_007c4b80();
  *(undefined4 *)(iVar2 + 4) = uVar3;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  (**(code **)(*param_1 + 0x38))(param_3);
  if (iVar1 != *(int *)(DAT_0091ca20 + 4)) {
    FUN_00516be0(0x26ded57,unaff_retaddr,0xffffffff,0xff);
  }
  return;
}

